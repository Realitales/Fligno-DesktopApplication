#pragma once

namespace ITCfinals {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;



	/// <summary>
	/// Summary for WorkerEmployeeForm
	/// </summary>
	public ref class WorkerEmployeeForm : public System::Windows::Forms::Form
	{

		String^ usernameinput;
	public:
		WorkerEmployeeForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		WorkerEmployeeForm(String^ username)
		{
			InitializeComponent();
			usernameinput = username;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~WorkerEmployeeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Fullnamelbl;
	private: System::Windows::Forms::Label^ departmentlbl;
	private: System::Windows::Forms::Label^ salarylbl;
	private: System::Windows::Forms::Label^ contactlbl;
	private: System::Windows::Forms::Label^ workeridlbl;
	private: System::Windows::Forms::Label^ departmentheaderlbl;
	private: System::Windows::Forms::Label^ Salaryheaderlbl;
	private: System::Windows::Forms::Label^ contactheaderlbl;
	private: System::Windows::Forms::Button^ logoutbtn;
	private: System::Windows::Forms::Label^ Headerlbl;
	private: System::Windows::Forms::Label^ datehiredlbl;
	private: System::Windows::Forms::Label^ datehiredheaderlbl;
	private: System::Windows::Forms::Label^ dtrlbl;
	private: System::Windows::Forms::Label^ currentdtheaderlbl;
	private: System::Windows::Forms::Label^ currentdatetimelbl;
	private: System::Windows::Forms::Timer^ currentdatetimetimer;
	private: System::Windows::Forms::Button^ timeinbtn;
	private: System::Windows::Forms::Button^ timeoutbtn;
	private: System::Windows::Forms::DataGridView^ datetimedb;
	private: System::Windows::Forms::Label^ dateheaderlbl;
	private: System::Windows::Forms::Label^ timeinheaderlbl;
	private: System::Windows::Forms::Label^ timeoutheaderlbl;



	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Label^ gdheader;


	protected:

	protected:

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(WorkerEmployeeForm::typeid));
			this->Fullnamelbl = (gcnew System::Windows::Forms::Label());
			this->departmentlbl = (gcnew System::Windows::Forms::Label());
			this->salarylbl = (gcnew System::Windows::Forms::Label());
			this->contactlbl = (gcnew System::Windows::Forms::Label());
			this->workeridlbl = (gcnew System::Windows::Forms::Label());
			this->departmentheaderlbl = (gcnew System::Windows::Forms::Label());
			this->Salaryheaderlbl = (gcnew System::Windows::Forms::Label());
			this->contactheaderlbl = (gcnew System::Windows::Forms::Label());
			this->logoutbtn = (gcnew System::Windows::Forms::Button());
			this->Headerlbl = (gcnew System::Windows::Forms::Label());
			this->datehiredlbl = (gcnew System::Windows::Forms::Label());
			this->datehiredheaderlbl = (gcnew System::Windows::Forms::Label());
			this->dtrlbl = (gcnew System::Windows::Forms::Label());
			this->currentdtheaderlbl = (gcnew System::Windows::Forms::Label());
			this->currentdatetimelbl = (gcnew System::Windows::Forms::Label());
			this->currentdatetimetimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->timeinbtn = (gcnew System::Windows::Forms::Button());
			this->timeoutbtn = (gcnew System::Windows::Forms::Button());
			this->datetimedb = (gcnew System::Windows::Forms::DataGridView());
			this->dateheaderlbl = (gcnew System::Windows::Forms::Label());
			this->timeinheaderlbl = (gcnew System::Windows::Forms::Label());
			this->timeoutheaderlbl = (gcnew System::Windows::Forms::Label());
			this->gdheader = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datetimedb))->BeginInit();
			this->SuspendLayout();
			// 
			// Fullnamelbl
			// 
			this->Fullnamelbl->AutoSize = true;
			this->Fullnamelbl->BackColor = System::Drawing::Color::Transparent;
			this->Fullnamelbl->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Fullnamelbl->ForeColor = System::Drawing::Color::Black;
			this->Fullnamelbl->Location = System::Drawing::Point(225, 158);
			this->Fullnamelbl->Name = L"Fullnamelbl";
			this->Fullnamelbl->Size = System::Drawing::Size(132, 32);
			this->Fullnamelbl->TabIndex = 0;
			this->Fullnamelbl->Text = L"Fullname";
			// 
			// departmentlbl
			// 
			this->departmentlbl->AutoSize = true;
			this->departmentlbl->BackColor = System::Drawing::Color::Transparent;
			this->departmentlbl->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->departmentlbl->ForeColor = System::Drawing::Color::Black;
			this->departmentlbl->Location = System::Drawing::Point(739, 175);
			this->departmentlbl->Name = L"departmentlbl";
			this->departmentlbl->Size = System::Drawing::Size(130, 24);
			this->departmentlbl->TabIndex = 1;
			this->departmentlbl->Text = L"Department";
			// 
			// salarylbl
			// 
			this->salarylbl->AutoSize = true;
			this->salarylbl->BackColor = System::Drawing::Color::Transparent;
			this->salarylbl->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->salarylbl->ForeColor = System::Drawing::Color::Black;
			this->salarylbl->Location = System::Drawing::Point(739, 281);
			this->salarylbl->Name = L"salarylbl";
			this->salarylbl->Size = System::Drawing::Size(74, 24);
			this->salarylbl->TabIndex = 2;
			this->salarylbl->Text = L"Salary";
			// 
			// contactlbl
			// 
			this->contactlbl->AutoSize = true;
			this->contactlbl->BackColor = System::Drawing::Color::Transparent;
			this->contactlbl->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contactlbl->ForeColor = System::Drawing::Color::Black;
			this->contactlbl->Location = System::Drawing::Point(227, 269);
			this->contactlbl->Name = L"contactlbl";
			this->contactlbl->Size = System::Drawing::Size(90, 24);
			this->contactlbl->TabIndex = 3;
			this->contactlbl->Text = L"Contact";
			// 
			// workeridlbl
			// 
			this->workeridlbl->AutoSize = true;
			this->workeridlbl->BackColor = System::Drawing::Color::Transparent;
			this->workeridlbl->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->workeridlbl->ForeColor = System::Drawing::Color::Black;
			this->workeridlbl->Location = System::Drawing::Point(227, 191);
			this->workeridlbl->Name = L"workeridlbl";
			this->workeridlbl->Size = System::Drawing::Size(102, 22);
			this->workeridlbl->TabIndex = 4;
			this->workeridlbl->Text = L"Worker ID";
			// 
			// departmentheaderlbl
			// 
			this->departmentheaderlbl->AutoSize = true;
			this->departmentheaderlbl->BackColor = System::Drawing::Color::Transparent;
			this->departmentheaderlbl->Font = (gcnew System::Drawing::Font(L"Agency FB", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->departmentheaderlbl->ForeColor = System::Drawing::Color::Silver;
			this->departmentheaderlbl->Location = System::Drawing::Point(739, 149);
			this->departmentheaderlbl->Name = L"departmentheaderlbl";
			this->departmentheaderlbl->Size = System::Drawing::Size(76, 24);
			this->departmentheaderlbl->TabIndex = 5;
			this->departmentheaderlbl->Text = L"Department";
			// 
			// Salaryheaderlbl
			// 
			this->Salaryheaderlbl->AutoSize = true;
			this->Salaryheaderlbl->BackColor = System::Drawing::Color::Transparent;
			this->Salaryheaderlbl->Font = (gcnew System::Drawing::Font(L"Agency FB", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Salaryheaderlbl->ForeColor = System::Drawing::Color::Silver;
			this->Salaryheaderlbl->Location = System::Drawing::Point(739, 257);
			this->Salaryheaderlbl->Name = L"Salaryheaderlbl";
			this->Salaryheaderlbl->Size = System::Drawing::Size(100, 24);
			this->Salaryheaderlbl->TabIndex = 6;
			this->Salaryheaderlbl->Text = L"Monthly Income";
			// 
			// contactheaderlbl
			// 
			this->contactheaderlbl->AutoSize = true;
			this->contactheaderlbl->BackColor = System::Drawing::Color::Transparent;
			this->contactheaderlbl->Font = (gcnew System::Drawing::Font(L"Agency FB", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contactheaderlbl->ForeColor = System::Drawing::Color::Silver;
			this->contactheaderlbl->Location = System::Drawing::Point(229, 245);
			this->contactheaderlbl->Name = L"contactheaderlbl";
			this->contactheaderlbl->Size = System::Drawing::Size(59, 24);
			this->contactheaderlbl->TabIndex = 7;
			this->contactheaderlbl->Text = L"Contacts";
			// 
			// logoutbtn
			// 
			this->logoutbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->logoutbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->logoutbtn->FlatAppearance->BorderSize = 0;
			this->logoutbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->logoutbtn->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logoutbtn->ForeColor = System::Drawing::Color::White;
			this->logoutbtn->Location = System::Drawing::Point(233, 712);
			this->logoutbtn->Name = L"logoutbtn";
			this->logoutbtn->Size = System::Drawing::Size(151, 31);
			this->logoutbtn->TabIndex = 8;
			this->logoutbtn->Text = L"Log out";
			this->logoutbtn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->logoutbtn->UseVisualStyleBackColor = false;
			this->logoutbtn->Click += gcnew System::EventHandler(this, &WorkerEmployeeForm::logoutbtn_Click);
			this->logoutbtn->MouseEnter += gcnew System::EventHandler(this, &WorkerEmployeeForm::logoutbtn_hover);
			this->logoutbtn->MouseLeave += gcnew System::EventHandler(this, &WorkerEmployeeForm::logoutbtn_hoverout);
			// 
			// Headerlbl
			// 
			this->Headerlbl->AutoSize = true;
			this->Headerlbl->BackColor = System::Drawing::Color::Transparent;
			this->Headerlbl->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Headerlbl->ForeColor = System::Drawing::Color::Transparent;
			this->Headerlbl->Location = System::Drawing::Point(34, 45);
			this->Headerlbl->Name = L"Headerlbl";
			this->Headerlbl->Size = System::Drawing::Size(424, 57);
			this->Headerlbl->TabIndex = 9;
			this->Headerlbl->Text = L"EMPLOYEE PROFILE";
			// 
			// datehiredlbl
			// 
			this->datehiredlbl->AutoSize = true;
			this->datehiredlbl->BackColor = System::Drawing::Color::Transparent;
			this->datehiredlbl->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->datehiredlbl->Location = System::Drawing::Point(739, 229);
			this->datehiredlbl->Name = L"datehiredlbl";
			this->datehiredlbl->Size = System::Drawing::Size(98, 22);
			this->datehiredlbl->TabIndex = 10;
			this->datehiredlbl->Text = L"datehired";
			// 
			// datehiredheaderlbl
			// 
			this->datehiredheaderlbl->AutoSize = true;
			this->datehiredheaderlbl->BackColor = System::Drawing::Color::Transparent;
			this->datehiredheaderlbl->Font = (gcnew System::Drawing::Font(L"Agency FB", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->datehiredheaderlbl->ForeColor = System::Drawing::Color::Silver;
			this->datehiredheaderlbl->Location = System::Drawing::Point(739, 205);
			this->datehiredheaderlbl->Name = L"datehiredheaderlbl";
			this->datehiredheaderlbl->Size = System::Drawing::Size(69, 24);
			this->datehiredheaderlbl->TabIndex = 11;
			this->datehiredheaderlbl->Text = L"Date hired";
			// 
			// dtrlbl
			// 
			this->dtrlbl->AutoSize = true;
			this->dtrlbl->BackColor = System::Drawing::Color::Transparent;
			this->dtrlbl->Font = (gcnew System::Drawing::Font(L"Arial", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtrlbl->Location = System::Drawing::Point(58, 345);
			this->dtrlbl->Name = L"dtrlbl";
			this->dtrlbl->Size = System::Drawing::Size(131, 60);
			this->dtrlbl->TabIndex = 12;
			this->dtrlbl->Text = L"DTR";
			// 
			// currentdtheaderlbl
			// 
			this->currentdtheaderlbl->AutoSize = true;
			this->currentdtheaderlbl->BackColor = System::Drawing::Color::Transparent;
			this->currentdtheaderlbl->Font = (gcnew System::Drawing::Font(L"Agency FB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->currentdtheaderlbl->ForeColor = System::Drawing::Color::Silver;
			this->currentdtheaderlbl->Location = System::Drawing::Point(175, 353);
			this->currentdtheaderlbl->Name = L"currentdtheaderlbl";
			this->currentdtheaderlbl->Size = System::Drawing::Size(104, 20);
			this->currentdtheaderlbl->TabIndex = 13;
			this->currentdtheaderlbl->Text = L"Current Date/Time";
			// 
			// currentdatetimelbl
			// 
			this->currentdatetimelbl->AutoSize = true;
			this->currentdatetimelbl->BackColor = System::Drawing::Color::Transparent;
			this->currentdatetimelbl->Font = (gcnew System::Drawing::Font(L"Agency FB", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->currentdatetimelbl->Location = System::Drawing::Point(173, 368);
			this->currentdatetimelbl->Name = L"currentdatetimelbl";
			this->currentdatetimelbl->Size = System::Drawing::Size(159, 31);
			this->currentdatetimelbl->TabIndex = 14;
			this->currentdatetimelbl->Text = L"Current Date/Time";
			// 
			// currentdatetimetimer
			// 
			this->currentdatetimetimer->Enabled = true;
			this->currentdatetimetimer->Tick += gcnew System::EventHandler(this, &WorkerEmployeeForm::currentdatetimetimer_Tick);
			// 
			// timeinbtn
			// 
			this->timeinbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->timeinbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->timeinbtn->FlatAppearance->BorderSize = 0;
			this->timeinbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->timeinbtn->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->timeinbtn->ForeColor = System::Drawing::Color::White;
			this->timeinbtn->Location = System::Drawing::Point(534, 353);
			this->timeinbtn->Name = L"timeinbtn";
			this->timeinbtn->Size = System::Drawing::Size(214, 45);
			this->timeinbtn->TabIndex = 15;
			this->timeinbtn->Text = L"TIME IN";
			this->timeinbtn->UseVisualStyleBackColor = false;
			this->timeinbtn->Click += gcnew System::EventHandler(this, &WorkerEmployeeForm::timeinbtn_Click);
			// 
			// timeoutbtn
			// 
			this->timeoutbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->timeoutbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->timeoutbtn->FlatAppearance->BorderSize = 0;
			this->timeoutbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->timeoutbtn->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->timeoutbtn->ForeColor = System::Drawing::Color::White;
			this->timeoutbtn->Location = System::Drawing::Point(761, 352);
			this->timeoutbtn->Name = L"timeoutbtn";
			this->timeoutbtn->Size = System::Drawing::Size(218, 46);
			this->timeoutbtn->TabIndex = 16;
			this->timeoutbtn->Text = L"TIME OUT";
			this->timeoutbtn->UseVisualStyleBackColor = false;
			this->timeoutbtn->Click += gcnew System::EventHandler(this, &WorkerEmployeeForm::timeoutbtn_Click);
			// 
			// datetimedb
			// 
			this->datetimedb->AllowUserToAddRows = false;
			this->datetimedb->AllowUserToDeleteRows = false;
			this->datetimedb->AllowUserToResizeColumns = false;
			this->datetimedb->AllowUserToResizeRows = false;
			this->datetimedb->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->datetimedb->BackgroundColor = System::Drawing::Color::White;
			this->datetimedb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->datetimedb->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->datetimedb->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->datetimedb->ColumnHeadersVisible = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Agency FB", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->datetimedb->DefaultCellStyle = dataGridViewCellStyle1;
			this->datetimedb->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->datetimedb->EnableHeadersVisualStyles = false;
			this->datetimedb->GridColor = System::Drawing::Color::White;
			this->datetimedb->Location = System::Drawing::Point(534, 442);
			this->datetimedb->Name = L"datetimedb";
			this->datetimedb->RowHeadersVisible = false;
			this->datetimedb->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToDisplayedHeaders;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->datetimedb->RowsDefaultCellStyle = dataGridViewCellStyle2;
			this->datetimedb->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->datetimedb->Size = System::Drawing::Size(445, 223);
			this->datetimedb->TabIndex = 17;
			// 
			// dateheaderlbl
			// 
			this->dateheaderlbl->AutoSize = true;
			this->dateheaderlbl->BackColor = System::Drawing::Color::Transparent;
			this->dateheaderlbl->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateheaderlbl->ForeColor = System::Drawing::Color::White;
			this->dateheaderlbl->Location = System::Drawing::Point(573, 414);
			this->dateheaderlbl->Name = L"dateheaderlbl";
			this->dateheaderlbl->Size = System::Drawing::Size(53, 22);
			this->dateheaderlbl->TabIndex = 18;
			this->dateheaderlbl->Text = L"Date";
			this->dateheaderlbl->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// timeinheaderlbl
			// 
			this->timeinheaderlbl->AutoSize = true;
			this->timeinheaderlbl->BackColor = System::Drawing::Color::Transparent;
			this->timeinheaderlbl->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->timeinheaderlbl->ForeColor = System::Drawing::Color::White;
			this->timeinheaderlbl->Location = System::Drawing::Point(680, 414);
			this->timeinheaderlbl->Name = L"timeinheaderlbl";
			this->timeinheaderlbl->Size = System::Drawing::Size(76, 22);
			this->timeinheaderlbl->TabIndex = 19;
			this->timeinheaderlbl->Text = L"Time in";
			this->timeinheaderlbl->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// timeoutheaderlbl
			// 
			this->timeoutheaderlbl->AutoSize = true;
			this->timeoutheaderlbl->BackColor = System::Drawing::Color::Transparent;
			this->timeoutheaderlbl->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->timeoutheaderlbl->ForeColor = System::Drawing::Color::White;
			this->timeoutheaderlbl->Location = System::Drawing::Point(828, 414);
			this->timeoutheaderlbl->Name = L"timeoutheaderlbl";
			this->timeoutheaderlbl->Size = System::Drawing::Size(89, 22);
			this->timeoutheaderlbl->TabIndex = 20;
			this->timeoutheaderlbl->Text = L"Time out";
			this->timeoutheaderlbl->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// gdheader
			// 
			this->gdheader->AutoSize = true;
			this->gdheader->BackColor = System::Drawing::Color::Transparent;
			this->gdheader->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gdheader->Location = System::Drawing::Point(146, 441);
			this->gdheader->Name = L"gdheader";
			this->gdheader->Size = System::Drawing::Size(133, 28);
			this->gdheader->TabIndex = 21;
			this->gdheader->Text = L"Good Day!";
			// 
			// WorkerEmployeeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1024, 768);
			this->Controls->Add(this->gdheader);
			this->Controls->Add(this->timeoutheaderlbl);
			this->Controls->Add(this->timeinheaderlbl);
			this->Controls->Add(this->dateheaderlbl);
			this->Controls->Add(this->datetimedb);
			this->Controls->Add(this->timeoutbtn);
			this->Controls->Add(this->timeinbtn);
			this->Controls->Add(this->currentdatetimelbl);
			this->Controls->Add(this->currentdtheaderlbl);
			this->Controls->Add(this->dtrlbl);
			this->Controls->Add(this->datehiredheaderlbl);
			this->Controls->Add(this->datehiredlbl);
			this->Controls->Add(this->Headerlbl);
			this->Controls->Add(this->logoutbtn);
			this->Controls->Add(this->contactheaderlbl);
			this->Controls->Add(this->Salaryheaderlbl);
			this->Controls->Add(this->departmentheaderlbl);
			this->Controls->Add(this->workeridlbl);
			this->Controls->Add(this->contactlbl);
			this->Controls->Add(this->salarylbl);
			this->Controls->Add(this->departmentlbl);
			this->Controls->Add(this->Fullnamelbl);
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"WorkerEmployeeForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"WorkerEmployeeForm";
			this->Load += gcnew System::EventHandler(this, &WorkerEmployeeForm::WorkerEmployeeForm_load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datetimedb))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Global Variables so that datas can be pass from one class to another.
	String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=syscommdb;Allow Zero Datetime=True";//Connection Key to our database
	String^ fullname;
	String^ department;
	String^ salary;
	String^ contact;
	String^ workerid;
	String^ datehired;
	String^ username;


	private: System::Void currentdatetimetimer_Tick(System::Object^ sender, System::EventArgs^ e) {

		DateTime cdt = DateTime::Now;
		String^ currentdatetime = cdt.ToString("MMM d, yyyy / h:mm:ss tt");
		currentdatetimelbl->Text = currentdatetime;

	}
    //Loads the employee profile with its data
	private: System::Void WorkerEmployeeForm_load(System::Object^ sender, System::EventArgs^ e) {


			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlCommand^ cmdget = gcnew MySqlCommand("select * from syscommtable where firstname = '" + usernameinput + "'", con);
			con->Open();
			MySqlDataReader^ runcmdget;
			runcmdget = cmdget->ExecuteReader();

			while (runcmdget->Read()) {


				fullname = runcmdget["fullname"]->ToString();
				department = runcmdget["department"]->ToString();
				salary = runcmdget["salary"]->ToString();
				contact = runcmdget["contact"]->ToString();
				workerid = runcmdget["password"]->ToString();
				datehired = runcmdget["datehired"]->ToString();

			}
			con->Close();

			double salarycurrency;
			salarycurrency = Convert::ToDouble(salary);

			Fullnamelbl->Text = fullname;
			departmentlbl->Text = department;
			salarylbl->Text = String::Format("Php {0:N}", salarycurrency);
			contactlbl->Text = contact;
			workeridlbl->Text = workerid;
			datehiredlbl->Text = datehired;
			

	}
    //Time in Button function
    private: System::Void timeinbtn_Click(System::Object^ sender, System::EventArgs^ e) {


		DateTime currentdate = DateTime::Now;//Gets your system current date
		String^ cdt = currentdate.ToString("MM - dd - yyyy");//Converts into string with my custom data format.

		
		DateTime currentdatetimein = DateTime::Now;//Gets your system current time
		String^ cdtin = currentdatetimein.ToString("h:mm tt");//Converts into string with my custom data format.

		
		try {
			MySqlConnection^ conusertable = gcnew MySqlConnection(constr);//Establishes a connection to this user's table
			MySqlCommand^ inserttimeindata = gcnew MySqlCommand("insert into " + workerid + " values('" + cdt + "', '" + cdtin + "', ' ')", conusertable);//Creates an SQL command that will insert our current date and time in to this user's table.
			MySqlDataReader^ itd;//Creates an datareader for execution of the MySql Command.
			conusertable->Open();//Opens Our database
			itd = inserttimeindata->ExecuteReader();//Runs our command using datareader to retrieve data
			conusertable->Close();//Closes Connection after inserting your current date and time in.

			//Displays the user's table of date time in and time out
			MySqlCommand^ updatedatagridview = gcnew MySqlCommand("select * from " + workerid + "", conusertable);
			conusertable->Open();
			MySqlDataReader^ updatedatetimetable;
			updatedatetimetable = updatedatagridview->ExecuteReader();
			conusertable->Close();

			try {
				MySqlDataAdapter^ showdatatimetable = gcnew MySqlDataAdapter();
				showdatatimetable->SelectCommand = updatedatagridview;

				DataTable^ dbdatetimeholder = gcnew DataTable();
				showdatatimetable->Fill(dbdatetimeholder);
				BindingSource^ bSource = gcnew BindingSource();

				bSource->DataSource = dbdatetimeholder;
				datetimedb->DataSource = bSource;
				showdatatimetable->Update(dbdatetimeholder);

			}
			//If ever there's a database error displaying.
			catch (Exception^ ex) {

				MessageBox::Show(ex->Message);
			}


		}
		catch (Exception^ errordate) {

			MessageBox::Show("You cannot alter your time in of this day.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		


    }
    //Time out Button function - Same with time in except this one updates the currendate time in with time out input from the system.
	private: System::Void timeoutbtn_Click(System::Object^ sender, System::EventArgs^ e) {

	
		DateTime currentdate = DateTime::Now;
		String^ cdt = currentdate.ToString("MM - dd - yyyy");

		DateTime currentdatetimeout = DateTime::Now;
		String^ cdtout = currentdatetimeout.ToString("h:mm tt");

		try {
			MySqlConnection^ conusertable = gcnew MySqlConnection(constr);
			MySqlCommand^ inserttimeoutdata = gcnew MySqlCommand("update " + workeridlbl->Text + " set timeout = '" + cdtout + "' where date = '" + cdt + "'", conusertable);
			MySqlDataReader^ itd;
			conusertable->Open();
			itd = inserttimeoutdata->ExecuteReader();
			conusertable->Close();

			MySqlCommand^ updatedatagridview = gcnew MySqlCommand("select * from " + workeridlbl->Text + "", conusertable);
			conusertable->Open();
			MySqlDataReader^ updatedatetimetable;
			updatedatetimetable = updatedatagridview->ExecuteReader();
			conusertable->Close();

			try {
				MySqlDataAdapter^ showdatatimetable = gcnew MySqlDataAdapter();
				showdatatimetable->SelectCommand = updatedatagridview;

				DataTable^ dbdatetimeholder = gcnew DataTable();
				showdatatimetable->Fill(dbdatetimeholder);
				BindingSource^ bSource = gcnew BindingSource();

				bSource->DataSource = dbdatetimeholder;
				datetimedb->DataSource = bSource;
				showdatatimetable->Update(dbdatetimeholder);

			}
			catch (Exception^ ex) {

				MessageBox::Show(ex->Message);
			}



		}
		catch (Exception^ errordate) {

			MessageBox::Show("You cannot alter your time or time out of this day.");

		}

		

	}

	//Close this Form.
	private: System::Void logoutbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Form::Close();
	}


    //Log out button hover in effect.
	private: System::Void logoutbtn_hover(System::Object^ sender, System::EventArgs^ e) {
		logoutbtn->BackColor = System::Drawing::Color::FromArgb(123, 0, 30);
	}
	//Log out button hover out effect.
	private: System::Void logoutbtn_hoverout(System::Object^ sender, System::EventArgs^ e) {
		logoutbtn->BackColor = System::Drawing::Color::FromArgb(255, 0, 63);
	}
};
}
