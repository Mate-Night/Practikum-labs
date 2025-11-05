#include "pch.h"

using namespace System;

// Функція введення цілого числа
int ReadInt(String^ prompt)
{
    while (true)
    {
        try
        {
            Console::Write(prompt);
            return Convert::ToInt32(Console::ReadLine());
        }
        catch (Exception^)
        {
            Console::WriteLine(L"Помилка! Введіть ціле число.");
        }
    }
}

// Функція введення дійсного числа
double ReadDouble(String^ prompt)
{
    while (true)
    {
        try
        {
            Console::Write(prompt);
            return Convert::ToDouble(Console::ReadLine());
        }
        catch (Exception^)
        {
            Console::WriteLine(L"Помилка! Введіть число.");
        }
    }
}

// ЗАВДАННЯ 1: Заробітна плата водіїв
void Task1()
{
    Console::Clear();
    Console::WriteLine(L"===================================================");
    Console::WriteLine(L"      ЗАВДАННЯ 1: Заробітна плата водіїв");
    Console::WriteLine(L"===================================================\n");

    Console::WriteLine(L"M водіїв перевозили вантажі на певні відстані.");
    Console::WriteLine(L"Розрахуємо заробітну плату за формулою:");
    Console::WriteLine(L"Зарплата = Вага × Відстань × Вартість\n");

    // Введення вартості перевезення
    double C = ReadDouble(L"Введіть вартість перевезення 1 т·км (грн): ");

    // Введення кількості водіїв
    int M;
    do
    {
        M = ReadInt(L"Введіть кількість водіїв M: ");
        if (M <= 0)
            Console::WriteLine(L"Помилка! Кількість має бути більше 0.");
    } while (M <= 0);

    // Створення масивів
    array<int>^ numbers = gcnew array<int>(M);      // Табельні номери
    array<double>^ weights = gcnew array<double>(M); // Вага вантажів (тонни)
    array<double>^ distances = gcnew array<double>(M); // Відстань (км)

    Console::WriteLine(L"\nВведіть дані для кожного водія:");
    for (int i = 0; i < M; i++)
    {
        Console::WriteLine(L"\nВодій #{0}:", i + 1);
        numbers[i] = ReadInt(L"  Табельний номер: ");
        weights[i] = ReadDouble(L"  Вага вантажу (т): ");
        distances[i] = ReadDouble(L"  Відстань (км): ");
    }

    // Виведення таблиці результатів
    Console::WriteLine(L"\n --------------------------------------------------------");
    Console::WriteLine(L" | Табельний | Вага (т) | Відстань | Заробітна плата |");
    Console::WriteLine(L" |   номер   |          |   (км)   |      (грн)      |");
    Console::WriteLine(L" --------------------------------------------------------");

    // Обчислення заробітної плати
    for (int i = 0; i < M; i++)
    {
        double salary = weights[i] * distances[i] * C;
        Console::WriteLine(L" |   {0,5}   |  {1,6:F2}  |  {2,6:F2}  |    {3,10:F2}   |",
            numbers[i], weights[i], distances[i], salary);
    }
}

// ЗАВДАННЯ 2: Впорядкування рядків матриці
void Task2()
{
    Console::Clear();
    Console::WriteLine(L"===================================================");
    Console::WriteLine(L"  ЗАВДАННЯ 2: Впорядкування рядків за мінімумами");
    Console::WriteLine(L"===================================================\n");

    Console::WriteLine(L"Отримати матрицю із заданої, переставивши рядки");
    Console::WriteLine(L"за збільшенням найменших елементів рядків.\n");

    // Введення розмірів матриці
    int rows, cols;
    do
    {
        rows = ReadInt(L"Введіть кількість рядків матриці N: ");
        if (rows <= 0)
            Console::WriteLine(L"Помилка! Кількість рядків має бути більше 0.");
    } while (rows <= 0);

    do
    {
        cols = ReadInt(L"Введіть кількість стовпців матриці M: ");
        if (cols <= 0)
            Console::WriteLine(L"Помилка! Кількість стовпців має бути більше 0.");
    } while (cols <= 0);

    // Створення матриці
    array<int, 2>^ matrix = gcnew array<int, 2>(rows, cols);

    // Вибір способу заповнення
    Console::WriteLine(L"\nОберіть спосіб заповнення матриці:");
    Console::WriteLine(L"1 - Вручну");
    Console::WriteLine(L"2 - Автоматично (випадкові числа від 1 до 50)");

    int choice;
    do
    {
        choice = ReadInt(L"Ваш вибір: ");
        if (choice != 1 && choice != 2)
            Console::WriteLine(L"Помилка! Оберіть 1 або 2.");
    } while (choice != 1 && choice != 2);

    // Заповнення матриці
    if (choice == 1)
    {
        Console::WriteLine(L"\nВведіть елементи матриці:");
        for (int i = 0; i < rows; i++)
        {
            Console::WriteLine(L"Рядок {0}:", i + 1);
            for (int j = 0; j < cols; j++)
            {
                matrix[i, j] = ReadInt(String::Format(L"  [{0},{1}] = ", i, j));
            }
        }
    }
    else
    {
        Random^ rand = gcnew Random();
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                matrix[i, j] = rand->Next(1, 51);
            }
        }
    }

    // Виведення вихідної матриці
    Console::WriteLine(L"\nВихідна матриця ({0}x{1}):\n", rows, cols);
    for (int i = 0; i < rows; i++)
    {
        Console::Write(L"Рядок {0}: ", i + 1);
        for (int j = 0; j < cols; j++)
        {
            Console::Write(L"{0,5}", matrix[i, j]);
        }
        Console::WriteLine();
    }

    // Знаходження мінімального елемента в кожному рядку
    array<int>^ minValues = gcnew array<int>(rows);

    Console::WriteLine(L"\nМінімальні елементи рядків:");
    for (int i = 0; i < rows; i++)
    {
        int minVal = matrix[i, 0];
        for (int j = 1; j < cols; j++)
        {
            if (matrix[i, j] < minVal)
                minVal = matrix[i, j];
        }
        minValues[i] = minVal;
        Console::WriteLine(L"Рядок {0}: min = {1}", i + 1, minVal);
    }

    // Сортування рядків за зростанням мінімальних елементів (метод бульбашки)
    for (int i = 0; i < rows - 1; i++)
    {
        for (int j = 0; j < rows - i - 1; j++)
        {
            if (minValues[j] > minValues[j + 1])
            {
                // Обмін мінімальних значень
                int tempMin = minValues[j];
                minValues[j] = minValues[j + 1];
                minValues[j + 1] = tempMin;

                // Обмін рядків матриці
                for (int k = 0; k < cols; k++)
                {
                    int temp = matrix[j, k];
                    matrix[j, k] = matrix[j + 1, k];
                    matrix[j + 1, k] = temp;
                }
            }
        }
    }

    // Виведення впорядкованої матриці
    Console::WriteLine(L"\nВпорядкована матриця ({0}x{1}):\n", rows, cols);
    for (int i = 0; i < rows; i++)
    {
        Console::Write(L"Рядок {0}: ", i + 1);
        for (int j = 0; j < cols; j++)
        {
            Console::Write(L"{0,5}", matrix[i, j]);
        }
        Console::Write(L"  (min = {0})", minValues[i]);
        Console::WriteLine();
    }

    Console::WriteLine();
}

// МЕНЮ
void ShowMenu()
{
    Console::WriteLine(L"=============================================");
    Console::WriteLine(L"|               Варіант 14                  |");
    Console::WriteLine(L"=============================================");
    Console::WriteLine(L"|  1. Завдання 1: Заробітна плата водіїв    |");
    Console::WriteLine(L"|  2. Завдання 2: Впорядкування матриці     |");
    Console::WriteLine(L"|  0. Вихід                                 |");
    Console::WriteLine(L"=============================================");
    Console::Write(L"\nОбираю: ");
}

// ГОЛОВНА
int main(array<System::String^>^ args)
{
    Console::OutputEncoding = System::Text::Encoding::UTF8;

    int choice;

    // цикл
    do
    {
        Console::Clear();
        ShowMenu();

        // Безпечне зчитування вибору меню
        try
        {
            choice = Convert::ToInt32(Console::ReadLine());
        }
        catch (Exception^)
        {
            Console::WriteLine(L"\nПомилка! Введіть число.");
            Console::WriteLine(L"Чекаю на клавішу для повернення в меню..");
            Console::ReadKey();
            choice = -1;
            continue;
        }

        switch (choice)
        {
        case 1:
            Task1();
            break;

        case 2:
            Task2();
            break;

        case 0:
            Console::WriteLine(L"\nВиходимо..");
            break;

        default:
            Console::WriteLine(L"\nНевірний вибір!");
            break;
        }

        if (choice != 0)
        {
            Console::WriteLine(L"\nЧекаю на клавішу для повернення в меню..");
            Console::ReadKey();
        }

    } while (choice != 0);

    return 0;
}