#pragma once

namespace ITCfinals {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for WorkerForm
	/// </summary>
	public ref class WorkerForm : public System::Windows::Forms::Form
	{
	public:
		WorkerForm(void)
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
		~WorkerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ logoutbtn;
	private: System::Windows::Forms::Button^ CreateUserbtn;
	private: System::Windows::Forms::Button^ DeleteUserbtn;
	private: System::Windows::Forms::Label^ Header;
	private: System::Windows::Forms::Label^ Header2;
	private: System::Windows::Forms::Label^ Header3;
	private: System::Windows::Forms::Label^ header4;
	private: System::Windows::Forms::DataGridView^ listofworkerdb;
	private: System::Windows::Forms::Button^ showlistofworkerbtn;





	protected:

	protected:

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(WorkerForm::typeid));
			this->logoutbtn = (gcnew System::Windows::Forms::Button());
			this->CreateUserbtn = (gcnew System::Windows::Forms::Button());
			this->DeleteUserbtn = (gcnew System::Windows::Forms::Button());
			this->Header = (gcnew System::Windows::Forms::Label());
			this->Header2 = (gcnew System::Windows::Forms::Label());
			this->Header3 = (gcnew System::Windows::Forms::Label());
			this->header4 = (gcnew System::Windows::Forms::Label());
			this->listofworkerdb = (gcnew System::Windows::Forms::DataGridView());
			this->showlistofworkerbtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->listofworkerdb))->BeginInit();
			this->SuspendLayout();
			// 
			// logoutbtn
			// 
			this->logoutbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->logoutbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->logoutbtn->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logoutbtn->ForeColor = System::Drawing::Color::White;
			this->logoutbtn->Location = System::Drawing::Point(821, 660);
			this->logoutbtn->Name = L"logoutbtn";
			this->logoutbtn->Size = System::Drawing::Size(136, 55);
			this->logoutbtn->TabIndex = 0;
			this->logoutbtn->Text = L"Log out";
			this->logoutbtn->UseVisualStyleBackColor = false;
			this->logoutbtn->Click += gcnew System::EventHandler(this, &WorkerForm::logoutbtn_Click);
			this->logoutbtn->MouseEnter += gcnew System::EventHandler(this, &WorkerForm::logoutbtn_hover);
			this->logoutbtn->MouseLeave += gcnew System::EventHandler(this, &WorkerForm::logoutbtn_hoverout);
			// 
			// CreateUserbtn
			// 
			this->CreateUserbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->CreateUserbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CreateUserbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CreateUserbtn->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CreateUserbtn->ForeColor = System::Drawing::Color::White;
			this->CreateUserbtn->Location = System::Drawing::Point(821, 501);
			this->CreateUserbtn->Name = L"CreateUserbtn";
			this->CreateUserbtn->Size = System::Drawing::Size(136, 56);
			this->CreateUserbtn->TabIndex = 1;
			this->CreateUserbtn->Text = L"Add User";
			this->CreateUserbtn->UseVisualStyleBackColor = false;
			this->CreateUserbtn->Click += gcnew System::EventHandler(this, &WorkerForm::CreateUserbtn_Click);
			this->CreateUserbtn->MouseEnter += gcnew System::EventHandler(this, &WorkerForm::CreateUser_hover);
			this->CreateUserbtn->MouseLeave += gcnew System::EventHandler(this, &WorkerForm::CreateUser_hoverout);
			// 
			// DeleteUserbtn
			// 
			this->DeleteUserbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->DeleteUserbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DeleteUserbtn->FlatAppearance->BorderSize = 0;
			this->DeleteUserbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DeleteUserbtn->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DeleteUserbtn->ForeColor = System::Drawing::Color::White;
			this->DeleteUserbtn->Location = System::Drawing::Point(821, 583);
			this->DeleteUserbtn->Name = L"DeleteUserbtn";
			this->DeleteUserbtn->Size = System::Drawing::Size(136, 57);
			this->DeleteUserbtn->TabIndex = 2;
			this->DeleteUserbtn->Text = L"Delete User";
			this->DeleteUserbtn->UseVisualStyleBackColor = false;
			this->DeleteUserbtn->Click += gcnew System::EventHandler(this, &WorkerForm::DeleteUserbtn_Click);
			this->DeleteUserbtn->MouseEnter += gcnew System::EventHandler(this, &WorkerForm::DeleteUserbtn_hover);
			this->DeleteUserbtn->MouseLeave += gcnew System::EventHandler(this, &WorkerForm::DeleteUserbtn_hoverout);
			// 
			// Header
			// 
			this->Header->AutoSize = true;
			this->Header->BackColor = System::Drawing::Color::Transparent;
			this->Header->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 27.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Header->Location = System::Drawing::Point(209, 231);
			this->Header->Name = L"Header";
			this->Header->Size = System::Drawing::Size(173, 43);
			this->Header->TabIndex = 3;
			this->Header->Text = L"Hi there!";
			// 
			// Header2
			// 
			this->Header2->AutoSize = true;
			this->Header2->BackColor = System::Drawing::Color::Transparent;
			this->Header2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 27.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Header2->Location = System::Drawing::Point(208, 267);
			this->Header2->Name = L"Header2";
			this->Header2->Size = System::Drawing::Size(235, 43);
			this->Header2->TabIndex = 4;
			this->Header2->Text = L"Mr. Jack Ma";
			// 
			// Header3
			// 
			this->Header3->AutoSize = true;
			this->Header3->BackColor = System::Drawing::Color::Transparent;
			this->Header3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Header3->Location = System::Drawing::Point(213, 310);
			this->Header3->Name = L"Header3";
			this->Header3->Size = System::Drawing::Size(275, 22);
			this->Header3->TabIndex = 5;
			this->Header3->Text = L"CEO - Syscomm. Telco. Base";
			// 
			// header4
			// 
			this->header4->AutoSize = true;
			this->header4->BackColor = System::Drawing::Color::Transparent;
			this->header4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->header4->Location = System::Drawing::Point(597, 440);
			this->header4->Name = L"header4";
			this->header4->Size = System::Drawing::Size(360, 32);
			this->header4->TabIndex = 6;
			this->header4->Text = L"What would you like to do\?";
			// 
			// listofworkerdb
			// 
			this->listofworkerdb->AllowUserToAddRows = false;
			this->listofworkerdb->AllowUserToDeleteRows = false;
			this->listofworkerdb->AllowUserToResizeColumns = false;
			this->listofworkerdb->AllowUserToResizeRows = false;
			this->listofworkerdb->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->listofworkerdb->BackgroundColor = System::Drawing::Color::White;
			this->listofworkerdb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listofworkerdb->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(123)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->listofworkerdb->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->listofworkerdb->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Agency FB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(115)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->listofworkerdb->DefaultCellStyle = dataGridViewCellStyle2;
			this->listofworkerdb->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->listofworkerdb->EnableHeadersVisualStyles = false;
			this->listofworkerdb->Location = System::Drawing::Point(603, 205);
			this->listofworkerdb->Name = L"listofworkerdb";
			this->listofworkerdb->RowHeadersVisible = false;
			this->listofworkerdb->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->listofworkerdb->Size = System::Drawing::Size(354, 222);
			this->listofworkerdb->TabIndex = 7;
			// 
			// showlistofworkerbtn
			// 
			this->showlistofworkerbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->showlistofworkerbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->showlistofworkerbtn->FlatAppearance->BorderSize = 0;
			this->showlistofworkerbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->showlistofworkerbtn->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->showlistofworkerbtn->ForeColor = System::Drawing::Color::White;
			this->showlistofworkerbtn->Location = System::Drawing::Point(603, 169);
			this->showlistofworkerbtn->Name = L"showlistofworkerbtn";
			this->showlistofworkerbtn->Size = System::Drawing::Size(354, 30);
			this->showlistofworkerbtn->TabIndex = 8;
			this->showlistofworkerbtn->Text = L"Update list of worker";
			this->showlistofworkerbtn->UseVisualStyleBackColor = false;
			this->showlistofworkerbtn->Click += gcnew System::EventHandler(this, &WorkerForm::showlistofworkerbtn_Click);
			// 
			// WorkerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1024, 768);
			this->Controls->Add(this->showlistofworkerbtn);
			this->Controls->Add(this->listofworkerdb);
			this->Controls->Add(this->header4);
			this->Controls->Add(this->Header3);
			this->Controls->Add(this->Header2);
			this->Controls->Add(this->Header);
			this->Controls->Add(this->DeleteUserbtn);
			this->Controls->Add(this->CreateUserbtn);
			this->Controls->Add(this->logoutbtn);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"WorkerForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"SysComm. Telco.";
			this->Load += gcnew System::EventHandler(this, &WorkerForm::WorkForm_loading);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->listofworkerdb))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
    
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=syscommdb"; // declares our connection as string to database.
	
	//Runs this statement upon the loading of this form.
    //connects the db and gets the table to display for the admin.
	private: System::Void WorkForm_loading(System::Object^ sender, System::EventArgs^ e) {
	  try {

		  MySqlConnection^ con = gcnew MySqlConnection(constr);//Establishing a connection to our database using MySqlConnection command
		  MySqlCommand^ cmdshowworker = gcnew MySqlCommand("select fullname, department from syscommtable ", con);//Initializes a new MySql command with its respective syntax.
		  con->Open();//Opens our database.
		  MySqlDataReader^ showworker;//Initializes our data reader for command.
		  showworker = cmdshowworker->ExecuteReader();//Executes this reader as output for the retrieved datas from the database
		  con->Close();//Closes the connection to our database - so that the datas are static.

	
		  MySqlDataAdapter^ showlistofworkerdata = gcnew MySqlDataAdapter(); // Creates an SqlAdapter for our data grid view
		  showlistofworkerdata->SelectCommand = cmdshowworker;//Retrieves the data of our SQL Command

		  DataTable^ dbworkerlist = gcnew DataTable();//Initializes a DataTable that will serve as our data retrieved holder.
		  showlistofworkerdata->Fill(dbworkerlist); // Fills this data table  with our retrieved data from database.
		  BindingSource^ bSource = gcnew BindingSource();//Initializes a bind object for our database and data grid view.

	      bSource->DataSource = dbworkerlist;//Inputs the Datasource of this data grid view as our data retrieved holder.
		  listofworkerdb->DataSource = bSource;//Displays the retrieved data.
		  showlistofworkerdata->Update(dbworkerlist);//Updates upon the loading of this form.

	  }
	  catch (Exception^ notconnectedtodb) {

		  MessageBox::Show("Error! You are not connected to a database");
	  }
		
	}

	//updates the table list of worker in admin credentials - the function of this button is the same with this form loading except this one functions if this component is clicked by the user.
	private: System::Void showlistofworkerbtn_Click(System::Object^ sender, System::EventArgs^ e) {

		try {

			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlCommand^ cmdshowworker = gcnew MySqlCommand("select fullname, department from syscommtable ", con);
			con->Open();
			MySqlDataReader^ showworker;
			showworker = cmdshowworker->ExecuteReader();
			con->Close();


			MySqlDataAdapter^ showlistofworkerdata = gcnew MySqlDataAdapter();
			showlistofworkerdata->SelectCommand = cmdshowworker;

			DataTable^ dbworkerlist = gcnew DataTable();
			showlistofworkerdata->Fill(dbworkerlist);
			BindingSource^ bSource = gcnew BindingSource();

			bSource->DataSource = dbworkerlist;
			listofworkerdb->DataSource = bSource;
			showlistofworkerdata->Update(dbworkerlist);





		}
		catch (Exception^ notconnected) {

			MessageBox::Show("Error! You are not connected to a database");
		}
	}

    //Log out button - Closes this form and goes back to sign in form.
	private: System::Void logoutbtn_Click(System::Object^ sender, System::EventArgs^ e) {

		Form::Close();

	}
    //Shows Create user form
	private: System::Void CreateUserbtn_Click(System::Object^ sender, System::EventArgs^ e) {

		
		ITCfinals::CreateUserForm cf;
		cf.ShowDialog();
		
	}
	//Show delete user form
	private: System::Void DeleteUserbtn_Click(System::Object^ sender, System::EventArgs^ e) {

		ITCfinals::DeleteUserForm df;
		df.ShowDialog();

	}
    //Hover in - Create user button
    private: System::Void CreateUser_hover(System::Object^ sender, System::EventArgs^ e) {

		CreateUserbtn->BackColor = System::Drawing::Color::FromArgb(123, 0, 30);
    }
    //Hover out - Create user button
    private: System::Void CreateUser_hoverout(System::Object^ sender, System::EventArgs^ e) {

		CreateUserbtn->BackColor = System::Drawing::Color::FromArgb(255, 0, 63);
    }
	//Hover in effect - Delete User button
	private: System::Void DeleteUserbtn_hover(System::Object^ sender, System::EventArgs^ e) {
		DeleteUserbtn->BackColor = System::Drawing::Color::FromArgb(123, 0, 30);
	}
	//Hover out effect - Delete User button
	private: System::Void DeleteUserbtn_hoverout(System::Object^ sender, System::EventArgs^ e) {
		DeleteUserbtn->BackColor = System::Drawing::Color::FromArgb(255, 0, 63);
	}
	//Hover in effect - Log out button
	private: System::Void logoutbtn_hover(System::Object^ sender, System::EventArgs^ e) {
		logoutbtn->BackColor = System::Drawing::Color::FromArgb(123, 0, 30);

	}
    //Hover out effect - Log out button
	private: System::Void logoutbtn_hoverout(System::Object^ sender, System::EventArgs^ e) {
		logoutbtn->BackColor = System::Drawing::Color::FromArgb(255, 0, 63);
	}
};
}
