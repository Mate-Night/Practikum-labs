#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    Console::InputEncoding = System::Text::Encoding::UTF8;
    Console::OutputEncoding = System::Text::Encoding::UTF8;

    Console::Write(L"Перший рядок: ");
    String^ str1 = Console::ReadLine();

    Console::Write(L"Другий рядок: ");
    String^ str2 = Console::ReadLine();

    int str1_Length = str1->Length;
    int str2_Length = str2->Length;

    if (str1_Length > str2_Length)
    {
        Console::WriteLine(L"Перший рядок [{0}] довший за другий [{1}]", str1, str2);
    }
    else if (str1_Length < str2_Length)
    {
        Console::WriteLine(L"Другий рядок [{1}] довший за перший [{0}]", str1, str2);
    }
    else if (str1_Length == str2_Length)
    {
        Console::WriteLine(L"Рядок [{0}] та [{1}] однакової довжини", str1, str2);
    }

    return 0;
}
