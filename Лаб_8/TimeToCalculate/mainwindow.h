#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    // Конструктор класу
    MainWindow(QWidget *parent = nullptr);
    // Деструктор класу
    ~MainWindow();

private slots:
    void digitClicked(); //для обробки натискання цифрових кнопок (0-9)

    void operationClicked(); // для обробки арифметичних операцій

    void calculateClicked(); // для обробки натискання кнопки "="

    void clearClicked(); // для очищення поточного вводу (кнопка C)

    void allClearClicked(); // для повного скидання калькулятора (кнопка AC/CE)

    void plusMinusClicked(); // для зміни знака числа (+/-)

    void dotClicked(); // для додавання десяткової крапки

private:
    Ui::MainWindow *ui;

    void connectButtons(); // для підключення сигналів кнопок до ів

    double performCalculation(double first, double second, const QString& operation); // для виконання математичних розрахунків


    double firstNumber; // Зберігає перше число для операції

    QString currentOperation; // Зберігає поточну арифметичну операцію

    bool startNewNumber; // Прапорець, що вказує на початок вводу нового числа
};
#endif // MAINWINDOW_H
