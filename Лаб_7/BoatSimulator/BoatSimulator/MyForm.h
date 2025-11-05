#pragma once

namespace BoatSimulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic; // Для List<T>^
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			// Прив'язка кнопок на вкладці "Додати"
			this->button1_Add_addBoat->Click += gcnew System::EventHandler(this, &MyForm::button1_Add_addBoat_Click);
			this->button2_Add_clean->Click += gcnew System::EventHandler(this, &MyForm::button2_Add_clean_Click);

			// Прив'язка кнопок на вкладці "Перегляд"
			this->button2_Show_Search->Click += gcnew System::EventHandler(this, &MyForm::button2_Show_Search_Click);
			this->button1_Show_ShowAll->Click += gcnew System::EventHandler(this, &MyForm::button1_Show_ShowAll_Click);

			// Прив'язка кнопок на вкладці "Редагувати"
			this->dataGridView2_Change_BoatList->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_Change_BoatList_CellEndEdit);
			this->button1_Change_SaveAllChanges->Click += gcnew System::EventHandler(this, &MyForm::button1_Change_SaveAllChanges_Click);
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Change_Delete_Click); // Кнопка "Видалити вибраний"

			// Прив'язка кнопки на вкладці "Сортувати"
			this->button2_Sort_ToSort->Click += gcnew System::EventHandler(this, &MyForm::button2_Sort_ToSort_Click);

			// Налаштування NumericUpDown
			numericUpDown1_Add_Capacity->Minimum = 1;
			numericUpDown1_Add_Capacity->Maximum = 100;
			numericUpDown1_Add_Capacity->Value = 10;

			numericUpDown2_Add_Speed->Minimum = Convert::ToDecimal(1);
			numericUpDown2_Add_Speed->Maximum = Convert::ToDecimal(200);
			numericUpDown2_Add_Speed->DecimalPlaces = 1;
			numericUpDown2_Add_Speed->Increment = Convert::ToDecimal(0.5);
			numericUpDown2_Add_Speed->Value = Convert::ToDecimal(50);

			// Налаштування DataGridView для редагування
			dataGridView2_Change_BoatList->AllowUserToAddRows = false;
			dataGridView2_Change_BoatList->AllowUserToDeleteRows = false;
			dataGridView2_Change_BoatList->ReadOnly = false;
			dataGridView2_Change_BoatList->EditMode = DataGridViewEditMode::EditOnEnter;
			dataGridView2_Change_BoatList->SelectionMode = DataGridViewSelectionMode::FullRowSelect;

			// Налаштування ProgressBar
			progressBar1_Add_capacity->Maximum = MAX_BOATS;
			progressBar1_Add_capacity->Value = 0;

			// Оновлення інтерфейсу
			UpdateAllUI();
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
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1_Add;

	private: System::Windows::Forms::TabPage^ tabPage2_Show;
	protected:


	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem_Open;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem_Save;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem_Exit;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;


	private: System::Windows::Forms::TabPage^ tabPage3_Change;
	private: System::Windows::Forms::TabPage^ tabPage4_Sort;

	private: System::Windows::Forms::Label^ label_Add_boatType;
	private: System::Windows::Forms::ComboBox^ comboBox1_Add_boatType;
	private: System::Windows::Forms::Label^ label2_Add_Capacity;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1_Add_Capacity;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2_Add_Speed;
	private: System::Windows::Forms::Label^ label3_Add_Speed;
	private: System::Windows::Forms::Button^ button2_Add_clean;

	private: System::Windows::Forms::Button^ button1_Add_addBoat;
	private: System::Windows::Forms::ProgressBar^ progressBar1_Add_capacity;
	private: System::Windows::Forms::Label^ label4_Add_progressCapacity;
	private: System::Windows::Forms::Button^ button1_Show_ShowAll;

	private: System::Windows::Forms::Button^ button2_Show_Search;

	private: System::Windows::Forms::ComboBox^ comboBox1_Show_SearchByType;




	private: System::Windows::Forms::Label^ label3_Show_SearchByType;
	private: System::Windows::Forms::GroupBox^ groupBox1_Show_Filters;
	private: System::Windows::Forms::CheckBox^ checkBox2_Show_OnlySpacious;

	private: System::Windows::Forms::CheckBox^ checkBox1_Show_OnlyFast;
	private: System::Windows::Forms::Label^ label1_Show_FoundNotes;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Type;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Capacity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Speed;



	private: System::Windows::Forms::GroupBox^ groupBox1_Change_EditBoatType;


	private: System::Windows::Forms::DataGridView^ dataGridView2_Change_BoatList;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;

	private: System::Windows::Forms::GroupBox^ groupBox1_Change_DataChange;



	private: System::Windows::Forms::Button^ button1_Change_SaveAllChanges;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2_Show_LastUpdatedStatus;
	private: System::Windows::Forms::Label^ label1_Show_BoatAmountStatus;
	private: System::Windows::Forms::GroupBox^ groupBox2_Sort_WayToSort;
	private: System::Windows::Forms::GroupBox^ groupBox1_Sort_SortSettings;
	private: System::Windows::Forms::RadioButton^ radioButton1_Sort_ByType;
	private: System::Windows::Forms::RadioButton^ radioButton4_Sort_BySpeed;


	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2_Sort_ByCapacity;
	private: System::Windows::Forms::RadioButton^ radioButton2_Sort_ByDecline;


	private: System::Windows::Forms::RadioButton^ radioButton1_Sort_ByGrowth;
private: System::Windows::Forms::CheckBox^ checkBox1_Sort_SaveSortedOrder;
private: System::Windows::Forms::Button^ button2_Sort_ToSort;
private: System::Windows::Forms::DataGridView^ dataGridView3_Sort_Result;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Sort_Type;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Sort_Capacity;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Sort_Speed;























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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1_Add = (gcnew System::Windows::Forms::TabPage());
			this->progressBar1_Add_capacity = (gcnew System::Windows::Forms::ProgressBar());
			this->label4_Add_progressCapacity = (gcnew System::Windows::Forms::Label());
			this->button2_Add_clean = (gcnew System::Windows::Forms::Button());
			this->button1_Add_addBoat = (gcnew System::Windows::Forms::Button());
			this->numericUpDown2_Add_Speed = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1_Add_Capacity = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3_Add_Speed = (gcnew System::Windows::Forms::Label());
			this->comboBox1_Add_boatType = (gcnew System::Windows::Forms::ComboBox());
			this->label2_Add_Capacity = (gcnew System::Windows::Forms::Label());
			this->label_Add_boatType = (gcnew System::Windows::Forms::Label());
			this->tabPage2_Show = (gcnew System::Windows::Forms::TabPage());
			this->label2_Show_LastUpdatedStatus = (gcnew System::Windows::Forms::Label());
			this->label1_Show_BoatAmountStatus = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Type = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Capacity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Speed = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1_Show_Filters = (gcnew System::Windows::Forms::GroupBox());
			this->label1_Show_FoundNotes = (gcnew System::Windows::Forms::Label());
			this->checkBox2_Show_OnlySpacious = (gcnew System::Windows::Forms::CheckBox());
			this->button1_Show_ShowAll = (gcnew System::Windows::Forms::Button());
			this->label3_Show_SearchByType = (gcnew System::Windows::Forms::Label());
			this->button2_Show_Search = (gcnew System::Windows::Forms::Button());
			this->comboBox1_Show_SearchByType = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox1_Show_OnlyFast = (gcnew System::Windows::Forms::CheckBox());
			this->tabPage3_Change = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1_Change_DataChange = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button1_Change_SaveAllChanges = (gcnew System::Windows::Forms::Button());
			this->groupBox1_Change_EditBoatType = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView2_Change_BoatList = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage4_Sort = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView3_Sort_Result = (gcnew System::Windows::Forms::DataGridView());
			this->Sort_Type = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Sort_Capacity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Sort_Speed = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2_Sort_ToSort = (gcnew System::Windows::Forms::Button());
			this->groupBox2_Sort_WayToSort = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox1_Sort_SaveSortedOrder = (gcnew System::Windows::Forms::CheckBox());
			this->radioButton2_Sort_ByDecline = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1_Sort_ByGrowth = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1_Sort_SortSettings = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4_Sort_BySpeed = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2_Sort_ByCapacity = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1_Sort_ByType = (gcnew System::Windows::Forms::RadioButton());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem_Open = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem_Save = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem_Exit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->tabControl1->SuspendLayout();
			this->tabPage1_Add->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2_Add_Speed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1_Add_Capacity))->BeginInit();
			this->tabPage2_Show->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1_Show_Filters->SuspendLayout();
			this->tabPage3_Change->SuspendLayout();
			this->groupBox1_Change_DataChange->SuspendLayout();
			this->groupBox1_Change_EditBoatType->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2_Change_BoatList))->BeginInit();
			this->tabPage4_Sort->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3_Sort_Result))->BeginInit();
			this->groupBox2_Sort_WayToSort->SuspendLayout();
			this->groupBox1_Sort_SortSettings->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			resources->ApplyResources(this->tabControl1, L"tabControl1");
			this->tabControl1->Controls->Add(this->tabPage1_Add);
			this->tabControl1->Controls->Add(this->tabPage2_Show);
			this->tabControl1->Controls->Add(this->tabPage3_Change);
			this->tabControl1->Controls->Add(this->tabPage4_Sort);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->SizeMode = System::Windows::Forms::TabSizeMode::FillToRight;
			// 
			// tabPage1_Add
			// 
			resources->ApplyResources(this->tabPage1_Add, L"tabPage1_Add");
			this->tabPage1_Add->BackColor = System::Drawing::Color::LightGray;
			this->tabPage1_Add->Controls->Add(this->progressBar1_Add_capacity);
			this->tabPage1_Add->Controls->Add(this->label4_Add_progressCapacity);
			this->tabPage1_Add->Controls->Add(this->button2_Add_clean);
			this->tabPage1_Add->Controls->Add(this->button1_Add_addBoat);
			this->tabPage1_Add->Controls->Add(this->numericUpDown2_Add_Speed);
			this->tabPage1_Add->Controls->Add(this->numericUpDown1_Add_Capacity);
			this->tabPage1_Add->Controls->Add(this->label3_Add_Speed);
			this->tabPage1_Add->Controls->Add(this->comboBox1_Add_boatType);
			this->tabPage1_Add->Controls->Add(this->label2_Add_Capacity);
			this->tabPage1_Add->Controls->Add(this->label_Add_boatType);
			this->tabPage1_Add->Name = L"tabPage1_Add";
			// 
			// progressBar1_Add_capacity
			// 
			resources->ApplyResources(this->progressBar1_Add_capacity, L"progressBar1_Add_capacity");
			this->progressBar1_Add_capacity->Name = L"progressBar1_Add_capacity";
			// 
			// label4_Add_progressCapacity
			// 
			resources->ApplyResources(this->label4_Add_progressCapacity, L"label4_Add_progressCapacity");
			this->label4_Add_progressCapacity->Name = L"label4_Add_progressCapacity";
			// 
			// button2_Add_clean
			// 
			resources->ApplyResources(this->button2_Add_clean, L"button2_Add_clean");
			this->button2_Add_clean->Name = L"button2_Add_clean";
			this->button2_Add_clean->UseVisualStyleBackColor = true;
			// 
			// button1_Add_addBoat
			// 
			resources->ApplyResources(this->button1_Add_addBoat, L"button1_Add_addBoat");
			this->button1_Add_addBoat->Name = L"button1_Add_addBoat";
			this->button1_Add_addBoat->UseVisualStyleBackColor = true;
			// 
			// numericUpDown2_Add_Speed
			// 
			resources->ApplyResources(this->numericUpDown2_Add_Speed, L"numericUpDown2_Add_Speed");
			this->numericUpDown2_Add_Speed->Name = L"numericUpDown2_Add_Speed";
			// 
			// numericUpDown1_Add_Capacity
			// 
			resources->ApplyResources(this->numericUpDown1_Add_Capacity, L"numericUpDown1_Add_Capacity");
			this->numericUpDown1_Add_Capacity->Name = L"numericUpDown1_Add_Capacity";
			// 
			// label3_Add_Speed
			// 
			resources->ApplyResources(this->label3_Add_Speed, L"label3_Add_Speed");
			this->label3_Add_Speed->Name = L"label3_Add_Speed";
			// 
			// comboBox1_Add_boatType
			// 
			resources->ApplyResources(this->comboBox1_Add_boatType, L"comboBox1_Add_boatType");
			this->comboBox1_Add_boatType->FormattingEnabled = true;
			this->comboBox1_Add_boatType->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				resources->GetString(L"comboBox1_Add_boatType.Items"),
					resources->GetString(L"comboBox1_Add_boatType.Items1"), resources->GetString(L"comboBox1_Add_boatType.Items2"), resources->GetString(L"comboBox1_Add_boatType.Items3"),
					resources->GetString(L"comboBox1_Add_boatType.Items4"), resources->GetString(L"comboBox1_Add_boatType.Items5")
			});
			this->comboBox1_Add_boatType->Name = L"comboBox1_Add_boatType";
			// 
			// label2_Add_Capacity
			// 
			resources->ApplyResources(this->label2_Add_Capacity, L"label2_Add_Capacity");
			this->label2_Add_Capacity->Name = L"label2_Add_Capacity";
			// 
			// label_Add_boatType
			// 
			resources->ApplyResources(this->label_Add_boatType, L"label_Add_boatType");
			this->label_Add_boatType->Name = L"label_Add_boatType";
			// 
			// tabPage2_Show
			// 
			resources->ApplyResources(this->tabPage2_Show, L"tabPage2_Show");
			this->tabPage2_Show->BackColor = System::Drawing::Color::LightGray;
			this->tabPage2_Show->Controls->Add(this->label2_Show_LastUpdatedStatus);
			this->tabPage2_Show->Controls->Add(this->label1_Show_BoatAmountStatus);
			this->tabPage2_Show->Controls->Add(this->dataGridView1);
			this->tabPage2_Show->Controls->Add(this->groupBox1_Show_Filters);
			this->tabPage2_Show->Name = L"tabPage2_Show";
			// 
			// label2_Show_LastUpdatedStatus
			// 
			resources->ApplyResources(this->label2_Show_LastUpdatedStatus, L"label2_Show_LastUpdatedStatus");
			this->label2_Show_LastUpdatedStatus->Name = L"label2_Show_LastUpdatedStatus";
			// 
			// label1_Show_BoatAmountStatus
			// 
			resources->ApplyResources(this->label1_Show_BoatAmountStatus, L"label1_Show_BoatAmountStatus");
			this->label1_Show_BoatAmountStatus->Name = L"label1_Show_BoatAmountStatus";
			// 
			// dataGridView1
			// 
			resources->ApplyResources(this->dataGridView1, L"dataGridView1");
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Type, this->Capacity,
					this->Speed
			});
			this->dataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView1->Name = L"dataGridView1";
			// 
			// Type
			// 
			resources->ApplyResources(this->Type, L"Type");
			this->Type->Name = L"Type";
			// 
			// Capacity
			// 
			resources->ApplyResources(this->Capacity, L"Capacity");
			this->Capacity->Name = L"Capacity";
			// 
			// Speed
			// 
			resources->ApplyResources(this->Speed, L"Speed");
			this->Speed->Name = L"Speed";
			// 
			// groupBox1_Show_Filters
			// 
			resources->ApplyResources(this->groupBox1_Show_Filters, L"groupBox1_Show_Filters");
			this->groupBox1_Show_Filters->Controls->Add(this->label1_Show_FoundNotes);
			this->groupBox1_Show_Filters->Controls->Add(this->checkBox2_Show_OnlySpacious);
			this->groupBox1_Show_Filters->Controls->Add(this->button1_Show_ShowAll);
			this->groupBox1_Show_Filters->Controls->Add(this->label3_Show_SearchByType);
			this->groupBox1_Show_Filters->Controls->Add(this->button2_Show_Search);
			this->groupBox1_Show_Filters->Controls->Add(this->comboBox1_Show_SearchByType);
			this->groupBox1_Show_Filters->Controls->Add(this->checkBox1_Show_OnlyFast);
			this->groupBox1_Show_Filters->Name = L"groupBox1_Show_Filters";
			this->groupBox1_Show_Filters->TabStop = false;
			// 
			// label1_Show_FoundNotes
			// 
			resources->ApplyResources(this->label1_Show_FoundNotes, L"label1_Show_FoundNotes");
			this->label1_Show_FoundNotes->Name = L"label1_Show_FoundNotes";
			// 
			// checkBox2_Show_OnlySpacious
			// 
			resources->ApplyResources(this->checkBox2_Show_OnlySpacious, L"checkBox2_Show_OnlySpacious");
			this->checkBox2_Show_OnlySpacious->Name = L"checkBox2_Show_OnlySpacious";
			this->checkBox2_Show_OnlySpacious->UseVisualStyleBackColor = true;
			// 
			// button1_Show_ShowAll
			// 
			resources->ApplyResources(this->button1_Show_ShowAll, L"button1_Show_ShowAll");
			this->button1_Show_ShowAll->Name = L"button1_Show_ShowAll";
			this->button1_Show_ShowAll->UseVisualStyleBackColor = true;
			// 
			// label3_Show_SearchByType
			// 
			resources->ApplyResources(this->label3_Show_SearchByType, L"label3_Show_SearchByType");
			this->label3_Show_SearchByType->Name = L"label3_Show_SearchByType";
			// 
			// button2_Show_Search
			// 
			resources->ApplyResources(this->button2_Show_Search, L"button2_Show_Search");
			this->button2_Show_Search->Name = L"button2_Show_Search";
			this->button2_Show_Search->UseVisualStyleBackColor = true;
			// 
			// comboBox1_Show_SearchByType
			// 
			resources->ApplyResources(this->comboBox1_Show_SearchByType, L"comboBox1_Show_SearchByType");
			this->comboBox1_Show_SearchByType->BackColor = System::Drawing::SystemColors::Window;
			this->comboBox1_Show_SearchByType->FormattingEnabled = true;
			this->comboBox1_Show_SearchByType->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				resources->GetString(L"comboBox1_Show_SearchByType.Items"),
					resources->GetString(L"comboBox1_Show_SearchByType.Items1"), resources->GetString(L"comboBox1_Show_SearchByType.Items2"), resources->GetString(L"comboBox1_Show_SearchByType.Items3"),
					resources->GetString(L"comboBox1_Show_SearchByType.Items4"), resources->GetString(L"comboBox1_Show_SearchByType.Items5")
			});
			this->comboBox1_Show_SearchByType->Name = L"comboBox1_Show_SearchByType";
			// 
			// checkBox1_Show_OnlyFast
			// 
			resources->ApplyResources(this->checkBox1_Show_OnlyFast, L"checkBox1_Show_OnlyFast");
			this->checkBox1_Show_OnlyFast->Name = L"checkBox1_Show_OnlyFast";
			this->checkBox1_Show_OnlyFast->UseVisualStyleBackColor = true;
			// 
			// tabPage3_Change
			// 
			resources->ApplyResources(this->tabPage3_Change, L"tabPage3_Change");
			this->tabPage3_Change->BackColor = System::Drawing::Color::LightGray;
			this->tabPage3_Change->Controls->Add(this->groupBox1_Change_DataChange);
			this->tabPage3_Change->Controls->Add(this->groupBox1_Change_EditBoatType);
			this->tabPage3_Change->Name = L"tabPage3_Change";
			// 
			// groupBox1_Change_DataChange
			// 
			resources->ApplyResources(this->groupBox1_Change_DataChange, L"groupBox1_Change_DataChange");
			this->groupBox1_Change_DataChange->Controls->Add(this->button1);
			this->groupBox1_Change_DataChange->Controls->Add(this->button1_Change_SaveAllChanges);
			this->groupBox1_Change_DataChange->Name = L"groupBox1_Change_DataChange";
			this->groupBox1_Change_DataChange->TabStop = false;
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button1_Change_SaveAllChanges
			// 
			resources->ApplyResources(this->button1_Change_SaveAllChanges, L"button1_Change_SaveAllChanges");
			this->button1_Change_SaveAllChanges->Name = L"button1_Change_SaveAllChanges";
			this->button1_Change_SaveAllChanges->UseVisualStyleBackColor = true;
			// 
			// groupBox1_Change_EditBoatType
			// 
			resources->ApplyResources(this->groupBox1_Change_EditBoatType, L"groupBox1_Change_EditBoatType");
			this->groupBox1_Change_EditBoatType->Controls->Add(this->dataGridView2_Change_BoatList);
			this->groupBox1_Change_EditBoatType->Name = L"groupBox1_Change_EditBoatType";
			this->groupBox1_Change_EditBoatType->TabStop = false;
			// 
			// dataGridView2_Change_BoatList
			// 
			resources->ApplyResources(this->dataGridView2_Change_BoatList, L"dataGridView2_Change_BoatList");
			this->dataGridView2_Change_BoatList->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView2_Change_BoatList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2_Change_BoatList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3
			});
			this->dataGridView2_Change_BoatList->Name = L"dataGridView2_Change_BoatList";
			// 
			// dataGridViewTextBoxColumn1
			// 
			resources->ApplyResources(this->dataGridViewTextBoxColumn1, L"dataGridViewTextBoxColumn1");
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// dataGridViewTextBoxColumn2
			// 
			resources->ApplyResources(this->dataGridViewTextBoxColumn2, L"dataGridViewTextBoxColumn2");
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// dataGridViewTextBoxColumn3
			// 
			resources->ApplyResources(this->dataGridViewTextBoxColumn3, L"dataGridViewTextBoxColumn3");
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			// 
			// tabPage4_Sort
			// 
			resources->ApplyResources(this->tabPage4_Sort, L"tabPage4_Sort");
			this->tabPage4_Sort->BackColor = System::Drawing::Color::LightGray;
			this->tabPage4_Sort->Controls->Add(this->dataGridView3_Sort_Result);
			this->tabPage4_Sort->Controls->Add(this->button2_Sort_ToSort);
			this->tabPage4_Sort->Controls->Add(this->groupBox2_Sort_WayToSort);
			this->tabPage4_Sort->Controls->Add(this->groupBox1_Sort_SortSettings);
			this->tabPage4_Sort->Name = L"tabPage4_Sort";
			// 
			// dataGridView3_Sort_Result
			// 
			resources->ApplyResources(this->dataGridView3_Sort_Result, L"dataGridView3_Sort_Result");
			this->dataGridView3_Sort_Result->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView3_Sort_Result->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3_Sort_Result->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Sort_Type,
					this->Sort_Capacity, this->Sort_Speed
			});
			this->dataGridView3_Sort_Result->Name = L"dataGridView3_Sort_Result";
			this->dataGridView3_Sort_Result->ReadOnly = true;
			// 
			// Sort_Type
			// 
			resources->ApplyResources(this->Sort_Type, L"Sort_Type");
			this->Sort_Type->Name = L"Sort_Type";
			this->Sort_Type->ReadOnly = true;
			// 
			// Sort_Capacity
			// 
			resources->ApplyResources(this->Sort_Capacity, L"Sort_Capacity");
			this->Sort_Capacity->Name = L"Sort_Capacity";
			this->Sort_Capacity->ReadOnly = true;
			// 
			// Sort_Speed
			// 
			resources->ApplyResources(this->Sort_Speed, L"Sort_Speed");
			this->Sort_Speed->Name = L"Sort_Speed";
			this->Sort_Speed->ReadOnly = true;
			// 
			// button2_Sort_ToSort
			// 
			resources->ApplyResources(this->button2_Sort_ToSort, L"button2_Sort_ToSort");
			this->button2_Sort_ToSort->Name = L"button2_Sort_ToSort";
			this->button2_Sort_ToSort->UseVisualStyleBackColor = true;
			// 
			// groupBox2_Sort_WayToSort
			// 
			resources->ApplyResources(this->groupBox2_Sort_WayToSort, L"groupBox2_Sort_WayToSort");
			this->groupBox2_Sort_WayToSort->Controls->Add(this->checkBox1_Sort_SaveSortedOrder);
			this->groupBox2_Sort_WayToSort->Controls->Add(this->radioButton2_Sort_ByDecline);
			this->groupBox2_Sort_WayToSort->Controls->Add(this->radioButton1_Sort_ByGrowth);
			this->groupBox2_Sort_WayToSort->Name = L"groupBox2_Sort_WayToSort";
			this->groupBox2_Sort_WayToSort->TabStop = false;
			// 
			// checkBox1_Sort_SaveSortedOrder
			// 
			resources->ApplyResources(this->checkBox1_Sort_SaveSortedOrder, L"checkBox1_Sort_SaveSortedOrder");
			this->checkBox1_Sort_SaveSortedOrder->Name = L"checkBox1_Sort_SaveSortedOrder";
			this->checkBox1_Sort_SaveSortedOrder->UseVisualStyleBackColor = true;
			// 
			// radioButton2_Sort_ByDecline
			// 
			resources->ApplyResources(this->radioButton2_Sort_ByDecline, L"radioButton2_Sort_ByDecline");
			this->radioButton2_Sort_ByDecline->Name = L"radioButton2_Sort_ByDecline";
			this->radioButton2_Sort_ByDecline->TabStop = true;
			this->radioButton2_Sort_ByDecline->UseVisualStyleBackColor = true;
			// 
			// radioButton1_Sort_ByGrowth
			// 
			resources->ApplyResources(this->radioButton1_Sort_ByGrowth, L"radioButton1_Sort_ByGrowth");
			this->radioButton1_Sort_ByGrowth->Name = L"radioButton1_Sort_ByGrowth";
			this->radioButton1_Sort_ByGrowth->TabStop = true;
			this->radioButton1_Sort_ByGrowth->UseVisualStyleBackColor = true;
			// 
			// groupBox1_Sort_SortSettings
			// 
			resources->ApplyResources(this->groupBox1_Sort_SortSettings, L"groupBox1_Sort_SortSettings");
			this->groupBox1_Sort_SortSettings->Controls->Add(this->radioButton4_Sort_BySpeed);
			this->groupBox1_Sort_SortSettings->Controls->Add(this->radioButton3);
			this->groupBox1_Sort_SortSettings->Controls->Add(this->radioButton2_Sort_ByCapacity);
			this->groupBox1_Sort_SortSettings->Controls->Add(this->radioButton1_Sort_ByType);
			this->groupBox1_Sort_SortSettings->Name = L"groupBox1_Sort_SortSettings";
			this->groupBox1_Sort_SortSettings->TabStop = false;
			// 
			// radioButton4_Sort_BySpeed
			// 
			resources->ApplyResources(this->radioButton4_Sort_BySpeed, L"radioButton4_Sort_BySpeed");
			this->radioButton4_Sort_BySpeed->Name = L"radioButton4_Sort_BySpeed";
			this->radioButton4_Sort_BySpeed->TabStop = true;
			this->radioButton4_Sort_BySpeed->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			resources->ApplyResources(this->radioButton3, L"radioButton3");
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->TabStop = true;
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2_Sort_ByCapacity
			// 
			resources->ApplyResources(this->radioButton2_Sort_ByCapacity, L"radioButton2_Sort_ByCapacity");
			this->radioButton2_Sort_ByCapacity->Name = L"radioButton2_Sort_ByCapacity";
			this->radioButton2_Sort_ByCapacity->TabStop = true;
			this->radioButton2_Sort_ByCapacity->UseVisualStyleBackColor = true;
			// 
			// radioButton1_Sort_ByType
			// 
			resources->ApplyResources(this->radioButton1_Sort_ByType, L"radioButton1_Sort_ByType");
			this->radioButton1_Sort_ByType->Name = L"radioButton1_Sort_ByType";
			this->radioButton1_Sort_ByType->TabStop = true;
			this->radioButton1_Sort_ByType->UseVisualStyleBackColor = true;
			// 
			// menuStrip1
			// 
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->BackColor = System::Drawing::Color::LightGray;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Name = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			resources->ApplyResources(this->fileToolStripMenuItem, L"fileToolStripMenuItem");
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->openToolStripMenuItem_Open,
					this->saveToolStripMenuItem_Save, this->exitToolStripMenuItem_Exit
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			// 
			// openToolStripMenuItem_Open
			// 
			resources->ApplyResources(this->openToolStripMenuItem_Open, L"openToolStripMenuItem_Open");
			this->openToolStripMenuItem_Open->Name = L"openToolStripMenuItem_Open";
			this->openToolStripMenuItem_Open->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Open_Click);
			// 
			// saveToolStripMenuItem_Save
			// 
			resources->ApplyResources(this->saveToolStripMenuItem_Save, L"saveToolStripMenuItem_Save");
			this->saveToolStripMenuItem_Save->Name = L"saveToolStripMenuItem_Save";
			this->saveToolStripMenuItem_Save->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Save_Click);
			// 
			// exitToolStripMenuItem_Exit
			// 
			resources->ApplyResources(this->exitToolStripMenuItem_Exit, L"exitToolStripMenuItem_Exit");
			this->exitToolStripMenuItem_Exit->Name = L"exitToolStripMenuItem_Exit";
			this->exitToolStripMenuItem_Exit->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Exit_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			resources->ApplyResources(this->openFileDialog1, L"openFileDialog1");
			// 
			// saveFileDialog1
			// 
			resources->ApplyResources(this->saveFileDialog1, L"saveFileDialog1");
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1_Add->ResumeLayout(false);
			this->tabPage1_Add->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2_Add_Speed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1_Add_Capacity))->EndInit();
			this->tabPage2_Show->ResumeLayout(false);
			this->tabPage2_Show->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1_Show_Filters->ResumeLayout(false);
			this->groupBox1_Show_Filters->PerformLayout();
			this->tabPage3_Change->ResumeLayout(false);
			this->groupBox1_Change_DataChange->ResumeLayout(false);
			this->groupBox1_Change_EditBoatType->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2_Change_BoatList))->EndInit();
			this->tabPage4_Sort->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3_Sort_Result))->EndInit();
			this->groupBox2_Sort_WayToSort->ResumeLayout(false);
			this->groupBox2_Sort_WayToSort->PerformLayout();
			this->groupBox1_Sort_SortSettings->ResumeLayout(false);
			this->groupBox1_Sort_SortSettings->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// Структура для катера
		ref struct Kater
		{
			String^ Type;
			int Capacity;
			double Speed;
		};

private:
	// Список катерів
	List<Kater^>^ katers = gcnew List<Kater^>();

	// Максимальна кількість катерів для прогрес-бару
	const int MAX_BOATS = 50;

	// Прапорець для відстеження змін
	bool hasUnsavedChanges = false;

		// Оновлення всіх таблиць
		void UpdateAllDataGridViews()
		{
			dataGridView1->Rows->Clear();
			dataGridView2_Change_BoatList->Rows->Clear();
			dataGridView3_Sort_Result->Rows->Clear();

			for each(Kater ^ kater in katers)
			{
				array<Object^>^ row = gcnew array<Object^>{
					kater->Type,
					kater->Capacity,
					kater->Speed
				};

				dataGridView1->Rows->Add(row);
				dataGridView2_Change_BoatList->Rows->Add(row);
				dataGridView3_Sort_Result->Rows->Add(row);
			}
		}

		// Оновлення прогрес-бару
		void UpdateProgressBar()
		{
			int count = katers->Count;
			progressBar1_Add_capacity->Value = Math::Min(count, MAX_BOATS);
			label4_Add_progressCapacity->Text = String::Format("Заповнено: {0}/{1}", count, MAX_BOATS);
		}

		// Оновлення статусів
		void UpdateStatusLabels()
		{
			label1_Show_BoatAmountStatus->Text = String::Format("Всього катерів: {0}", katers->Count);
			label2_Show_LastUpdatedStatus->Text = String::Format("Оновлено: {0}", DateTime::Now.ToString("HH:mm"));
		}

		// Оновлення всього UI
		void UpdateAllUI()
		{
			UpdateAllDataGridViews();
			UpdateProgressBar();
			UpdateStatusLabels();
		}



		// Кнопка Додати катер
private: System::Void button1_Add_addBoat_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		// Перевірка заповнення полів
		if (String::IsNullOrWhiteSpace(comboBox1_Add_boatType->Text))
		{
			MessageBox::Show("Оберіть тип катера!", "Помилка",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (katers->Count >= MAX_BOATS)
		{
			MessageBox::Show("Досягнуто максимум катерів (50)!", "Помилка",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// Створення нового катера
		Kater^ newKater = gcnew Kater();
		newKater->Type = comboBox1_Add_boatType->Text;
		newKater->Capacity = (int)numericUpDown1_Add_Capacity->Value;
		newKater->Speed = (double)numericUpDown2_Add_Speed->Value;

		katers->Add(newKater);
		hasUnsavedChanges = true;

		UpdateAllUI();

		// Очищення полів
		comboBox1_Add_boatType->Text = "";
		numericUpDown1_Add_Capacity->Value = 10;
		numericUpDown2_Add_Speed->Value = 50;

		MessageBox::Show("Катер успішно додано!", "Успіх",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Помилка: " + ex->Message, "Помилка",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

	   // Кнопка Очистити
private: System::Void button2_Add_clean_Click(System::Object^ sender, System::EventArgs^ e)
{
	comboBox1_Add_boatType->Text = "";
	numericUpDown1_Add_Capacity->Value = 10;
	numericUpDown2_Add_Speed->Value = 50;
}


	   // Кнопка Шукати
private: System::Void button2_Show_Search_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ searchType = comboBox1_Show_SearchByType->Text->Trim();
	bool onlyFast = checkBox1_Show_OnlyFast->Checked;
	bool onlySpacious = checkBox2_Show_OnlySpacious->Checked;

	dataGridView1->Rows->Clear();
	int foundCount = 0;

	for each(Kater ^ kater in katers)
	{
		bool matches = true;

		// Фільтр за типом
		if (!String::IsNullOrWhiteSpace(searchType))
		{
			if (!kater->Type->ToLower()->Contains(searchType->ToLower()))
				matches = false;
		}

		// Фільтр за швидкістю
		if (onlyFast && kater->Speed <= 50)
		{
			matches = false;
		}

		// Фільтр за місткістю
		if (onlySpacious && kater->Capacity <= 10)
		{
			matches = false;
		}

		if (matches)
		{
			dataGridView1->Rows->Add(kater->Type, kater->Capacity, kater->Speed);
			foundCount++;
		}
	}

	label1_Show_FoundNotes->Text = String::Format("Знайдено: {0}", foundCount);
}

	   // Кнопка Показати всі
private: System::Void button1_Show_ShowAll_Click(System::Object^ sender, System::EventArgs^ e)
{
	dataGridView1->Rows->Clear();

	for each(Kater ^ kater in katers)
	{
		dataGridView1->Rows->Add(kater->Type, kater->Capacity, kater->Speed);
	}

	label1_Show_FoundNotes->Text = String::Format("Знайдено: {0}", katers->Count);

	// Скидання фільтрів
	comboBox1_Show_SearchByType->Text = "";
	checkBox1_Show_OnlyFast->Checked = false;
	checkBox2_Show_OnlySpacious->Checked = false;
}


	   // редагування в таблиці
private: System::Void dataGridView2_Change_BoatList_CellEndEdit(System::Object^ sender, DataGridViewCellEventArgs^ e)
{
	try
	{
		int rowIndex = e->RowIndex;
		int colIndex = e->ColumnIndex;

		if (rowIndex >= 0 && rowIndex < katers->Count)
		{
			DataGridViewRow^ row = dataGridView2_Change_BoatList->Rows[rowIndex];

			// Оновлюємо дані катера
			if (colIndex == 0) // Тип
			{
				katers[rowIndex]->Type = row->Cells[0]->Value->ToString();
			}
			else if (colIndex == 1) // Місткість
			{
				katers[rowIndex]->Capacity = Int32::Parse(row->Cells[1]->Value->ToString());
			}
			else if (colIndex == 2) // Швидкість
			{
				katers[rowIndex]->Speed = Double::Parse(row->Cells[2]->Value->ToString());
			}

			hasUnsavedChanges = true;
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Помилка: " + ex->Message + "\nВведіть коректні дані!",
			"Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		UpdateAllDataGridViews();
	}
}

	   // Кнопка Зберегти всі зміни
private: System::Void button1_Change_SaveAllChanges_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!hasUnsavedChanges)
	{
		MessageBox::Show("Немає незбережених змін!", "Інфо",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}

	UpdateAllUI();
	hasUnsavedChanges = false;

	MessageBox::Show("Всі зміни збережено!", "Успіх",
		MessageBoxButtons::OK, MessageBoxIcon::Information);
}

	   // Кнопка Видалити вибраний
private: System::Void button1_Change_Delete_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView2_Change_BoatList->SelectedRows->Count > 0)
	{
		auto result = MessageBox::Show(
			"Ви впевнені, що хочете видалити цей катер?",
			"Підтвердження",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Question);

		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			int index = dataGridView2_Change_BoatList->SelectedRows[0]->Index;
			katers->RemoveAt(index);
			UpdateAllUI();
			hasUnsavedChanges = true;

			MessageBox::Show("Катер видалено!", "Успіх",
				MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	else
	{
		MessageBox::Show("Виберіть катер для видалення!", "Помилка",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}


	   // Кнопка Сортувати
private: System::Void button2_Sort_ToSort_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (katers->Count == 0)
	{
		MessageBox::Show("Немає даних для сортування!", "Помилка",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// критерій сортування
	int sortBy = 0; // 0-тип, 1-місткість, 2-швидкість
	if (radioButton2_Sort_ByCapacity->Checked) sortBy = 1;
	else if (radioButton4_Sort_BySpeed->Checked) sortBy = 2;

	// напрямок
	bool ascending = radioButton1_Sort_ByGrowth->Checked;

	if (!radioButton1_Sort_ByGrowth->Checked && !radioButton2_Sort_ByDecline->Checked)
	{
		MessageBox::Show("Виберіть напрямок сортування!", "Помилка",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// Копіюємо список
	List<Kater^>^ sortedList = gcnew List<Kater^>(katers);

	// Bubble Sort
	for (int i = 0; i < sortedList->Count - 1; i++)
	{
		for (int j = 0; j < sortedList->Count - i - 1; j++)
		{
			bool needSwap = false;

			if (sortBy == 0) // За типом
			{
				int comparison = String::Compare(sortedList[j]->Type, sortedList[j + 1]->Type);
				needSwap = ascending ? (comparison > 0) : (comparison < 0);
			}
			else if (sortBy == 1) // За місткістю
			{
				needSwap = ascending ?
					(sortedList[j]->Capacity > sortedList[j + 1]->Capacity) :
					(sortedList[j]->Capacity < sortedList[j + 1]->Capacity);
			}
			else if (sortBy == 2) // За швидкістю
			{
				needSwap = ascending ?
					(sortedList[j]->Speed > sortedList[j + 1]->Speed) :
					(sortedList[j]->Speed < sortedList[j + 1]->Speed);
			}

			if (needSwap)
			{
				Kater^ temp = sortedList[j];
				sortedList[j] = sortedList[j + 1];
				sortedList[j + 1] = temp;
			}
		}
	}

	// Відображення результату
	dataGridView3_Sort_Result->Rows->Clear();
	for each(Kater ^ kater in sortedList)
	{
		dataGridView3_Sort_Result->Rows->Add(kater->Type, kater->Capacity, kater->Speed);
	}

	// Якщо потрібно зберегти порядок
	if (checkBox1_Sort_SaveSortedOrder->Checked)
	{
		katers = sortedList;
		UpdateAllUI();
		MessageBox::Show("Порядок збережено у базі!", "Успіх",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}


	   // Відкрити файл
private: System::Void openToolStripMenuItem_Open_Click(System::Object^ sender, System::EventArgs^ e)
{
	OpenFileDialog^ openDialog = gcnew OpenFileDialog();
	openDialog->Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";
	openDialog->Title = "Відкрити файл з даними";

	if (openDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try
		{
			katers->Clear();
			StreamReader^ reader = gcnew StreamReader(openDialog->FileName, System::Text::Encoding::UTF8);
			String^ line;

			while ((line = reader->ReadLine()) != nullptr)
			{
				array<String^>^ parts = line->Split('|');

				if (parts->Length == 3)
				{
					Kater^ kater = gcnew Kater();
					kater->Type = parts[0];
					kater->Capacity = Int32::Parse(parts[1]);
					kater->Speed = Double::Parse(parts[2]);
					katers->Add(kater);
				}
			}

			reader->Close();
			UpdateAllUI();
			hasUnsavedChanges = false;

			MessageBox::Show("Дані завантажено!\nКатерів: " + katers->Count, "Успіх",
				MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Помилка завантаження: " + ex->Message, "Помилка",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}

	   // Зберегти у файл
private: System::Void saveToolStripMenuItem_Save_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (katers->Count == 0)
	{
		MessageBox::Show("Немає даних для збереження!", "Помилка",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	SaveFileDialog^ saveDialog = gcnew SaveFileDialog();
	saveDialog->Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";
	saveDialog->Title = "Зберегти дані про катери";
	saveDialog->FileName = "boats_data.txt";

	if (saveDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try
		{
			StreamWriter^ writer = gcnew StreamWriter(saveDialog->FileName, false, System::Text::Encoding::UTF8);

			for each(Kater ^ kater in katers)
			{
				writer->WriteLine(kater->Type + "|" + kater->Capacity + "|" + kater->Speed);
			}

			writer->Close();
			hasUnsavedChanges = false;

			MessageBox::Show("Дані збережено!\nФайл: " + saveDialog->FileName, "Успіх",
				MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Помилка збереження: " + ex->Message, "Помилка",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}

	   // Вийти
private: System::Void exitToolStripMenuItem_Exit_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (hasUnsavedChanges)
	{
		auto result = MessageBox::Show(
			"Є незбережені зміни! Все одно вийти?",
			"Підтвердження",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Question);

		if (result == System::Windows::Forms::DialogResult::No)
			return;
	}

	Application::Exit();
}
};
}
