import sys
from PyQt6.QtWidgets import (
    QApplication, QMainWindow, QTextEdit, QFileDialog, QMessageBox, QStatusBar
)
from PyQt6.QtGui import QAction

class TextEditor(QMainWindow):
    def __init__(self):
        super().__init__()
        
        # Налаштування головного вікна
        self.setWindowTitle("Текстовий редактор")
        self.setGeometry(100, 100, 800, 600)
        
        # Зберігатимемо шлях до поточного відкритого файлу
        self.current_file_path = None
        
        # Головне текстове поле
        self.text_edit = QTextEdit()
        self.setCentralWidget(self.text_edit)
        
        # Рядок стану (для відображення шляху до файлу)
        self.status_bar = QStatusBar()
        self.setStatusBar(self.status_bar)
        self.status_bar.showMessage("Новий файл")
        
        # Створення меню "Файл"
        menu_bar = self.menuBar()
        file_menu = menu_bar.addMenu("Файл")
        
        # "Відкрити"
        open_action = QAction("Відкрити...", self)
        open_action.setShortcut("Ctrl+O")
        open_action.triggered.connect(self.open_file)
        file_menu.addAction(open_action)
        
        # "Зберегти"
        save_action = QAction("Зберегти", self)
        save_action.setShortcut("Ctrl+S")
        save_action.triggered.connect(self.save_file)
        file_menu.addAction(save_action)
        
        # "Зберегти як..."
        save_as_action = QAction("Зберегти як...", self)
        save_as_action.setShortcut("Ctrl+Shift+S")
        save_as_action.triggered.connect(self.save_file_as)
        file_menu.addAction(save_as_action)
        
        # "Вихід"
        file_menu.addSeparator()
        exit_action = QAction("Вихід", self)
        exit_action.setShortcut("Ctrl+Q")
        exit_action.triggered.connect(self.close)
        file_menu.addAction(exit_action)

    def open_file(self):
        """Відкриває діалог вибору файлу та завантажує текст."""
        # Відкриваємо діалог, фільтруємо за .txt та усіма файлами
        file_path, _ = QFileDialog.getOpenFileName(self, "Відкрити файл", "", 
                                                   "Text Files (*.txt);;All Files (*)")
        
        if file_path:
            try:
                with open(file_path, 'r', encoding='utf-8') as f:
                    text = f.read()
                
                self.text_edit.setText(text)
                self.current_file_path = file_path
                self.status_bar.showMessage(f"Відкрито: {file_path}")
                self.setWindowTitle(f"Текстовий редактор - {file_path}")
                
            except Exception as e:
                QMessageBox.critical(self, "Помилка", f"Не вдалося відкрити файл: {e}")

    def save_file(self):
        """Зберігає файл за поточним шляхом, або викликає 'Зберегти як...'."""
        if self.current_file_path:
            try:
                # Якщо шлях вже є, просто пишемо в нього
                with open(self.current_file_path, 'w', encoding='utf-8') as f:
                    f.write(self.text_edit.toPlainText())
                
                self.status_bar.showMessage(f"Збережено: {self.current_file_path}")
                
            except Exception as e:
                QMessageBox.critical(self, "Помилка", f"Не вдалося зберегти файл: {e}")
        else:
            # Якщо це новий файл то Зберегти як
            self.save_file_as()

    def save_file_as(self):
        """Відкриває діалог збереження файлу та зберігає текст."""
        file_path, _ = QFileDialog.getSaveFileName(self, "Зберегти файл як...", "", 
                                                   "Text Files (*.txt);;All Files (*)")
        
        if file_path:
            # Якщо користувач вибрав ім'я файлу, оновлюємо поточний шлях
            self.current_file_path = file_path
            # І одразу викликаємо звичайне збереження
            self.save_file()
            self.setWindowTitle(f"Текстовий редактор - {file_path}")

    def closeEvent(self, event):
        """Перехоплює подію закриття вікна, щоб запитати про збереження."""
        # Просто підтвердження виходу:
        reply = QMessageBox.question(self, 'Вихід', 
                                     "Ви точно при точно хочете вийти?",
                                     QMessageBox.StandardButton.Yes | QMessageBox.StandardButton.No,
                                     QMessageBox.StandardButton.No)

        if reply == QMessageBox.StandardButton.Yes:
            event.accept()
        else:
            event.ignore()

if __name__ == '__main__':
    app = QApplication(sys.argv)
    editor = TextEditor()
    editor.show()
    sys.exit(app.exec())
