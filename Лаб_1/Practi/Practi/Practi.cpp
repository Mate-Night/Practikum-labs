#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    Console::InputEncoding = System::Text::Encoding::UTF8;
    Console::OutputEncoding = System::Text::Encoding::UTF8;

    Console::Write("Текст: ");
    String^ input = Console::ReadLine();

    String^ holder1 = L"begin - ";
    String^ holder2 = L"- end.";

    String^ result = holder1 + " " + input + " " + holder2;

    int resultLength = result->Length;

    Console::WriteLine(L"Маємо: {0}", result);
    Console::WriteLine(L"А ви знали що довжина цього рядка = {0} символів?", resultLength);

    return 0;
}
