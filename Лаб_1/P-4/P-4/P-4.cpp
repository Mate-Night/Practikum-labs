#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    Console::InputEncoding = System::Text::Encoding::UTF8;
    Console::OutputEncoding = System::Text::Encoding::UTF8;

    Console::Write(L"Було: ");
    String^ input = Console::ReadLine();

    int length = input->Length;
    String^ reversing = String::Empty; //Пуста строка

    for (int i = length - 1; i >= 0; i--)
    {
        reversing += input[i];
    }

    Console::WriteLine(L"Стало: {0}", reversing);
}
