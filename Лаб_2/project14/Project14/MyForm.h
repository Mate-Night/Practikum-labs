#pragma once

namespace Project14 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label6;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введіть об’єм першої кулі V1:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(152, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Введіть об’єм другої кулі V2:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 143);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(158, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Введіть об’єм третьої кулі V3:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(178, 60);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(147, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(178, 100);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(147, 20);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(178, 143);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(147, 20);
			this->textBox3->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button1->Location = System::Drawing::Point(15, 181);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 52);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Обчислити об\'єм всіх куль";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button2->Location = System::Drawing::Point(175, 181);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 52);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Обчислити середній радіус";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 320);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(174, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Результат середнього радіуса Z:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(12, 274);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 9;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(122, 274);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 10;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(228, 274);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(97, 20);
			this->textBox6->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(96, 247);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(149, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Обчислені радіуси всіх куль:";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(196, 317);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(129, 20);
			this->textBox7->TabIndex = 13;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightGreen;
			this->button3->Location = System::Drawing::Point(16, 353);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(144, 46);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Очистити";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::OrangeRed;
			this->button4->Location = System::Drawing::Point(178, 353);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(144, 46);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Вихід!";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 31);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(74, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Завдання 2b:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(340, 398);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Назар Сисоєв";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			double V1 = Convert::ToDouble(textBox1->Text);
			double V2 = Convert::ToDouble(textBox2->Text);
			double V3 = Convert::ToDouble(textBox3->Text);

			double R1 = Math::Pow((3 * V1) / (4 * Math::PI), 1.0 / 3);
			double R2 = Math::Pow((3 * V2) / (4 * Math::PI), 1.0 / 3);
			double R3 = Math::Pow((3 * V3) / (4 * Math::PI), 1.0 / 3);

			textBox4->Text = Math::Round(R1, 2).ToString();
			textBox5->Text = Math::Round(R2, 2).ToString();
			textBox6->Text = Math::Round(R3, 2).ToString();
		}
		catch (...) {
			MessageBox::Show("Enter correct numbers!", "Error");
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			double R1 = Convert::ToDouble(textBox4->Text);
			double R2 = Convert::ToDouble(textBox5->Text);
			double R3 = Convert::ToDouble(textBox6->Text);

			double Z = (R1 + R2 + R3) / 3;
			textBox7->Text = Math::Round(Z, 2).ToString();
		}
		catch (...) {
			MessageBox::Show("First calculate radii!", "Error");
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Clear(); textBox2->Clear(); textBox3->Clear();
		textBox4->Clear(); textBox5->Clear(); textBox6->Clear();
		textBox7->Clear();
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
};
}
