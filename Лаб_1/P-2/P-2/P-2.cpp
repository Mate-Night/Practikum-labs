#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    Console::InputEncoding = System::Text::Encoding::UTF8;
    Console::OutputEncoding = System::Text::Encoding::UTF8;

    Console::Write(L"З чого почнем: ");
    String^ start = Console::ReadLine();

    Console::Write(L"Чим закінчимо: ");
    String^ end = Console::ReadLine();

    String^ result = start + " " + end;
    Console::WriteLine(L"Маємо: {0}", result);

    return 0;
}
