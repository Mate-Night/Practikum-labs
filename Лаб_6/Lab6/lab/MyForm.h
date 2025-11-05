#pragma once

namespace lab {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			numbers = gcnew System::Collections::Generic::List<int>(); 
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ відкритиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вхіднийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вихіднийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ очиститиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^ вихідToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->відкритиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вхіднийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вихіднийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->очиститиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->вихідToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->файлToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(386, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->відкритиToolStripMenuItem,
					this->очиститиToolStripMenuItem, this->toolStripSeparator1, this->вихідToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// відкритиToolStripMenuItem
			// 
			this->відкритиToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->вхіднийToolStripMenuItem,
					this->вихіднийToolStripMenuItem
			});
			this->відкритиToolStripMenuItem->Name = L"відкритиToolStripMenuItem";
			this->відкритиToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->відкритиToolStripMenuItem->Text = L"Відкрити";
			// 
			// вхіднийToolStripMenuItem
			// 
			this->вхіднийToolStripMenuItem->Name = L"вхіднийToolStripMenuItem";
			this->вхіднийToolStripMenuItem->Size = System::Drawing::Size(123, 22);
			this->вхіднийToolStripMenuItem->Text = L"Вхідний";
			this->вхіднийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вхіднийToolStripMenuItem_Click);
			// 
			// вихіднийToolStripMenuItem
			// 
			this->вихіднийToolStripMenuItem->Name = L"вихіднийToolStripMenuItem";
			this->вихіднийToolStripMenuItem->Size = System::Drawing::Size(123, 22);
			this->вихіднийToolStripMenuItem->Text = L"Вихідний";
			this->вихіднийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вихіднийToolStripMenuItem_Click);
			// 
			// очиститиToolStripMenuItem
			// 
			this->очиститиToolStripMenuItem->Name = L"очиститиToolStripMenuItem";
			this->очиститиToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->очиститиToolStripMenuItem->Text = L"Очистити";
			this->очиститиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::очиститиToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(177, 6);
			// 
			// вихідToolStripMenuItem
			// 
			this->вихідToolStripMenuItem->Name = L"вихідToolStripMenuItem";
			this->вихідToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->вихідToolStripMenuItem->Text = L"Вихід";
			this->вихідToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(145, 110);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(141, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 21);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Завдання 2";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button1->Location = System::Drawing::Point(29, 143);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(155, 36);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Створити вихідний файл";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button2->Location = System::Drawing::Point(201, 143);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(155, 36);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Очистити";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(89, 200);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(200, 20);
			this->textBox2->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(29, 68);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(289, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Отримати в новому файлі компоненти вихідного файлу,";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(29, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(273, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Заданий файл, компоненти якого є цілими числами.";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(29, 81);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(188, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L" що діляться на 3 і не діляться на 7.";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(386, 251);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Episode 2";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	System::Collections::Generic::List<int>^ numbers;
	
	System::Void вхіднийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		openFileDialog1->Filter = L"Текстові файли|*.txt";
		openFileDialog1->Title = L"Відкрити вхідний файл";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) 
		{
			try {
				StreamReader^ reader = gcnew StreamReader(openFileDialog1->FileName);
				String^ content = reader->ReadToEnd();
				reader->Close();

				textBox1->Text = content;
				numbers->Clear();

				array<String^>^ parts = content->Split(gcnew array<Char>{' ', ',', '\t', '\n', '\r'}, 
					StringSplitOptions::RemoveEmptyEntries);
				
				for each (String^ part in parts) 
				{
					int num;
					if (Int32::TryParse(part, num)) 
					{
						numbers->Add(num);
					}
				}

				MessageBox::Show(L"Файл завантажено успішно!\nЗнайдено чисел: " + numbers->Count, 
					L"Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			catch (Exception^ ex) 
			{
				MessageBox::Show(L"Помилка читання файлу: " + ex->Message, 
					L"Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	
	System::Void вихіднийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		openFileDialog1->Filter = L"Текстові файли|*.txt";
		openFileDialog1->Title = L"Відкрити вихідний файл";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) 
		{
			try {
				StreamReader^ reader = gcnew StreamReader(openFileDialog1->FileName);
				String^ content = reader->ReadToEnd();
				reader->Close();
				textBox2->Text = content;
				MessageBox::Show(L"Вміст вихідного файлу завантажено!", 
					L"Файл", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			catch (Exception^ ex) 
			{
				MessageBox::Show(L"Помилка читання файлу: " + ex->Message, 
					L"Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}

	System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (numbers->Count == 0) 
		{
			MessageBox::Show(L"Спочатку відкрийте вхідний файл!", 
				L"Попередження", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		saveFileDialog1->Filter = L"Текстові файли|*.txt";
		saveFileDialog1->Title = L"Зберегти вихідний файл";
		saveFileDialog1->FileName = L"output.txt";

		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) 
		{
			try {
				textBox2->Clear();
				List<int>^ filtered = gcnew List<int>();
				
				for each (int num in numbers) 
				{
					if (num % 3 == 0 && num % 7 != 0) 
					{
						filtered->Add(num);
					}
				}

				if (filtered->Count == 0) 
				{
					MessageBox::Show(L"Жодне число не відповідає умовам:\n- ділиться на 3\n- не ділиться на 7", 
						L"Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
					return;
				}

				StreamWriter^ writer = gcnew StreamWriter(saveFileDialog1->FileName);
				for each (int num in filtered) 
				{
					writer->Write(num.ToString() + " ");
					textBox2->AppendText(num.ToString() + " ");
				}
				writer->Close();
				
				MessageBox::Show(L"Вихідний файл створено успішно!\nЗнайдено чисел: " + filtered->Count, 
					L"Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);

			}
			catch (Exception^ ex) 
			{
				MessageBox::Show(L"Помилка створення файлу: " + ex->Message, 
					L"Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}

	System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		textBox1->Clear();
		textBox2->Clear();
		numbers->Clear();
		MessageBox::Show(L"Дані очищено!", L"Інформація", 
			MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}
	
	private: System::Void очиститиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		button2_Click(sender, e);
	}
};
}