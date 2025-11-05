#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    Console::InputEncoding = System::Text::Encoding::UTF8;
    Console::OutputEncoding = System::Text::Encoding::UTF8;

    Console::Write(L"Перший рядок: ");
    String^ first = Console::ReadLine();

    Console::Write(L"Другий рядок: ");
    String^ second = Console::ReadLine();


    Console::WriteLine("Результат порівняння:");

    int compary = String::Compare(first, second, true); //true - це ігнорування регістру

    if (compary > 0)
    {
        Console::WriteLine(L"Перший [{0}] рядок більший за другий [{1}]",first, second);
    }
    else if (compary < 0)
    {
        Console::WriteLine(L"Другий [{1}] рядок більший за перший [{0}]",first, second);
    }
    else if (compary == 0)
    {
        Console::WriteLine(L"Обидва рядки однакові");
    }

    return 0;
}
