#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <cmath>

// Конструктор головного вікна
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , firstNumber(0)
    , currentOperation("")
    , startNewNumber(true)
{
    ui->setupUi(this);
    ui->label_output->setText("0");
    connectButtons();
}

// Деструктор головного вікна
MainWindow::~MainWindow()
{
    delete ui;
}

// Ініціалізує з'єднання сигналів та слотів для всіх кнопок
void MainWindow::connectButtons()
{
    connect(ui->pushButton_num_0, &QPushButton::clicked, this, &MainWindow::digitClicked);
    connect(ui->pushButton_num_1, &QPushButton::clicked, this, &MainWindow::digitClicked);
    connect(ui->pushButton_num_2, &QPushButton::clicked, this, &MainWindow::digitClicked);
    connect(ui->pushButton_num_3, &QPushButton::clicked, this, &MainWindow::digitClicked);
    connect(ui->pushButton_num_4, &QPushButton::clicked, this, &MainWindow::digitClicked);
    connect(ui->pushButton_num_5, &QPushButton::clicked, this, &MainWindow::digitClicked);
    connect(ui->pushButton_num_6, &QPushButton::clicked, this, &MainWindow::digitClicked);
    connect(ui->pushButton_num_7, &QPushButton::clicked, this, &MainWindow::digitClicked);
    connect(ui->pushButton_num_8, &QPushButton::clicked, this, &MainWindow::digitClicked);
    connect(ui->pushButton_num_9, &QPushButton::clicked, this, &MainWindow::digitClicked);

    connect(ui->pushButton_addition, &QPushButton::clicked, this, &MainWindow::operationClicked);
    connect(ui->pushButton_subtraction, &QPushButton::clicked, this, &MainWindow::operationClicked);
    connect(ui->pushButton_multiplication, &QPushButton::clicked, this, &MainWindow::operationClicked);
    connect(ui->pushButton_division, &QPushButton::clicked, this, &MainWindow::operationClicked);
    connect(ui->pushButton_percentage, &QPushButton::clicked, this, &MainWindow::operationClicked);

    connect(ui->pushButton_num_calculate, &QPushButton::clicked, this, &MainWindow::calculateClicked);
    connect(ui->pushButton_clear, &QPushButton::clicked, this, &MainWindow::clearClicked);
    connect(ui->pushButton_num_allClear, &QPushButton::clicked, this, &MainWindow::allClearClicked);
    connect(ui->pushButton_positive_negative, &QPushButton::clicked, this, &MainWindow::plusMinusClicked);
    connect(ui->pushButton_num_dot, &QPushButton::clicked, this, &MainWindow::dotClicked);
}

// Обробляє натискання кнопок з цифрами
void MainWindow::digitClicked()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString digit = button->text();
    QString currentText = ui->label_output->text();

    if (currentText.length() >= 15 && !startNewNumber)
    {
        return;
    }

    if (startNewNumber)
    {
        ui->label_output->setText(digit);
        startNewNumber = false;
    }
    else
    {
        if (currentText == "0")
        {
            ui->label_output->setText(digit);
        }
        else
        {
            ui->label_output->setText(currentText + digit);
        }
    }
}

// Обробляє натискання кнопок операцій (+, -, *, /, %)
void MainWindow::operationClicked()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString operation = button->text();

    firstNumber = ui->label_output->text().toDouble();
    currentOperation = operation;
    startNewNumber = true;

    ui->label_output->setText(operation);
}

// Виконує обчислення при натисканні на "="
void MainWindow::calculateClicked()
{
    if (currentOperation.isEmpty())
    {
        return;
    }

    double secondNumber = ui->label_output->text().toDouble();
    double result = performCalculation(firstNumber, secondNumber, currentOperation);
    ui->label_output->setText(QString::number(result, 'g', 15));

    currentOperation.clear();
    startNewNumber = true;
}

// Логіка виконання арифметичних операцій
double MainWindow::performCalculation(double first, double second, const QString& operation)
{
    if (operation == "+")
    {
        return first + second;
    }
    else if (operation == "-")
    {
        return first - second;
    }
    else if (operation == "X" || operation == "*")
    {
        return first * second;
    }
    else if (operation == "/")
    {
        if (second == 0)
        {
            QMessageBox::critical(this, "Помилка", "Ділення на нуль заборонено законом світу!");
            allClearClicked();
            return 0;
        }
        return first / second;
    }
    else if (operation == "%")
    {
        if (second == 0)
        {
            QMessageBox::critical(this, "Помилка", "Ділення на нуль заборонено законом світу!");
            allClearClicked();
            return 0;
        }
        return fmod(first, second);
    }
    return 0;
}

// Очищує поточне введене число
void MainWindow::clearClicked()
{
    ui->label_output->setText("0");
    startNewNumber = true;
}

// Повністю скидає стан калькулятора
void MainWindow::allClearClicked()
{
    ui->label_output->setText("0");
    firstNumber = 0;
    currentOperation.clear();
    startNewNumber = true;
}

// Змінює знак числа на протилежний
void MainWindow::plusMinusClicked()
{
    QString currentText = ui->label_output->text();
    double value = currentText.toDouble();
    value *= -1;
    ui->label_output->setText(QString::number(value, 'g', 15));
}

// Додає десяткову крапку до числа
void MainWindow::dotClicked()
{
    if (startNewNumber)
    {
        ui->label_output->setText("0.");
        startNewNumber = false;
    }
    else
    {
        if (!ui->label_output->text().contains('.'))
        {
            ui->label_output->setText(ui->label_output->text() + ".");
        }
    }
}
