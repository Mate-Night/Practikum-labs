#pragma once

namespace ExcelLike {

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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::PictureBox^ pictureBox_func;
	private: System::Windows::Forms::PictureBox^ pictureBox_values;
	private: System::Windows::Forms::Button^ butt_erase;




	private: System::Windows::Forms::Button^ butt_calculate;
	private: System::Windows::Forms::TextBox^ textBox_Xn;


	private: System::Windows::Forms::Label^ lab_Xn;


	private: System::Windows::Forms::TextBox^ textBox_Z;
	private: System::Windows::Forms::Label^ lab_z;



	private: System::Windows::Forms::TextBox^ textBox_Q;


	private: System::Windows::Forms::Label^ lab_Q;
	private: System::Windows::Forms::TextBox^ textBox_K;


	private: System::Windows::Forms::Label^ lab_K;
	private: System::Windows::Forms::Label^ label_func;
	private: System::Windows::Forms::Label^ label_values;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Label^ label_result;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ X;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Y;
	private: System::Windows::Forms::TextBox^ textBox_Xk;

	private: System::Windows::Forms::Label^ lab_Xk;
	private: System::Windows::Forms::TextBox^ textBox_dx;

	private: System::Windows::Forms::Label^ lab_dx;




	protected:

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->X = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Y = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pictureBox_func = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_values = (gcnew System::Windows::Forms::PictureBox());
			this->butt_erase = (gcnew System::Windows::Forms::Button());
			this->butt_calculate = (gcnew System::Windows::Forms::Button());
			this->textBox_Xn = (gcnew System::Windows::Forms::TextBox());
			this->lab_Xn = (gcnew System::Windows::Forms::Label());
			this->textBox_Z = (gcnew System::Windows::Forms::TextBox());
			this->lab_z = (gcnew System::Windows::Forms::Label());
			this->textBox_Q = (gcnew System::Windows::Forms::TextBox());
			this->lab_Q = (gcnew System::Windows::Forms::Label());
			this->textBox_K = (gcnew System::Windows::Forms::TextBox());
			this->lab_K = (gcnew System::Windows::Forms::Label());
			this->label_func = (gcnew System::Windows::Forms::Label());
			this->label_values = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label_result = (gcnew System::Windows::Forms::Label());
			this->textBox_Xk = (gcnew System::Windows::Forms::TextBox());
			this->lab_Xk = (gcnew System::Windows::Forms::Label());
			this->textBox_dx = (gcnew System::Windows::Forms::TextBox());
			this->lab_dx = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_func))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_values))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ScrollBar;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->X, this->Y });
			this->dataGridView1->Location = System::Drawing::Point(12, 263);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(243, 285);
			this->dataGridView1->TabIndex = 0;
			// 
			// X
			// 
			this->X->HeaderText = L"X";
			this->X->Name = L"X";
			// 
			// Y
			// 
			this->Y->HeaderText = L"Y";
			this->Y->Name = L"Y";
			// 
			// pictureBox_func
			// 
			this->pictureBox_func->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_func.Image")));
			this->pictureBox_func->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_func.InitialImage")));
			this->pictureBox_func->Location = System::Drawing::Point(361, 28);
			this->pictureBox_func->Name = L"pictureBox_func";
			this->pictureBox_func->Size = System::Drawing::Size(325, 80);
			this->pictureBox_func->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox_func->TabIndex = 2;
			this->pictureBox_func->TabStop = false;
			// 
			// pictureBox_values
			// 
			this->pictureBox_values->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_values.Image")));
			this->pictureBox_values->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_values.InitialImage")));
			this->pictureBox_values->Location = System::Drawing::Point(361, 133);
			this->pictureBox_values->Name = L"pictureBox_values";
			this->pictureBox_values->Size = System::Drawing::Size(325, 95);
			this->pictureBox_values->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox_values->TabIndex = 3;
			this->pictureBox_values->TabStop = false;
			// 
			// butt_erase
			// 
			this->butt_erase->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butt_erase->Location = System::Drawing::Point(31, 175);
			this->butt_erase->Name = L"butt_erase";
			this->butt_erase->Size = System::Drawing::Size(153, 65);
			this->butt_erase->TabIndex = 1;
			this->butt_erase->Text = L"Erase";
			this->butt_erase->UseVisualStyleBackColor = true;
			this->butt_erase->Click += gcnew System::EventHandler(this, &MyForm::butt_erase_Click);
			// 
			// butt_calculate
			// 
			this->butt_calculate->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butt_calculate->Location = System::Drawing::Point(31, 104);
			this->butt_calculate->Name = L"butt_calculate";
			this->butt_calculate->Size = System::Drawing::Size(153, 65);
			this->butt_calculate->TabIndex = 1;
			this->butt_calculate->Text = L"Calculate";
			this->butt_calculate->UseVisualStyleBackColor = true;
			this->butt_calculate->Click += gcnew System::EventHandler(this, &MyForm::butt_calculate_Click);
			// 
			// textBox_Xn
			// 
			this->textBox_Xn->Location = System::Drawing::Point(51, 10);
			this->textBox_Xn->Name = L"textBox_Xn";
			this->textBox_Xn->Size = System::Drawing::Size(100, 20);
			this->textBox_Xn->TabIndex = 4;
			this->textBox_Xn->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_X_TextChanged);
			// 
			// lab_Xn
			// 
			this->lab_Xn->AutoSize = true;
			this->lab_Xn->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lab_Xn->Location = System::Drawing::Point(18, 11);
			this->lab_Xn->Name = L"lab_Xn";
			this->lab_Xn->Size = System::Drawing::Size(31, 19);
			this->lab_Xn->TabIndex = 5;
			this->lab_Xn->Text = L"Xn:";
			// 
			// textBox_Z
			// 
			this->textBox_Z->Location = System::Drawing::Point(183, 62);
			this->textBox_Z->Name = L"textBox_Z";
			this->textBox_Z->Size = System::Drawing::Size(100, 20);
			this->textBox_Z->TabIndex = 4;
			this->textBox_Z->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_Z_TextChanged);
			// 
			// lab_z
			// 
			this->lab_z->AutoSize = true;
			this->lab_z->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lab_z->Location = System::Drawing::Point(160, 61);
			this->lab_z->Name = L"lab_z";
			this->lab_z->Size = System::Drawing::Size(22, 19);
			this->lab_z->TabIndex = 5;
			this->lab_z->Text = L"z:";
			// 
			// textBox_Q
			// 
			this->textBox_Q->Location = System::Drawing::Point(183, 10);
			this->textBox_Q->Name = L"textBox_Q";
			this->textBox_Q->Size = System::Drawing::Size(100, 20);
			this->textBox_Q->TabIndex = 4;
			this->textBox_Q->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_Q_TextChanged);
			// 
			// lab_Q
			// 
			this->lab_Q->AutoSize = true;
			this->lab_Q->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lab_Q->Location = System::Drawing::Point(156, 10);
			this->lab_Q->Name = L"lab_Q";
			this->lab_Q->Size = System::Drawing::Size(26, 19);
			this->lab_Q->TabIndex = 5;
			this->lab_Q->Text = L"Q:";
			this->lab_Q->Click += gcnew System::EventHandler(this, &MyForm::lab_Q_Click);
			// 
			// textBox_K
			// 
			this->textBox_K->Location = System::Drawing::Point(183, 36);
			this->textBox_K->Name = L"textBox_K";
			this->textBox_K->Size = System::Drawing::Size(100, 20);
			this->textBox_K->TabIndex = 4;
			this->textBox_K->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_K_TextChanged);
			// 
			// lab_K
			// 
			this->lab_K->AutoSize = true;
			this->lab_K->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lab_K->Location = System::Drawing::Point(160, 35);
			this->lab_K->Name = L"lab_K";
			this->lab_K->Size = System::Drawing::Size(22, 19);
			this->lab_K->TabIndex = 5;
			this->lab_K->Text = L"k:";
			// 
			// label_func
			// 
			this->label_func->AutoSize = true;
			this->label_func->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_func->Location = System::Drawing::Point(489, 6);
			this->label_func->Name = L"label_func";
			this->label_func->Size = System::Drawing::Size(70, 21);
			this->label_func->TabIndex = 6;
			this->label_func->Text = L"Function";
			// 
			// label_values
			// 
			this->label_values->AutoSize = true;
			this->label_values->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_values->Location = System::Drawing::Point(489, 111);
			this->label_values->Name = L"label_values";
			this->label_values->Size = System::Drawing::Size(55, 21);
			this->label_values->TabIndex = 7;
			this->label_values->Text = L"Values";
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::SystemColors::ScrollBar;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Alignment = System::Drawing::StringAlignment::Far;
			legend1->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Top;
			legend1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			legend1->IsTextAutoFit = false;
			legend1->Name = L"X";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(261, 263);
			this->chart1->Name = L"chart1";
			series1->BorderColor = System::Drawing::SystemColors::ScrollBar;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Area;
			series1->Legend = L"X";
			series1->Name = L"Function";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(425, 291);
			this->chart1->TabIndex = 8;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// label_result
			// 
			this->label_result->AutoSize = true;
			this->label_result->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_result->Location = System::Drawing::Point(288, 238);
			this->label_result->Name = L"label_result";
			this->label_result->Size = System::Drawing::Size(57, 23);
			this->label_result->TabIndex = 9;
			this->label_result->Text = L"Result";
			// 
			// textBox_Xk
			// 
			this->textBox_Xk->Location = System::Drawing::Point(51, 36);
			this->textBox_Xk->Name = L"textBox_Xk";
			this->textBox_Xk->Size = System::Drawing::Size(100, 20);
			this->textBox_Xk->TabIndex = 4;
			this->textBox_Xk->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_X_TextChanged);
			// 
			// lab_Xk
			// 
			this->lab_Xk->AutoSize = true;
			this->lab_Xk->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lab_Xk->Location = System::Drawing::Point(18, 39);
			this->lab_Xk->Name = L"lab_Xk";
			this->lab_Xk->Size = System::Drawing::Size(31, 19);
			this->lab_Xk->TabIndex = 5;
			this->lab_Xk->Text = L"Xk:";
			// 
			// textBox_dx
			// 
			this->textBox_dx->Location = System::Drawing::Point(51, 62);
			this->textBox_dx->Name = L"textBox_dx";
			this->textBox_dx->Size = System::Drawing::Size(100, 20);
			this->textBox_dx->TabIndex = 4;
			this->textBox_dx->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_X_TextChanged);
			// 
			// lab_dx
			// 
			this->lab_dx->AutoSize = true;
			this->lab_dx->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lab_dx->Location = System::Drawing::Point(18, 65);
			this->lab_dx->Name = L"lab_dx";
			this->lab_dx->Size = System::Drawing::Size(31, 19);
			this->lab_dx->TabIndex = 5;
			this->lab_dx->Text = L"dx:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(698, 560);
			this->Controls->Add(this->label_result);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label_values);
			this->Controls->Add(this->label_func);
			this->Controls->Add(this->lab_K);
			this->Controls->Add(this->lab_Q);
			this->Controls->Add(this->lab_z);
			this->Controls->Add(this->lab_dx);
			this->Controls->Add(this->lab_Xk);
			this->Controls->Add(this->lab_Xn);
			this->Controls->Add(this->textBox_K);
			this->Controls->Add(this->textBox_Q);
			this->Controls->Add(this->textBox_Z);
			this->Controls->Add(this->textBox_dx);
			this->Controls->Add(this->textBox_Xk);
			this->Controls->Add(this->textBox_Xn);
			this->Controls->Add(this->pictureBox_values);
			this->Controls->Add(this->pictureBox_func);
			this->Controls->Add(this->butt_calculate);
			this->Controls->Add(this->butt_erase);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Excel Simulator";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_func))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_values))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void butt_calculate_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Зчитування та перевірка даних
	   // TryParse для безпечного перетворення
		double z, q, k, x_start, x_end, dx;
		if (!Double::TryParse(this->textBox_Z->Text, z) ||
			!Double::TryParse(this->textBox_Q->Text, q) ||
			!Double::TryParse(this->textBox_K->Text, k) ||
			!Double::TryParse(this->textBox_Xn->Text, x_start) ||
			!Double::TryParse(this->textBox_Xk->Text, x_end) ||
			!Double::TryParse(this->textBox_dx->Text, dx))
		{
			MessageBox::Show("Please enter numeric values for all fields.", "Input Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// перевірки наше все
		if (z < -1 || z > 1)
		{
			MessageBox::Show("The value of Z for arcsin must be in the range [-1, 1].", "Calculation Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (dx <= 0)
		{
			MessageBox::Show("The step (dx) must be a positive value.", "Input Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (x_start >= x_end)
		{
			MessageBox::Show("The starting value of X must be less than the ending value.", "Input Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Очищення лише рядків DataGridView (колонки вже визначені)
		this->dataGridView1->Rows->Clear();

		// Очищення та налаштування Chart
		this->chart1->Series->Clear();
		this->chart1->Series->Add("Function");
		this->chart1->Series["Function"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;

		// Обчислення та заповнення діапазоном X
		for (double x_val = x_start; x_val <= x_end; x_val += dx)
		{
			double y_val;

			if (x_val > q)
			{
				y_val = Math::Pow(x_val, 1.0 / 3.0) + Math::Pow(x_val, k);
			}
			else
			{
				y_val = Math::Asin(z);
			}

			this->dataGridView1->Rows->Add(x_val.ToString("F2"), y_val.ToString("F2"));
			this->chart1->Series["Function"]->Points->AddXY(x_val, y_val);
		}
	}

private: System::Void butt_erase_Click(System::Object^ sender, System::EventArgs^ e) 
{
	// Очищення полів
	this->textBox_Z->Clear();
	this->textBox_Q->Clear();
	this->textBox_K->Clear();
	this->textBox_Xn->Clear();
	this->textBox_Xk->Clear();
	this->textBox_dx->Clear();

	// Очищення DataGridView
	this->dataGridView1->Rows->Clear();

	// Очищення Chart
	this->chart1->Series->Clear();
}
private: System::Void textBox_X_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox_Z_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox_Q_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox_K_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lab_Q_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
