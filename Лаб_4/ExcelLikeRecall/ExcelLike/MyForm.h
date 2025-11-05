#pragma once

namespace ExcelLikeRecall {

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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenu_ChartDesign;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenu_calculate;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenu_erase;
















	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
	private: System::Windows::Forms::ToolStripComboBox^ toolStrip_context_ChartStyle;



	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenu_File;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStrip_Save;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStrip_Open;
	private: System::Windows::Forms::ToolStripMenuItem^ calculationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ calculate_ToolStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ erase_ToolStrip;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^ exit_toolStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ settingsToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ themeStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ light_themeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dark_themeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripDropDownButton^ toolStripDropChartStyle;


	private: System::Windows::Forms::ToolStripComboBox^ toolStripComboBox1;
private: System::Windows::Forms::ToolStripButton^ toolStripButton_HideTask;









	private: System::ComponentModel::IContainer^ components;







	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->X = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Y = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->contextMenu_ChartDesign = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->toolStripMenu_calculate = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenu_erase = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStrip_context_ChartStyle = (gcnew System::Windows::Forms::ToolStripComboBox());
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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenu_File = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip_Save = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStrip_Open = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->calculationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->calculate_ToolStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->erase_ToolStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exit_toolStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->themeStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->light_themeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dark_themeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->aboutToolStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripDropChartStyle = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->toolStripComboBox1 = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->toolStripButton_HideTask = (gcnew System::Windows::Forms::ToolStripButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->contextMenu_ChartDesign->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_func))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_values))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
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
			this->dataGridView1->ContextMenuStrip = this->contextMenu_ChartDesign;
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
			// contextMenu_ChartDesign
			// 
			this->contextMenu_ChartDesign->AccessibleRole = System::Windows::Forms::AccessibleRole::Grip;
			this->contextMenu_ChartDesign->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenu_calculate,
					this->toolStripMenu_erase, this->toolStripSeparator3, this->toolStrip_context_ChartStyle
			});
			this->contextMenu_ChartDesign->Name = L"contextMenuStrip1";
			this->contextMenu_ChartDesign->Size = System::Drawing::Size(182, 81);
			// 
			// toolStripMenu_calculate
			// 
			this->toolStripMenu_calculate->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenu_calculate.Image")));
			this->toolStripMenu_calculate->Name = L"toolStripMenu_calculate";
			this->toolStripMenu_calculate->Size = System::Drawing::Size(181, 22);
			this->toolStripMenu_calculate->Text = L"Calculate";
			this->toolStripMenu_calculate->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenu_calculate_Click);
			// 
			// toolStripMenu_erase
			// 
			this->toolStripMenu_erase->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenu_erase.Image")));
			this->toolStripMenu_erase->Name = L"toolStripMenu_erase";
			this->toolStripMenu_erase->Size = System::Drawing::Size(181, 22);
			this->toolStripMenu_erase->Text = L"Erase";
			this->toolStripMenu_erase->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenu_erase_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(178, 6);
			// 
			// toolStrip_context_ChartStyle
			// 
			this->toolStrip_context_ChartStyle->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Point", L"FastPoint", L"Bubble",
					L"Line", L"Spline", L"StepLine", L"FastLine", L"Bar", L"StackedBar", L"Column"
			});
			this->toolStrip_context_ChartStyle->Name = L"toolStrip_context_ChartStyle";
			this->toolStrip_context_ChartStyle->Size = System::Drawing::Size(121, 23);
			this->toolStrip_context_ChartStyle->Text = L"Chart Style";
			this->toolStrip_context_ChartStyle->Click += gcnew System::EventHandler(this, &MyForm::toolStrip_context_ChartStyle_Click);
			// 
			// pictureBox_func
			// 
			this->pictureBox_func->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_func.Image")));
			this->pictureBox_func->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_func.InitialImage")));
			this->pictureBox_func->Location = System::Drawing::Point(361, 69);
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
			this->pictureBox_values->Location = System::Drawing::Point(361, 174);
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
			this->butt_erase->Location = System::Drawing::Point(145, 193);
			this->butt_erase->Name = L"butt_erase";
			this->butt_erase->Size = System::Drawing::Size(98, 60);
			this->butt_erase->TabIndex = 1;
			this->butt_erase->Text = L"Erase";
			this->butt_erase->UseVisualStyleBackColor = true;
			this->butt_erase->Click += gcnew System::EventHandler(this, &MyForm::butt_erase_Click);
			// 
			// butt_calculate
			// 
			this->butt_calculate->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butt_calculate->Location = System::Drawing::Point(25, 193);
			this->butt_calculate->Name = L"butt_calculate";
			this->butt_calculate->Size = System::Drawing::Size(98, 60);
			this->butt_calculate->TabIndex = 1;
			this->butt_calculate->Text = L"Calculate";
			this->butt_calculate->UseVisualStyleBackColor = true;
			this->butt_calculate->Click += gcnew System::EventHandler(this, &MyForm::butt_calculate_Click);
			// 
			// textBox_Xn
			// 
			this->textBox_Xn->Location = System::Drawing::Point(45, 73);
			this->textBox_Xn->Name = L"textBox_Xn";
			this->textBox_Xn->Size = System::Drawing::Size(100, 20);
			this->textBox_Xn->TabIndex = 4;
			// 
			// lab_Xn
			// 
			this->lab_Xn->AutoSize = true;
			this->lab_Xn->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lab_Xn->Location = System::Drawing::Point(12, 74);
			this->lab_Xn->Name = L"lab_Xn";
			this->lab_Xn->Size = System::Drawing::Size(31, 19);
			this->lab_Xn->TabIndex = 5;
			this->lab_Xn->Text = L"Xn:";
			// 
			// textBox_Z
			// 
			this->textBox_Z->Location = System::Drawing::Point(177, 125);
			this->textBox_Z->Name = L"textBox_Z";
			this->textBox_Z->Size = System::Drawing::Size(100, 20);
			this->textBox_Z->TabIndex = 4;
			// 
			// lab_z
			// 
			this->lab_z->AutoSize = true;
			this->lab_z->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lab_z->Location = System::Drawing::Point(154, 124);
			this->lab_z->Name = L"lab_z";
			this->lab_z->Size = System::Drawing::Size(22, 19);
			this->lab_z->TabIndex = 5;
			this->lab_z->Text = L"z:";
			// 
			// textBox_Q
			// 
			this->textBox_Q->Location = System::Drawing::Point(177, 73);
			this->textBox_Q->Name = L"textBox_Q";
			this->textBox_Q->Size = System::Drawing::Size(100, 20);
			this->textBox_Q->TabIndex = 4;
			// 
			// lab_Q
			// 
			this->lab_Q->AutoSize = true;
			this->lab_Q->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lab_Q->Location = System::Drawing::Point(150, 73);
			this->lab_Q->Name = L"lab_Q";
			this->lab_Q->Size = System::Drawing::Size(26, 19);
			this->lab_Q->TabIndex = 5;
			this->lab_Q->Text = L"Q:";
			// 
			// textBox_K
			// 
			this->textBox_K->Location = System::Drawing::Point(177, 99);
			this->textBox_K->Name = L"textBox_K";
			this->textBox_K->Size = System::Drawing::Size(100, 20);
			this->textBox_K->TabIndex = 4;
			// 
			// lab_K
			// 
			this->lab_K->AutoSize = true;
			this->lab_K->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lab_K->Location = System::Drawing::Point(154, 98);
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
			this->label_func->Location = System::Drawing::Point(489, 47);
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
			this->label_values->Location = System::Drawing::Point(489, 152);
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
			series1->Legend = L"X";
			series1->Name = L"Function";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(425, 291);
			this->chart1->TabIndex = 8;
			this->chart1->Text = L"chart1";
			// 
			// label_result
			// 
			this->label_result->AutoSize = true;
			this->label_result->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_result->Location = System::Drawing::Point(288, 254);
			this->label_result->Name = L"label_result";
			this->label_result->Size = System::Drawing::Size(57, 23);
			this->label_result->TabIndex = 9;
			this->label_result->Text = L"Result";
			// 
			// textBox_Xk
			// 
			this->textBox_Xk->Location = System::Drawing::Point(45, 99);
			this->textBox_Xk->Name = L"textBox_Xk";
			this->textBox_Xk->Size = System::Drawing::Size(100, 20);
			this->textBox_Xk->TabIndex = 4;
			// 
			// lab_Xk
			// 
			this->lab_Xk->AutoSize = true;
			this->lab_Xk->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lab_Xk->Location = System::Drawing::Point(12, 102);
			this->lab_Xk->Name = L"lab_Xk";
			this->lab_Xk->Size = System::Drawing::Size(31, 19);
			this->lab_Xk->TabIndex = 5;
			this->lab_Xk->Text = L"Xk:";
			// 
			// textBox_dx
			// 
			this->textBox_dx->Location = System::Drawing::Point(45, 125);
			this->textBox_dx->Name = L"textBox_dx";
			this->textBox_dx->Size = System::Drawing::Size(100, 20);
			this->textBox_dx->TabIndex = 4;
			// 
			// lab_dx
			// 
			this->lab_dx->AutoSize = true;
			this->lab_dx->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lab_dx->Location = System::Drawing::Point(12, 128);
			this->lab_dx->Name = L"lab_dx";
			this->lab_dx->Size = System::Drawing::Size(31, 19);
			this->lab_dx->TabIndex = 5;
			this->lab_dx->Text = L"dx:";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenu_File,
					this->calculationToolStripMenuItem, this->settingsToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(698, 24);
			this->menuStrip1->TabIndex = 10;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenu_File
			// 
			this->toolStripMenu_File->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStrip_Save,
					this->ToolStrip_Open
			});
			this->toolStripMenu_File->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenu_File.Image")));
			this->toolStripMenu_File->Name = L"toolStripMenu_File";
			this->toolStripMenu_File->Size = System::Drawing::Size(53, 20);
			this->toolStripMenu_File->Text = L"&File";
			// 
			// toolStrip_Save
			// 
			this->toolStrip_Save->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStrip_Save.Image")));
			this->toolStrip_Save->Name = L"toolStrip_Save";
			this->toolStrip_Save->ShortcutKeyDisplayString = L"";
			this->toolStrip_Save->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->toolStrip_Save->Size = System::Drawing::Size(180, 22);
			this->toolStrip_Save->Text = L"Save";
			this->toolStrip_Save->Click += gcnew System::EventHandler(this, &MyForm::toolStrip_Save_Click);
			// 
			// ToolStrip_Open
			// 
			this->ToolStrip_Open->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ToolStrip_Open.Image")));
			this->ToolStrip_Open->Name = L"ToolStrip_Open";
			this->ToolStrip_Open->ShortcutKeyDisplayString = L"";
			this->ToolStrip_Open->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->ToolStrip_Open->Size = System::Drawing::Size(180, 22);
			this->ToolStrip_Open->Text = L"Open";
			this->ToolStrip_Open->Click += gcnew System::EventHandler(this, &MyForm::ToolStrip_Open_Click);
			// 
			// calculationToolStripMenuItem
			// 
			this->calculationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->calculate_ToolStrip,
					this->erase_ToolStrip, this->toolStripSeparator1, this->exit_toolStrip
			});
			this->calculationToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"calculationToolStripMenuItem.Image")));
			this->calculationToolStripMenuItem->Name = L"calculationToolStripMenuItem";
			this->calculationToolStripMenuItem->Size = System::Drawing::Size(95, 20);
			this->calculationToolStripMenuItem->Text = L"&Calculation";
			// 
			// calculate_ToolStrip
			// 
			this->calculate_ToolStrip->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"calculate_ToolStrip.Image")));
			this->calculate_ToolStrip->Name = L"calculate_ToolStrip";
			this->calculate_ToolStrip->ShortcutKeyDisplayString = L"";
			this->calculate_ToolStrip->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::C));
			this->calculate_ToolStrip->Size = System::Drawing::Size(180, 22);
			this->calculate_ToolStrip->Text = L"Calculate";
			this->calculate_ToolStrip->Click += gcnew System::EventHandler(this, &MyForm::calculate_ToolStrip_Click);
			// 
			// erase_ToolStrip
			// 
			this->erase_ToolStrip->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"erase_ToolStrip.Image")));
			this->erase_ToolStrip->Name = L"erase_ToolStrip";
			this->erase_ToolStrip->ShortcutKeyDisplayString = L"";
			this->erase_ToolStrip->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::E));
			this->erase_ToolStrip->Size = System::Drawing::Size(180, 22);
			this->erase_ToolStrip->Text = L"Erase";
			this->erase_ToolStrip->Click += gcnew System::EventHandler(this, &MyForm::erase_ToolStrip_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(177, 6);
			// 
			// exit_toolStrip
			// 
			this->exit_toolStrip->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exit_toolStrip.Image")));
			this->exit_toolStrip->Name = L"exit_toolStrip";
			this->exit_toolStrip->ShortcutKeyDisplayString = L"";
			this->exit_toolStrip->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F4));
			this->exit_toolStrip->Size = System::Drawing::Size(180, 22);
			this->exit_toolStrip->Text = L"Exit";
			this->exit_toolStrip->Click += gcnew System::EventHandler(this, &MyForm::exit_toolStrip_Click);
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->themeStripMenuItem1,
					this->toolStripSeparator2, this->aboutToolStrip
			});
			this->settingsToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"settingsToolStripMenuItem.Image")));
			this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(77, 20);
			this->settingsToolStripMenuItem->Text = L"Settings";
			// 
			// themeStripMenuItem1
			// 
			this->themeStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->light_themeToolStripMenuItem,
					this->dark_themeToolStripMenuItem
			});
			this->themeStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"themeStripMenuItem1.Image")));
			this->themeStripMenuItem1->Name = L"themeStripMenuItem1";
			this->themeStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->themeStripMenuItem1->Text = L"Theme";
			// 
			// light_themeToolStripMenuItem
			// 
			this->light_themeToolStripMenuItem->Name = L"light_themeToolStripMenuItem";
			this->light_themeToolStripMenuItem->Size = System::Drawing::Size(101, 22);
			this->light_themeToolStripMenuItem->Text = L"Light";
			this->light_themeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::light_themeToolStripMenuItem_Click);
			// 
			// dark_themeToolStripMenuItem
			// 
			this->dark_themeToolStripMenuItem->Name = L"dark_themeToolStripMenuItem";
			this->dark_themeToolStripMenuItem->Size = System::Drawing::Size(101, 22);
			this->dark_themeToolStripMenuItem->Text = L"Dark";
			this->dark_themeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::dark_themeToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(177, 6);
			// 
			// aboutToolStrip
			// 
			this->aboutToolStrip->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"aboutToolStrip.Image")));
			this->aboutToolStrip->Name = L"aboutToolStrip";
			this->aboutToolStrip->ShortcutKeyDisplayString = L"";
			this->aboutToolStrip->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::A));
			this->aboutToolStrip->Size = System::Drawing::Size(180, 22);
			this->aboutToolStrip->Text = L"&About";
			this->aboutToolStrip->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStrip_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripDropChartStyle,
					this->toolStripButton_HideTask
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(698, 25);
			this->toolStrip1->TabIndex = 11;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripDropChartStyle
			// 
			this->toolStripDropChartStyle->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripComboBox1 });
			this->toolStripDropChartStyle->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripDropChartStyle.Image")));
			this->toolStripDropChartStyle->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropChartStyle->Name = L"toolStripDropChartStyle";
			this->toolStripDropChartStyle->Size = System::Drawing::Size(93, 22);
			this->toolStripDropChartStyle->Text = L"Chart Style";
			// 
			// toolStripComboBox1
			// 
			this->toolStripComboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Point", L"FastPoint", L"Bubble", L"Line",
					L"Spline", L"StepLine", L"FastLine", L"Bar", L"StackedBar", L"Column"
			});
			this->toolStripComboBox1->Name = L"toolStripComboBox1";
			this->toolStripComboBox1->Size = System::Drawing::Size(121, 23);
			this->toolStripComboBox1->Text = L"Chart Style";
			this->toolStripComboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::toolStripComboBox1_SelectedIndexChanged);
			// 
			// toolStripButton_HideTask
			// 
			this->toolStripButton_HideTask->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton_HideTask.Image")));
			this->toolStripButton_HideTask->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton_HideTask->Name = L"toolStripButton_HideTask";
			this->toolStripButton_HideTask->Size = System::Drawing::Size(78, 22);
			this->toolStripButton_HideTask->Text = L"Hide Task";
			this->toolStripButton_HideTask->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton_HideTask_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(698, 560);
			this->Controls->Add(this->toolStrip1);
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
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Excel Simulator 2.0";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->contextMenu_ChartDesign->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_func))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_values))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
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

// ФУНКЦІЯ: ЗМІНА СТИЛЮ ГРАФІКА

private: System::Void ApplyChartStyle(System::String^ selectedStyle)
{
	if (this->chart1->Series->Count > 0)
	{
		System::Windows::Forms::DataVisualization::Charting::SeriesChartType chartType;

		// Звіряємо рядок з переліком доступних ChartType
		if (selectedStyle->Equals(L"Point")) chartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
		else if (selectedStyle->Equals(L"FastPoint")) chartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
		else if (selectedStyle->Equals(L"Bubble")) chartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Bubble;
		else if (selectedStyle->Equals(L"Line")) chartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
		else if (selectedStyle->Equals(L"Spline")) chartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
		else if (selectedStyle->Equals(L"StepLine")) chartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::StepLine;
		else if (selectedStyle->Equals(L"FastLine")) chartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastLine;
		else if (selectedStyle->Equals(L"Bar")) chartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Bar;
		else if (selectedStyle->Equals(L"StackedBar")) chartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::StackedBar;
		else if (selectedStyle->Equals(L"Column")) chartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
		else return; // Якщо невідомий стиль, виходимо

		// Застосовуємо новий стиль
		this->chart1->Series["Function"]->ChartType = chartType;
	}
}
	   // ОБРОБНИКИ (ContextMenuStrip)

private: System::Void toolStripMenu_calculate_Click(System::Object^ sender, System::EventArgs^ e)
{
	// викликаємо основний обробник кнопки Calculate
	this->butt_calculate_Click(sender, e);
}

private: System::Void toolStripMenu_erase_Click(System::Object^ sender, System::EventArgs^ e)
{
	// викликаємо основний обробник кнопки Erase
	this->butt_erase_Click(sender, e);
}

	   // Обробник для toolStrip_context_ChartStyle (ComboBox у контекстному меню).
private: System::Void toolStrip_context_ChartStyle_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Windows::Forms::ToolStripComboBox^ comboBox = dynamic_cast<System::Windows::Forms::ToolStripComboBox^>(sender);

	if (comboBox != nullptr && comboBox->SelectedItem != nullptr)
	{
		this->ApplyChartStyle(comboBox->SelectedItem->ToString());
	}
	else if (comboBox != nullptr)
	{
		// якщо викликається Click, а не SelectedIndexChanged
		this->ApplyChartStyle(comboBox->Text);
	}
}

 // ОБРОБНИКИ (MenuStrip)

private: System::Void calculate_ToolStrip_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->butt_calculate_Click(sender, e);
}

private: System::Void erase_ToolStrip_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->butt_erase_Click(sender, e);
}

private: System::Void exit_toolStrip_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}

private: System::Void toolStrip_Save_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("File saved! I guess..", "Save",
		MessageBoxButtons::OK, MessageBoxIcon::Information);
}

private: System::Void ToolStrip_Open_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("We will open it! maybe..", "Open",
		MessageBoxButtons::OK, MessageBoxIcon::Information);
}

private: System::Void aboutToolStrip_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Program-Simulator Excel for calculation purpose.\nLaboratory Work №4 made by Nazar Sysoiev, IPZ-24-2.",
		"About",
		MessageBoxButtons::OK, MessageBoxIcon::Information);
}

 // ОБРОБНИКИ (ToolStrip)

private: System::Void toolStripButton_HideTask_Click(System::Object^ sender, System::EventArgs^ e)
{
	// Перемикаємо видимість елементів завдання
	bool isVisible = this->pictureBox_func->Visible;
	this->pictureBox_func->Visible = !isVisible;
	this->pictureBox_values->Visible = !isVisible;
	this->label_func->Visible = !isVisible;
	this->label_values->Visible = !isVisible;

	// Змінюємо текст кнопки
	if (isVisible) {
		this->toolStripButton_HideTask->Text = L"Show Task";
	}
	else {
		this->toolStripButton_HideTask->Text = L"Hide Task";
	}
}

	   // Обробник для ToolStripComboBox1
private: System::Void toolStripComboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	System::Windows::Forms::ToolStripComboBox^ comboBox = dynamic_cast<System::Windows::Forms::ToolStripComboBox^>(sender);
	if (comboBox != nullptr && comboBox->SelectedItem != nullptr)
	{
		this->ApplyChartStyle(comboBox->SelectedItem->ToString());
	}
}


// ЗМІНА ТЕМИ


private: System::Void light_themeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	// Світла Тема
	this->BackColor = System::Drawing::SystemColors::ScrollBar; // Колір форми
	this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ScrollBar;
	this->chart1->BackColor = System::Drawing::SystemColors::ScrollBar;
	this->chart1->ChartAreas[0]->BackColor = System::Drawing::Color::White; // Фон області графіку

	// Кольори осей та тексту (скидання на світлі значення)
	this->chart1->ChartAreas[0]->AxisX->LineColor = System::Drawing::Color::Black;
	this->chart1->ChartAreas[0]->AxisY->LineColor = System::Drawing::Color::Black;
	this->chart1->ChartAreas[0]->AxisX->LabelStyle->ForeColor = System::Drawing::Color::Black;
	this->chart1->ChartAreas[0]->AxisY->LabelStyle->ForeColor = System::Drawing::Color::Black;
	this->chart1->ChartAreas[0]->AxisX->TitleForeColor = System::Drawing::Color::Black;
	this->chart1->ChartAreas[0]->AxisY->TitleForeColor = System::Drawing::Color::Black;

	// Індекс серії має бути не менше 0
	if (this->chart1->Series->IndexOf("Function") >= 0)
	{
		this->chart1->Series["Function"]->Color = System::Drawing::Color::DodgerBlue;
	}
}

private: System::Void dark_themeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	// Темна Тема
	this->BackColor = System::Drawing::Color::DimGray; // Колір форми
	this->dataGridView1->BackgroundColor = System::Drawing::Color::DimGray;
	this->chart1->BackColor = System::Drawing::Color::DimGray;
	this->chart1->ChartAreas[0]->BackColor = System::Drawing::Color::FromArgb(20, 20, 20); // Темний фон області графіку

	// Індекс серії має бути не менше 0
	if (this->chart1->Series->IndexOf("Function") >= 0)
	{
		this->chart1->Series["Function"]->Color = System::Drawing::Color::Orange;
	}

	// Кольори осей та тексту (встановлення темних значень)
	this->chart1->ChartAreas[0]->AxisX->LineColor = System::Drawing::Color::White;
	this->chart1->ChartAreas[0]->AxisY->LineColor = System::Drawing::Color::White;
	this->chart1->ChartAreas[0]->AxisX->LabelStyle->ForeColor = System::Drawing::Color::White;
	this->chart1->ChartAreas[0]->AxisY->LabelStyle->ForeColor = System::Drawing::Color::White;
	this->chart1->ChartAreas[0]->AxisX->TitleForeColor = System::Drawing::Color::White;
	this->chart1->ChartAreas[0]->AxisY->TitleForeColor = System::Drawing::Color::White;
}
};
}
