import sys
from PyQt6 import QtWidgets, uic
from PyQt6.QtWidgets import QMessageBox
import math

class Calculator(QtWidgets.QMainWindow):
    def __init__(self):
        super(Calculator, self).__init__()
        
        try:
            uic.loadUi('PyCalcy.ui', self)
        except FileNotFoundError:
            QMessageBox.critical(self, "Помилка", 
                               "Не знайдено файл 'PyCalcy.ui'! Переконайся, що він у тій самій папці.")
            sys.exit(1)
            
        # Ініціалізація змінних
        self.first_number = 0.0
        self.current_operation = ""
        self.start_new_number = True
        
        # Встановлення початкового значення
        self.label_output.setText("0")
        
        # Підключення кнопок
        self.connect_buttons()
    
    def connect_buttons(self):
        """Підключення сигналів кнопок до слотів"""
        # Цифрові кнопки (0-9)
        self.pushButton_num_0.clicked.connect(self.digit_clicked)
        self.pushButton_num_1.clicked.connect(self.digit_clicked)
        self.pushButton_num_2.clicked.connect(self.digit_clicked)
        self.pushButton_num_3.clicked.connect(self.digit_clicked)
        self.pushButton_num_4.clicked.connect(self.digit_clicked)
        self.pushButton_num_5.clicked.connect(self.digit_clicked)
        self.pushButton_num_6.clicked.connect(self.digit_clicked)
        self.pushButton_num_7.clicked.connect(self.digit_clicked)
        self.pushButton_num_8.clicked.connect(self.digit_clicked)
        self.pushButton_num_9.clicked.connect(self.digit_clicked)
        
        # Операційні кнопки
        self.pushButton_addition.clicked.connect(self.operation_clicked)
        self.pushButton_subtraction.clicked.connect(self.operation_clicked)
        self.pushButton_multiplication.clicked.connect(self.operation_clicked)
        self.pushButton_division.clicked.connect(self.operation_clicked)
        self.pushButton_percentage.clicked.connect(self.operation_clicked)
        
        # Спеціальні кнопки
        self.pushButton_num_calculate.clicked.connect(self.calculate_clicked)
        self.pushButton_clear.clicked.connect(self.clear_clicked)
        self.pushButton_num_allClear.clicked.connect(self.all_clear_clicked)
        self.pushButton_positive_negative.clicked.connect(self.plus_minus_clicked)
        self.pushButton_num_dot.clicked.connect(self.dot_clicked)
    
    def digit_clicked(self):
        """Обробка натискання цифрових кнопок (0-9)"""
        button = self.sender()
        digit = button.text()
        current_text = self.label_output.text()
        
        # Обмеження довжини введення
        if len(current_text) >= 15 and not self.start_new_number:
            return
        
        if self.start_new_number:
            self.label_output.setText(digit)
            self.start_new_number = False
        else:
            if current_text == "0":
                self.label_output.setText(digit)
            else:
                self.label_output.setText(current_text + digit)
    
    def operation_clicked(self):
        """Обробка натискання кнопок операцій (+, -, *, /, %)"""
        button = self.sender()
        operation = button.text()
        
        # Не даємо зберегти операцію, якщо поточний текст - це вже операція
        if self.label_output.text() in ['+', '-', '*', '/', '%', 'X']:
             return

        try:
            self.first_number = float(self.label_output.text())
            self.current_operation = operation
            self.start_new_number = True
            self.label_output.setText(operation)
        except ValueError:
            QMessageBox.critical(self, "Помилка", "Некоректне значення!")
            self.all_clear_clicked()
    
    def calculate_clicked(self):
        """Виконання обчислення при натисканні на '='"""
        if not self.current_operation:
            return
        
        try:
            # Якщо юзер натискає 5 + =, то друге число = 5
            # Але якщо він натискає 5 + 2 =, то друге число = 2
            # Поточний текст не має бути операцією
            current_text = self.label_output.text()
            if current_text in ['+', '-', '*', '/', '%', 'X']:
                second_number = self.first_number
            else:
                second_number = float(current_text)
                
            result = self.perform_calculation(self.first_number, second_number, 
                                              self.current_operation)
            
            # Форматування результату, щоб уникнути 25.0
            self.label_output.setText(f"{result:g}")
            
            # Важливо: оновлюємо first_number, щоб можна було робити ланцюгові операції (5 + 2 = [7] + 3 = [10])
            self.first_number = result
            
            self.current_operation = ""
            self.start_new_number = True
            
        except ValueError:
            QMessageBox.critical(self, "Помилка", "Помилка обчислення!")
            self.all_clear_clicked()
    
    def perform_calculation(self, first, second, operation):
        """Логіка виконання арифметичних операцій"""
        if operation == '+':
            return first + second
        elif operation == '-':
            return first - second
        elif operation == 'X' or operation == '*':
            return first * second
        elif operation == '/':
            if second == 0:
                QMessageBox.critical(self, "Помилка", 
                                   "Ділення на нуль заборонено законом світу!")
                self.all_clear_clicked()
                return 0
            return first / second
        elif operation == '%':
            if second == 0:
                QMessageBox.critical(self, "Помилка", 
                                   "Ділення на нуль заборонено законом світу!")
                self.all_clear_clicked()
                return 0
            return math.fmod(first, second)
        return 0
    
    def clear_clicked(self):
        """Очищення поточного вводу (кнопка C)"""
        self.label_output.setText("0")
        self.start_new_number = True
    
    def all_clear_clicked(self):
        """Повне скидання калькулятора (кнопка AC)"""
        self.label_output.setText("0")
        self.first_number = 0.0
        self.current_operation = ""
        self.start_new_number = True
    
    def plus_minus_clicked(self):
        """Зміна знака числа на протилежний (+/-)"""
        current_text = self.label_output.text()
        
        # Перевірка, чи це не операція
        if current_text in ['+', '-', '*', '/', '%', 'X']:
            return
        
        try:
            value = float(current_text)
            value *= -1
            self.label_output.setText(f"{value:g}")
        except ValueError:
            pass # Ігноруємо помилку, якщо юзер натискає +/- на "0."
    
    def dot_clicked(self):
        """Додавання десяткової крапки до числа"""
        if self.start_new_number:
            self.label_output.setText("0.")
            self.start_new_number = False
        else:
            current_text = self.label_output.text()
            if '.' not in current_text:
                self.label_output.setText(current_text + ".")


if __name__ == '__main__':
    app = QtWidgets.QApplication(sys.argv)
    window = Calculator()
    window.show()
    sys.exit(app.exec())
