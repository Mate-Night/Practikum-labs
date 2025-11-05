#pragma once
#pragma endregion

namespace MultiWin {

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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage_array;
	private: System::Windows::Forms::TabPage^ tabPage_matrix;


	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem_File;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem_Open;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem_Save;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem_Exit;
	private: System::Windows::Forms::TabPage^ tabPage_picture;
	private: System::Windows::Forms::ToolStripMenuItem^ settingsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ themeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ lightToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ grayToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton_picture_save;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton_picture_load;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label_array_LOGO;
	private: System::Windows::Forms::Label^ label_array_C;
	private: System::Windows::Forms::Button^ button_array_calculate;

	private: System::Windows::Forms::DataGridView^ dataGridView_array_drivers;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton_clean_array;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton_clean_matrix;






	private: System::Windows::Forms::Label^ label_matrix_LOGO;





	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColNumber;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColWeight;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColDistance;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColSalary;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColStatus;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;






	private: System::Windows::Forms::Button^ button_matrix_calculate;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox_matrix_N;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_matrix_M;
	private: System::Windows::Forms::DataGridView^ dataGridView_matrix;

	private: System::Windows::Forms::CheckBox^ checkBox_random;









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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem_File = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem_Open = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem_Save = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripMenuItem_Exit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->themeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lightToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->grayToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage_array = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView_array_drivers = (gcnew System::Windows::Forms::DataGridView());
			this->ColNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColWeight = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColDistance = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColSalary = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button_array_calculate = (gcnew System::Windows::Forms::Button());
			this->label_array_LOGO = (gcnew System::Windows::Forms::Label());
			this->label_array_C = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage_matrix = (gcnew System::Windows::Forms::TabPage());
			this->checkBox_random = (gcnew System::Windows::Forms::CheckBox());
			this->dataGridView_matrix = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button_matrix_calculate = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_matrix_M = (gcnew System::Windows::Forms::TextBox());
			this->textBox_matrix_N = (gcnew System::Windows::Forms::TextBox());
			this->label_matrix_LOGO = (gcnew System::Windows::Forms::Label());
			this->tabPage_picture = (gcnew System::Windows::Forms::TabPage());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton_clean_array = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton_clean_matrix = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton_picture_load = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton_picture_save = (gcnew System::Windows::Forms::ToolStripButton());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage_array->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_array_drivers))->BeginInit();
			this->tabPage_matrix->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_matrix))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->tabPage_picture->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem_File,
					this->settingsToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(625, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem_File
			// 
			this->fileToolStripMenuItem_File->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem_Open,
					this->toolStripMenuItem_Save, this->toolStripSeparator1, this->toolStripMenuItem_Exit
			});
			this->fileToolStripMenuItem_File->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fileToolStripMenuItem_File.Image")));
			this->fileToolStripMenuItem_File->Name = L"fileToolStripMenuItem_File";
			this->fileToolStripMenuItem_File->Size = System::Drawing::Size(54, 20);
			this->fileToolStripMenuItem_File->Text = L"File";
			// 
			// toolStripMenuItem_Open
			// 
			this->toolStripMenuItem_Open->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem_Open.Image")));
			this->toolStripMenuItem_Open->Name = L"toolStripMenuItem_Open";
			this->toolStripMenuItem_Open->Size = System::Drawing::Size(103, 22);
			this->toolStripMenuItem_Open->Text = L"Open";
			this->toolStripMenuItem_Open->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem_Open_Click);
			// 
			// toolStripMenuItem_Save
			// 
			this->toolStripMenuItem_Save->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem_Save.Image")));
			this->toolStripMenuItem_Save->Name = L"toolStripMenuItem_Save";
			this->toolStripMenuItem_Save->Size = System::Drawing::Size(103, 22);
			this->toolStripMenuItem_Save->Text = L"Save";
			this->toolStripMenuItem_Save->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem_Save_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(100, 6);
			// 
			// toolStripMenuItem_Exit
			// 
			this->toolStripMenuItem_Exit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem_Exit.Image")));
			this->toolStripMenuItem_Exit->Name = L"toolStripMenuItem_Exit";
			this->toolStripMenuItem_Exit->Size = System::Drawing::Size(103, 22);
			this->toolStripMenuItem_Exit->Text = L"Exit";
			this->toolStripMenuItem_Exit->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem_Exit_Click);
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->themeToolStripMenuItem,
					this->aboutToolStripMenuItem
			});
			this->settingsToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"settingsToolStripMenuItem.Image")));
			this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(79, 20);
			this->settingsToolStripMenuItem->Text = L"Settings";
			// 
			// themeToolStripMenuItem
			// 
			this->themeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->lightToolStripMenuItem,
					this->grayToolStripMenuItem
			});
			this->themeToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"themeToolStripMenuItem.Image")));
			this->themeToolStripMenuItem->Name = L"themeToolStripMenuItem";
			this->themeToolStripMenuItem->Size = System::Drawing::Size(110, 22);
			this->themeToolStripMenuItem->Text = L"Theme";
			this->themeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::themeToolStripMenuItem_Click);
			// 
			// lightToolStripMenuItem
			// 
			this->lightToolStripMenuItem->Name = L"lightToolStripMenuItem";
			this->lightToolStripMenuItem->Size = System::Drawing::Size(102, 22);
			this->lightToolStripMenuItem->Text = L"Light";
			this->lightToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::lightToolStripMenuItem_Click);
			// 
			// grayToolStripMenuItem
			// 
			this->grayToolStripMenuItem->Name = L"grayToolStripMenuItem";
			this->grayToolStripMenuItem->Size = System::Drawing::Size(102, 22);
			this->grayToolStripMenuItem->Text = L"Gray";
			this->grayToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::grayToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"aboutToolStripMenuItem.Image")));
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(110, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage_array);
			this->tabControl1->Controls->Add(this->tabPage_matrix);
			this->tabControl1->Controls->Add(this->tabPage_picture);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabControl1->Location = System::Drawing::Point(0, 52);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(625, 531);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage_array
			// 
			this->tabPage_array->Controls->Add(this->pictureBox2);
			this->tabPage_array->Controls->Add(this->dataGridView_array_drivers);
			this->tabPage_array->Controls->Add(this->button_array_calculate);
			this->tabPage_array->Controls->Add(this->label_array_LOGO);
			this->tabPage_array->Controls->Add(this->label_array_C);
			this->tabPage_array->Controls->Add(this->textBox1);
			this->tabPage_array->Location = System::Drawing::Point(4, 24);
			this->tabPage_array->Name = L"tabPage_array";
			this->tabPage_array->Padding = System::Windows::Forms::Padding(3);
			this->tabPage_array->Size = System::Drawing::Size(617, 503);
			this->tabPage_array->TabIndex = 0;
			this->tabPage_array->Text = L"Одновимірний масив";
			this->tabPage_array->UseVisualStyleBackColor = true;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(24, 38);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(574, 84);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// dataGridView_array_drivers
			// 
			this->dataGridView_array_drivers->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView_array_drivers->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView_array_drivers->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView_array_drivers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_array_drivers->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->ColNumber,
					this->ColWeight, this->ColDistance, this->ColSalary, this->ColStatus
			});
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView_array_drivers->DefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView_array_drivers->EditMode = System::Windows::Forms::DataGridViewEditMode::EditOnEnter;
			this->dataGridView_array_drivers->Location = System::Drawing::Point(24, 205);
			this->dataGridView_array_drivers->Name = L"dataGridView_array_drivers";
			this->dataGridView_array_drivers->Size = System::Drawing::Size(574, 296);
			this->dataGridView_array_drivers->TabIndex = 5;
			// 
			// ColNumber
			// 
			this->ColNumber->HeaderText = L"Таб. №";
			this->ColNumber->Name = L"ColNumber";
			// 
			// ColWeight
			// 
			this->ColWeight->HeaderText = L"Вага (т)";
			this->ColWeight->Name = L"ColWeight";
			// 
			// ColDistance
			// 
			this->ColDistance->HeaderText = L"Відстань (км)";
			this->ColDistance->Name = L"ColDistance";
			// 
			// ColSalary
			// 
			this->ColSalary->HeaderText = L"Зарплата";
			this->ColSalary->Name = L"ColSalary";
			this->ColSalary->ReadOnly = true;
			// 
			// ColStatus
			// 
			this->ColStatus->HeaderText = L"Статус";
			this->ColStatus->Name = L"ColStatus";
			this->ColStatus->ReadOnly = true;
			// 
			// button_array_calculate
			// 
			this->button_array_calculate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_array_calculate->Location = System::Drawing::Point(437, 128);
			this->button_array_calculate->Name = L"button_array_calculate";
			this->button_array_calculate->Size = System::Drawing::Size(161, 71);
			this->button_array_calculate->TabIndex = 4;
			this->button_array_calculate->Text = L"Calculate";
			this->button_array_calculate->UseVisualStyleBackColor = true;
			this->button_array_calculate->Click += gcnew System::EventHandler(this, &MyForm::button_array_calculate_Click);
			// 
			// label_array_LOGO
			// 
			this->label_array_LOGO->AutoSize = true;
			this->label_array_LOGO->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_array_LOGO->Location = System::Drawing::Point(127, 13);
			this->label_array_LOGO->Name = L"label_array_LOGO";
			this->label_array_LOGO->Size = System::Drawing::Size(333, 22);
			this->label_array_LOGO->TabIndex = 3;
			this->label_array_LOGO->Text = L"ЗАВДАННЯ 1: Заробітна плата водіїв";
			this->label_array_LOGO->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_array_C
			// 
			this->label_array_C->AutoSize = true;
			this->label_array_C->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_array_C->Location = System::Drawing::Point(20, 149);
			this->label_array_C->Name = L"label_array_C";
			this->label_array_C->Size = System::Drawing::Size(221, 22);
			this->label_array_C->TabIndex = 2;
			this->label_array_C->Text = L"Вартість перевезення C:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(238, 149);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(129, 22);
			this->textBox1->TabIndex = 0;
			// 
			// tabPage_matrix
			// 
			this->tabPage_matrix->Controls->Add(this->checkBox_random);
			this->tabPage_matrix->Controls->Add(this->dataGridView_matrix);
			this->tabPage_matrix->Controls->Add(this->pictureBox3);
			this->tabPage_matrix->Controls->Add(this->button_matrix_calculate);
			this->tabPage_matrix->Controls->Add(this->label2);
			this->tabPage_matrix->Controls->Add(this->label1);
			this->tabPage_matrix->Controls->Add(this->textBox_matrix_M);
			this->tabPage_matrix->Controls->Add(this->textBox_matrix_N);
			this->tabPage_matrix->Controls->Add(this->label_matrix_LOGO);
			this->tabPage_matrix->Location = System::Drawing::Point(4, 24);
			this->tabPage_matrix->Name = L"tabPage_matrix";
			this->tabPage_matrix->Padding = System::Windows::Forms::Padding(3);
			this->tabPage_matrix->Size = System::Drawing::Size(617, 503);
			this->tabPage_matrix->TabIndex = 1;
			this->tabPage_matrix->Text = L"Матриця";
			this->tabPage_matrix->UseVisualStyleBackColor = true;
			// 
			// checkBox_random
			// 
			this->checkBox_random->AutoSize = true;
			this->checkBox_random->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox_random->Location = System::Drawing::Point(30, 166);
			this->checkBox_random->Name = L"checkBox_random";
			this->checkBox_random->Size = System::Drawing::Size(174, 23);
			this->checkBox_random->TabIndex = 16;
			this->checkBox_random->Text = L"Рандомна Генерація";
			this->checkBox_random->UseVisualStyleBackColor = true;
			this->checkBox_random->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_random_CheckedChanged);
			// 
			// dataGridView_matrix
			// 
			this->dataGridView_matrix->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_matrix->EditMode = System::Windows::Forms::DataGridViewEditMode::EditOnEnter;
			this->dataGridView_matrix->Location = System::Drawing::Point(8, 195);
			this->dataGridView_matrix->Name = L"dataGridView_matrix";
			this->dataGridView_matrix->Size = System::Drawing::Size(592, 297);
			this->dataGridView_matrix->TabIndex = 15;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.InitialImage")));
			this->pictureBox3->Location = System::Drawing::Point(17, 28);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(574, 84);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 14;
			this->pictureBox3->TabStop = false;
			// 
			// button_matrix_calculate
			// 
			this->button_matrix_calculate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_matrix_calculate->Location = System::Drawing::Point(430, 118);
			this->button_matrix_calculate->Name = L"button_matrix_calculate";
			this->button_matrix_calculate->Size = System::Drawing::Size(161, 71);
			this->button_matrix_calculate->TabIndex = 12;
			this->button_matrix_calculate->Text = L"Calculate";
			this->button_matrix_calculate->UseVisualStyleBackColor = true;
			this->button_matrix_calculate->Click += gcnew System::EventHandler(this, &MyForm::button_matrix_calculate_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(26, 141);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 22);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Стовпці M:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(26, 118);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 22);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Рядки N:";
			// 
			// textBox_matrix_M
			// 
			this->textBox_matrix_M->Location = System::Drawing::Point(133, 143);
			this->textBox_matrix_M->Name = L"textBox_matrix_M";
			this->textBox_matrix_M->Size = System::Drawing::Size(125, 22);
			this->textBox_matrix_M->TabIndex = 10;
			// 
			// textBox_matrix_N
			// 
			this->textBox_matrix_N->Location = System::Drawing::Point(120, 118);
			this->textBox_matrix_N->Name = L"textBox_matrix_N";
			this->textBox_matrix_N->Size = System::Drawing::Size(120, 22);
			this->textBox_matrix_N->TabIndex = 10;
			// 
			// label_matrix_LOGO
			// 
			this->label_matrix_LOGO->AutoSize = true;
			this->label_matrix_LOGO->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_matrix_LOGO->Location = System::Drawing::Point(60, 3);
			this->label_matrix_LOGO->Name = L"label_matrix_LOGO";
			this->label_matrix_LOGO->Size = System::Drawing::Size(466, 22);
			this->label_matrix_LOGO->TabIndex = 9;
			this->label_matrix_LOGO->Text = L"ЗАВДАННЯ 2: Впорядкування рядків за мінімумами";
			this->label_matrix_LOGO->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tabPage_picture
			// 
			this->tabPage_picture->Controls->Add(this->panel1);
			this->tabPage_picture->Location = System::Drawing::Point(4, 24);
			this->tabPage_picture->Name = L"tabPage_picture";
			this->tabPage_picture->Size = System::Drawing::Size(617, 503);
			this->tabPage_picture->TabIndex = 2;
			this->tabPage_picture->Text = L"Зображення";
			this->tabPage_picture->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(617, 503);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(8, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(606, 507);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// toolStrip1
			// 
			this->toolStrip1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->toolStripButton_clean_array,
					this->toolStripSeparator2, this->toolStripButton_clean_matrix, this->toolStripSeparator3, this->toolStripButton_picture_load,
					this->toolStripButton_picture_save
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(625, 25);
			this->toolStrip1->TabIndex = 2;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton_clean_array
			// 
			this->toolStripButton_clean_array->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton_clean_array.Image")));
			this->toolStripButton_clean_array->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton_clean_array->Name = L"toolStripButton_clean_array";
			this->toolStripButton_clean_array->Size = System::Drawing::Size(90, 22);
			this->toolStripButton_clean_array->Text = L"Clean Array";
			this->toolStripButton_clean_array->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton_clean_array_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton_clean_matrix
			// 
			this->toolStripButton_clean_matrix->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton_clean_matrix.Image")));
			this->toolStripButton_clean_matrix->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton_clean_matrix->Name = L"toolStripButton_clean_matrix";
			this->toolStripButton_clean_matrix->Size = System::Drawing::Size(94, 22);
			this->toolStripButton_clean_matrix->Text = L"Clean Matrix";
			this->toolStripButton_clean_matrix->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton_clean_matrix_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton_picture_load
			// 
			this->toolStripButton_picture_load->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton_picture_load.Image")));
			this->toolStripButton_picture_load->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton_picture_load->Name = L"toolStripButton_picture_load";
			this->toolStripButton_picture_load->Size = System::Drawing::Size(89, 22);
			this->toolStripButton_picture_load->Text = L"Load Photo";
			this->toolStripButton_picture_load->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton_picture_load_Click);
			// 
			// toolStripButton_picture_save
			// 
			this->toolStripButton_picture_save->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton_picture_save.Image")));
			this->toolStripButton_picture_save->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton_picture_save->Name = L"toolStripButton_picture_save";
			this->toolStripButton_picture_save->Size = System::Drawing::Size(88, 22);
			this->toolStripButton_picture_save->Text = L"Save Photo";
			this->toolStripButton_picture_save->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton_picture_save_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(625, 580);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MultiWin";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage_array->ResumeLayout(false);
			this->tabPage_array->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_array_drivers))->EndInit();
			this->tabPage_matrix->ResumeLayout(false);
			this->tabPage_matrix->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_matrix))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->tabPage_picture->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button_array_calculate_Click(System::Object^ sender, System::EventArgs^ e)
{
	double C;
	try {
		C = Convert::ToDouble(textBox1->Text);
		if (C <= 0)
		{
			MessageBox::Show(L"Вартість C повинна бути більше 0.", L"Помилка вводу", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
	}
	catch (Exception^)
	{
		MessageBox::Show(L"Введіть коректне числове значення для C.", L"Помилка вводу", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	int M = dataGridView_array_drivers->Rows->Count - 1; // -1 бо останній рядок для нового вводу

	if (M <= 0)
	{
		MessageBox::Show(L"Таблиця не містить даних для розрахунку.", L"Попередження", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	for (int i = 0; i < M; i++)
	{
		dataGridView_array_drivers->Rows[i]->Cells[4]->Value = L"";

		try {
			if (dataGridView_array_drivers->Rows[i]->Cells[1]->Value == nullptr ||
				dataGridView_array_drivers->Rows[i]->Cells[2]->Value == nullptr ||
				String::IsNullOrWhiteSpace(dataGridView_array_drivers->Rows[i]->Cells[1]->Value->ToString()) ||
				String::IsNullOrWhiteSpace(dataGridView_array_drivers->Rows[i]->Cells[2]->Value->ToString()))
			{
				dataGridView_array_drivers->Rows[i]->Cells[3]->Value = L"";
				dataGridView_array_drivers->Rows[i]->Cells[4]->Value = L"Неповні дані";
				continue;
			}

			double weight = Convert::ToDouble(dataGridView_array_drivers->Rows[i]->Cells[1]->Value);
			double distance = Convert::ToDouble(dataGridView_array_drivers->Rows[i]->Cells[2]->Value);

			if (weight < 0 || distance < 0)
			{
				dataGridView_array_drivers->Rows[i]->Cells[3]->Value = L"";
				dataGridView_array_drivers->Rows[i]->Cells[4]->Value = L"Некоректні вхідні";
				continue;
			}

			double salary = weight * distance * C;
			dataGridView_array_drivers->Rows[i]->Cells[3]->Value = salary.ToString("F2");
			dataGridView_array_drivers->Rows[i]->Cells[4]->Value = L"Відпрацьовано";
		}
		catch (Exception^)
		{
			dataGridView_array_drivers->Rows[i]->Cells[3]->Value = L"";
			dataGridView_array_drivers->Rows[i]->Cells[4]->Value = L"Помилка вводу!";
		}
	}

	MessageBox::Show(L"Розрахунок завершено!", L"Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

private: System::Void toolStripButton_picture_save_Click(System::Object^ sender, System::EventArgs^ e)
{
	// Перевірка, чи є зображення
	if (pictureBox1->Image == nullptr)
	{
		MessageBox::Show(L"Немає зображення для збереження.", L"Помилка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// Встановлюємо фільтр для збереження (3 формати, як у методичці)
	saveFileDialog1->Filter = L"Зображення JPEG (*.jpg)|*.jpg|Зображення Bitmap (*.bmp)|*.bmp|Зображення GIF (*.gif)|*.gif";
	saveFileDialog1->Title = L"Зберегти файл зображення";
	saveFileDialog1->OverwritePrompt = true;

	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try {
			// Створюємо потік для запису у файл
			System::IO::FileStream^ fs = dynamic_cast<System::IO::FileStream^>(saveFileDialog1->OpenFile());

			// Вибираємо формат залежно від FilterIndex
			switch (saveFileDialog1->FilterIndex)
			{
			case 1: // JPEG
				pictureBox1->Image->Save(fs, System::Drawing::Imaging::ImageFormat::Jpeg);
					break;
			case 2: // BMP
				pictureBox1->Image->Save(fs, System::Drawing::Imaging::ImageFormat::Bmp);
					break;
			case 3: // GIF
				pictureBox1->Image->Save(fs, System::Drawing::Imaging::ImageFormat::Gif);
					break;
			}
			fs->Close(); // Закриваємо потік
			MessageBox::Show(L"Зображення успішно збережено.", L"Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(L"Помилка при збереженні файлу: " + ex->Message, L"Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}

	   // Обробник ToolStripButton "Load Photo"
private: System::Void toolStripButton_picture_load_Click(System::Object^ sender, System::EventArgs^ e)
{
	openFileDialog1->Filter = L"Файли зображень (*.bmp;*.jpg;*.jpeg;*.gif;*.png)|*.bmp;*.jpg;*.jpeg;*.gif;*.png|Усі файли (*.*)|*.*";
	openFileDialog1->Title = L"Оберіть графічний файл";

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try
		{
			pictureBox1->Image = Image::FromFile(openFileDialog1->FileName);
			MessageBox::Show(L"Зображення завантажено успішно!", L"Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(L"Помилка при відкритті файлу:\n" + ex->Message, L"Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}


	   // Обробник меню "Вихід"
private: System::Void toolStripMenuItem_Exit_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}


private: System::Void button_matrix_calculate_Click(System::Object^ sender, System::EventArgs^ e)
{
	int N, M;

	//Зчитування розмірів
	try {
		if (String::IsNullOrWhiteSpace(textBox_matrix_N->Text) ||
			String::IsNullOrWhiteSpace(textBox_matrix_M->Text)) 
		{
			MessageBox::Show(L"Введіть значення для N та M!", L"Помилка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		N = Convert::ToInt32(textBox_matrix_N->Text);
		M = Convert::ToInt32(textBox_matrix_M->Text);

		if (N <= 0 || M <= 0) 
		{
			MessageBox::Show(L"Кількість рядків (N) та стовпців (M) має бути > 0.", L"Помилка вводу", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (N > 20 || M > 20) 
		{
			MessageBox::Show(L"Максимум 20 рядків і 20 стовпців!", L"Помилка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
	}
	catch (Exception^) 
	{
		MessageBox::Show(L"Введіть коректні цілі числа для N та M.", L"Помилка вводу", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// 2. Перевірка чи таблиця порожня (потрібно створити)
	bool needsCreation = (dataGridView_matrix->Columns->Count == 0) ||
		(dataGridView_matrix->Columns->Count != M + 1) ||
		(dataGridView_matrix->Rows->Count != N);

	if (needsCreation) 
	{
		// Створюємо таблицю
		dataGridView_matrix->Rows->Clear();
		dataGridView_matrix->Columns->Clear();

		// Додаємо стовпці для елементів матриці
		for (int j = 0; j < M; j++) 
		{
			DataGridViewTextBoxColumn^ col = gcnew DataGridViewTextBoxColumn();
			col->HeaderText = String::Format(L"C{0}", j + 1);
			col->Name = String::Format(L"Col{0}", j);
			col->Width = 60;
			dataGridView_matrix->Columns->Add(col);
		}

		// Додаємо стовпець для мінімуму
		DataGridViewTextBoxColumn^ minCol = gcnew DataGridViewTextBoxColumn();
		minCol->HeaderText = L"Min";
		minCol->Name = L"ColMin";
		minCol->ReadOnly = true;
		minCol->Width = 60;
		minCol->DefaultCellStyle->BackColor = System::Drawing::Color::LightGray;
		dataGridView_matrix->Columns->Add(minCol);

		// Додаємо рядки
		for (int i = 0; i < N; i++) 
		{
			dataGridView_matrix->Rows->Add();
		}

		// Налаштування відображення
		dataGridView_matrix->AllowUserToAddRows = false;
		dataGridView_matrix->AllowUserToDeleteRows = false;
		dataGridView_matrix->RowHeadersVisible = true;
		dataGridView_matrix->ColumnHeadersVisible = true;

		// Якщо вибрано рандомне заповнення
		if (checkBox_random->Checked) 
		{
			Random^ rand = gcnew Random();
			for (int i = 0; i < N; i++) 
			{
				for (int j = 0; j < M; j++) 
				{
					dataGridView_matrix->Rows[i]->Cells[j]->Value = rand->Next(1, 100);
				}
			}
			MessageBox::Show(String::Format(L"Таблиця {0}x{1} створена та заповнена випадковими числами!\n\nНатисніть Calculate знову для сортування.", N, M),
				L"Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else 
		{
			MessageBox::Show(String::Format(L"Таблиця {0}x{1} створена!\n\nВведіть цілі числа.\nПотім натисніть Calculate для сортування.", N, M),
				L"Введення даних", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		return;
	}

	//Таблиця вже створена - перевіряємо чи заповнена
	bool hasData = false;
	for (int i = 0; i < N; i++) 
	{
		for (int j = 0; j < M; j++) 
		{
			if (dataGridView_matrix->Rows[i]->Cells[j]->Value != nullptr &&
				!String::IsNullOrWhiteSpace(dataGridView_matrix->Rows[i]->Cells[j]->Value->ToString())) 
			{
				hasData = true;
				break;
			}
		}
		if (hasData) break;
	}

	if (!hasData) 
	{
		MessageBox::Show(L"Таблиця порожня! Введіть дані перед сортуванням.", L"Попередження", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	//Зчитування та обробка даних
	array<int, 2>^ matrix = gcnew array<int, 2>(N, M);
	array<int>^ minValues = gcnew array<int>(N);

	try {
		for (int i = 0; i < N; i++) 
		{
			int minVal = Int32::MaxValue;

			for (int j = 0; j < M; j++) 
			{
				if (dataGridView_matrix->Rows[i]->Cells[j]->Value == nullptr ||
					String::IsNullOrWhiteSpace(dataGridView_matrix->Rows[i]->Cells[j]->Value->ToString())) 
				{
					MessageBox::Show(String::Format(L"Комірка [Рядок {0}, Стовпець {1}] порожня!\n\nЗаповніть всі комірки перед сортуванням.", i + 1, j + 1),
						L"Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				int val = Convert::ToInt32(dataGridView_matrix->Rows[i]->Cells[j]->Value);
				matrix[i, j] = val;

				if (val < minVal) 
				{
					minVal = val;
				}
			}
			minValues[i] = minVal;
		}
	}
	catch (FormatException^) 
	{
		MessageBox::Show(L"Помилка! Всі елементи мають бути цілими числами.", L"Помилка вводу", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	catch (Exception^ ex) 
	{
		MessageBox::Show(L"Помилка зчитування даних:\n" + ex->Message, L"Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	//Сортування рядків за мінімумами (бульбашка)
	for (int i = 0; i < N - 1; i++) 
	{
		for (int j = 0; j < N - i - 1; j++) 
		{
			if (minValues[j] > minValues[j + 1]) 
			{
				// Обмін мінімумів
				int tempMin = minValues[j];
				minValues[j] = minValues[j + 1];
				minValues[j + 1] = tempMin;

				// Обмін рядків матриці
				for (int k = 0; k < M; k++) 
				{
					int temp = matrix[j, k];
					matrix[j, k] = matrix[j + 1, k];
					matrix[j + 1, k] = temp;
				}
			}
		}
	}

	//Виведення відсортованої матриці
	for (int i = 0; i < N; i++) 
	{
		for (int j = 0; j < M; j++) 
		{
			dataGridView_matrix->Rows[i]->Cells[j]->Value = matrix[i, j];
			dataGridView_matrix->Rows[i]->Cells[j]->Style->BackColor = System::Drawing::Color::LightGreen;
		}
		dataGridView_matrix->Rows[i]->Cells[M]->Value = minValues[i];
	}

	MessageBox::Show(L"Рядки матриці впорядковано за зростанням мінімальних елементів!",
		L"Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

private: System::Void toolStripButton_clean_array_Click(System::Object^ sender, System::EventArgs^ e)
{
	// Очищення таблиці водіїв
	dataGridView_array_drivers->Rows->Clear();
	// Очищення поля C
	textBox1->Clear();
}

private: System::Void toolStripButton_clean_matrix_Click(System::Object^ sender, System::EventArgs^ e)
{
	dataGridView_matrix->Rows->Clear();
	dataGridView_matrix->Columns->Clear();
	textBox_matrix_N->Clear();
	textBox_matrix_M->Clear();
}
private: System::Void themeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{

}

private: System::Void lightToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->BackColor = System::Drawing::Color::White;
	tabControl1->BackColor = System::Drawing::Color::White;
	tabPage_array->BackColor = System::Drawing::Color::White;
	tabPage_matrix->BackColor = System::Drawing::Color::White;
	tabPage_picture->BackColor = System::Drawing::Color::White;

	dataGridView_array_drivers->BackgroundColor = System::Drawing::Color::White;
	dataGridView_matrix->BackgroundColor = System::Drawing::Color::White;
}

private: System::Void grayToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->BackColor = System::Drawing::Color::LightGray;
	tabControl1->BackColor = System::Drawing::Color::LightGray;
	tabPage_array->BackColor = System::Drawing::Color::LightGray;
	tabPage_matrix->BackColor = System::Drawing::Color::LightGray;
	tabPage_picture->BackColor = System::Drawing::Color::LightGray;

	dataGridView_array_drivers->BackgroundColor = System::Drawing::Color::Gainsboro;
	dataGridView_matrix->BackgroundColor = System::Drawing::Color::Gainsboro;
}

private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	MessageBox::Show(
		L"Лабораторна робота №6\n\n"
		L"Тема: Багатосторінковий інтерфейс\n\n"
		L"Завдання:\n"
		L"1. Розрахунок заробітної плати водіїв\n"
		L"2. Впорядкування рядків матриці за мінімумами\n"
		L"3. Робота з графічними файлами\n\n"
		L"Варіант 14\n\n"
		L"Розробник: Назар Сисоєв\n"
		L"Група: ІПЗ 24-2\n"
		L"Рік: 2024",
		L"Про програму",
		MessageBoxButtons::OK,
		MessageBoxIcon::Information
	);
}

private: System::Void toolStripMenuItem_Open_Click(System::Object^ sender, System::EventArgs^ e) 
{
	toolStripButton_picture_load_Click(sender, e);
}

private: System::Void toolStripMenuItem_Save_Click(System::Object^ sender, System::EventArgs^ e) 
{
	toolStripButton_picture_save_Click(sender, e);
}

private: System::Void checkBox_random_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
}

};
}
