#pragma once
#include <fstream>

namespace ITCfinals {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//Allows this form to use MySql identifiers/functions to run
	using namespace MySql::Data::MySqlClient;

	
	/// <summary>
	/// Summary for CreateUserForm
	/// </summary>
	public ref class CreateUserForm : public System::Windows::Forms::Form
	{
	public:
		CreateUserForm(void)
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
		~CreateUserForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ AddUserBtn;
	private: System::Windows::Forms::TextBox^ contacttxtbox;

	private: System::Windows::Forms::TextBox^ lastnametxtbox;


	protected:







	private: System::Windows::Forms::Label^ FirstNamelbl;
	private: System::Windows::Forms::Label^ LastNamelbl;
	private: System::Windows::Forms::Label^ Departmentlbl;
	private: System::Windows::Forms::Label^ Salarylbl;
	private: System::Windows::Forms::TextBox^ departmenttxtbox;
	private: System::Windows::Forms::TextBox^ salarytxtbox;






	private: System::Windows::Forms::Label^ Contactlbl;
	private: System::Windows::Forms::TextBox^ firstnametxtbox;
	private: System::Windows::Forms::Label^ Addworkerlbl;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ closebtn;
	private: System::Windows::Forms::Label^ workerpasswordlbl;
	private: System::Windows::Forms::TextBox^ workerpasswordtxtbox;
	private: System::Windows::Forms::Panel^ workerpasswordulpanel;
	private: System::Windows::Forms::Label^ datehiredlbl;
	private: System::Windows::Forms::Panel^ datehiredpanel;
	private: System::Windows::Forms::DateTimePicker^ datehiredpicker;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CreateUserForm::typeid));
			this->AddUserBtn = (gcnew System::Windows::Forms::Button());
			this->contacttxtbox = (gcnew System::Windows::Forms::TextBox());
			this->lastnametxtbox = (gcnew System::Windows::Forms::TextBox());
			this->FirstNamelbl = (gcnew System::Windows::Forms::Label());
			this->LastNamelbl = (gcnew System::Windows::Forms::Label());
			this->Departmentlbl = (gcnew System::Windows::Forms::Label());
			this->Salarylbl = (gcnew System::Windows::Forms::Label());
			this->departmenttxtbox = (gcnew System::Windows::Forms::TextBox());
			this->salarytxtbox = (gcnew System::Windows::Forms::TextBox());
			this->Contactlbl = (gcnew System::Windows::Forms::Label());
			this->firstnametxtbox = (gcnew System::Windows::Forms::TextBox());
			this->Addworkerlbl = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->closebtn = (gcnew System::Windows::Forms::Label());
			this->workerpasswordlbl = (gcnew System::Windows::Forms::Label());
			this->workerpasswordtxtbox = (gcnew System::Windows::Forms::TextBox());
			this->workerpasswordulpanel = (gcnew System::Windows::Forms::Panel());
			this->datehiredlbl = (gcnew System::Windows::Forms::Label());
			this->datehiredpanel = (gcnew System::Windows::Forms::Panel());
			this->datehiredpicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// AddUserBtn
			// 
			this->AddUserBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->AddUserBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddUserBtn->FlatAppearance->BorderSize = 0;
			this->AddUserBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddUserBtn->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddUserBtn->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->AddUserBtn->Location = System::Drawing::Point(553, 579);
			this->AddUserBtn->Name = L"AddUserBtn";
			this->AddUserBtn->Size = System::Drawing::Size(337, 51);
			this->AddUserBtn->TabIndex = 0;
			this->AddUserBtn->Text = L"Add User";
			this->AddUserBtn->UseVisualStyleBackColor = false;
			this->AddUserBtn->Click += gcnew System::EventHandler(this, &CreateUserForm::AddUserBtn_Click);
			this->AddUserBtn->MouseEnter += gcnew System::EventHandler(this, &CreateUserForm::AddUserBtn_hover);
			this->AddUserBtn->MouseLeave += gcnew System::EventHandler(this, &CreateUserForm::AddUserBtn_hoverout);
			// 
			// contacttxtbox
			// 
			this->contacttxtbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->contacttxtbox->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contacttxtbox->Location = System::Drawing::Point(553, 523);
			this->contacttxtbox->Name = L"contacttxtbox";
			this->contacttxtbox->Size = System::Drawing::Size(337, 22);
			this->contacttxtbox->TabIndex = 1;
			this->contacttxtbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// lastnametxtbox
			// 
			this->lastnametxtbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lastnametxtbox->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lastnametxtbox->Location = System::Drawing::Point(553, 230);
			this->lastnametxtbox->Name = L"lastnametxtbox";
			this->lastnametxtbox->Size = System::Drawing::Size(217, 22);
			this->lastnametxtbox->TabIndex = 3;
			this->lastnametxtbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// FirstNamelbl
			// 
			this->FirstNamelbl->AutoSize = true;
			this->FirstNamelbl->BackColor = System::Drawing::Color::Transparent;
			this->FirstNamelbl->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FirstNamelbl->Location = System::Drawing::Point(552, 96);
			this->FirstNamelbl->Name = L"FirstNamelbl";
			this->FirstNamelbl->Size = System::Drawing::Size(99, 18);
			this->FirstNamelbl->TabIndex = 5;
			this->FirstNamelbl->Text = L"First Name:";
			// 
			// LastNamelbl
			// 
			this->LastNamelbl->AutoSize = true;
			this->LastNamelbl->BackColor = System::Drawing::Color::Transparent;
			this->LastNamelbl->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LastNamelbl->Location = System::Drawing::Point(550, 186);
			this->LastNamelbl->Name = L"LastNamelbl";
			this->LastNamelbl->Size = System::Drawing::Size(98, 18);
			this->LastNamelbl->TabIndex = 6;
			this->LastNamelbl->Text = L"Last Name:";
			// 
			// Departmentlbl
			// 
			this->Departmentlbl->AutoSize = true;
			this->Departmentlbl->BackColor = System::Drawing::Color::Transparent;
			this->Departmentlbl->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Departmentlbl->Location = System::Drawing::Point(552, 282);
			this->Departmentlbl->Name = L"Departmentlbl";
			this->Departmentlbl->Size = System::Drawing::Size(108, 18);
			this->Departmentlbl->TabIndex = 7;
			this->Departmentlbl->Text = L"Department:";
			// 
			// Salarylbl
			// 
			this->Salarylbl->AutoSize = true;
			this->Salarylbl->BackColor = System::Drawing::Color::Transparent;
			this->Salarylbl->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Salarylbl->Location = System::Drawing::Point(552, 377);
			this->Salarylbl->Name = L"Salarylbl";
			this->Salarylbl->Size = System::Drawing::Size(64, 18);
			this->Salarylbl->TabIndex = 8;
			this->Salarylbl->Text = L"Salary:";
			// 
			// departmenttxtbox
			// 
			this->departmenttxtbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->departmenttxtbox->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->departmenttxtbox->Location = System::Drawing::Point(553, 325);
			this->departmenttxtbox->Name = L"departmenttxtbox";
			this->departmenttxtbox->Size = System::Drawing::Size(337, 22);
			this->departmenttxtbox->TabIndex = 4;
			this->departmenttxtbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// salarytxtbox
			// 
			this->salarytxtbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->salarytxtbox->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->salarytxtbox->Location = System::Drawing::Point(555, 420);
			this->salarytxtbox->Name = L"salarytxtbox";
			this->salarytxtbox->Size = System::Drawing::Size(337, 22);
			this->salarytxtbox->TabIndex = 9;
			this->salarytxtbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Contactlbl
			// 
			this->Contactlbl->AutoSize = true;
			this->Contactlbl->BackColor = System::Drawing::Color::Transparent;
			this->Contactlbl->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Contactlbl->Location = System::Drawing::Point(552, 477);
			this->Contactlbl->Name = L"Contactlbl";
			this->Contactlbl->Size = System::Drawing::Size(144, 18);
			this->Contactlbl->TabIndex = 10;
			this->Contactlbl->Text = L"Contact Number:";
			// 
			// firstnametxtbox
			// 
			this->firstnametxtbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->firstnametxtbox->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->firstnametxtbox->Location = System::Drawing::Point(553, 137);
			this->firstnametxtbox->Name = L"firstnametxtbox";
			this->firstnametxtbox->Size = System::Drawing::Size(217, 22);
			this->firstnametxtbox->TabIndex = 2;
			this->firstnametxtbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Addworkerlbl
			// 
			this->Addworkerlbl->AutoSize = true;
			this->Addworkerlbl->BackColor = System::Drawing::Color::Transparent;
			this->Addworkerlbl->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 33.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Addworkerlbl->Location = System::Drawing::Point(122, 201);
			this->Addworkerlbl->Name = L"Addworkerlbl";
			this->Addworkerlbl->Size = System::Drawing::Size(336, 52);
			this->Addworkerlbl->TabIndex = 11;
			this->Addworkerlbl->Text = L"ADD WORKER";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->panel1->Location = System::Drawing::Point(553, 166);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(217, 6);
			this->panel1->TabIndex = 12;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->panel2->Location = System::Drawing::Point(553, 259);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(217, 6);
			this->panel2->TabIndex = 13;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->panel3->Location = System::Drawing::Point(553, 350);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(337, 6);
			this->panel3->TabIndex = 14;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->panel4->Location = System::Drawing::Point(555, 449);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(337, 6);
			this->panel4->TabIndex = 15;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->panel5->Location = System::Drawing::Point(553, 552);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(337, 6);
			this->panel5->TabIndex = 16;
			// 
			// closebtn
			// 
			this->closebtn->AutoSize = true;
			this->closebtn->BackColor = System::Drawing::Color::Transparent;
			this->closebtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->closebtn->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->closebtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->closebtn->Location = System::Drawing::Point(979, 3);
			this->closebtn->Name = L"closebtn";
			this->closebtn->Size = System::Drawing::Size(26, 28);
			this->closebtn->TabIndex = 17;
			this->closebtn->Text = L"X";
			this->closebtn->Click += gcnew System::EventHandler(this, &CreateUserForm::closebtn_Click);
			this->closebtn->MouseEnter += gcnew System::EventHandler(this, &CreateUserForm::closebtn_hover);
			this->closebtn->MouseLeave += gcnew System::EventHandler(this, &CreateUserForm::closebtn_hoverout);
			// 
			// workerpasswordlbl
			// 
			this->workerpasswordlbl->AutoSize = true;
			this->workerpasswordlbl->BackColor = System::Drawing::Color::Transparent;
			this->workerpasswordlbl->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->workerpasswordlbl->Location = System::Drawing::Point(128, 282);
			this->workerpasswordlbl->Name = L"workerpasswordlbl";
			this->workerpasswordlbl->Size = System::Drawing::Size(179, 18);
			this->workerpasswordlbl->TabIndex = 18;
			this->workerpasswordlbl->Text = L"Worker ID/Password: ";
			// 
			// workerpasswordtxtbox
			// 
			this->workerpasswordtxtbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->workerpasswordtxtbox->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->workerpasswordtxtbox->Location = System::Drawing::Point(131, 313);
			this->workerpasswordtxtbox->Name = L"workerpasswordtxtbox";
			this->workerpasswordtxtbox->Size = System::Drawing::Size(285, 22);
			this->workerpasswordtxtbox->TabIndex = 19;
			// 
			// workerpasswordulpanel
			// 
			this->workerpasswordulpanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->workerpasswordulpanel->Location = System::Drawing::Point(131, 341);
			this->workerpasswordulpanel->Name = L"workerpasswordulpanel";
			this->workerpasswordulpanel->Size = System::Drawing::Size(285, 6);
			this->workerpasswordulpanel->TabIndex = 15;
			// 
			// datehiredlbl
			// 
			this->datehiredlbl->AutoSize = true;
			this->datehiredlbl->BackColor = System::Drawing::Color::Transparent;
			this->datehiredlbl->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->datehiredlbl->Location = System::Drawing::Point(128, 387);
			this->datehiredlbl->Name = L"datehiredlbl";
			this->datehiredlbl->Size = System::Drawing::Size(98, 18);
			this->datehiredlbl->TabIndex = 20;
			this->datehiredlbl->Text = L"Date Hired:";
			// 
			// datehiredpanel
			// 
			this->datehiredpanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->datehiredpanel->Location = System::Drawing::Point(131, 449);
			this->datehiredpanel->Name = L"datehiredpanel";
			this->datehiredpanel->Size = System::Drawing::Size(285, 6);
			this->datehiredpanel->TabIndex = 16;
			// 
			// datehiredpicker
			// 
			this->datehiredpicker->CustomFormat = L"yyyy-MM-dd";
			this->datehiredpicker->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->datehiredpicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->datehiredpicker->Location = System::Drawing::Point(131, 416);
			this->datehiredpicker->Name = L"datehiredpicker";
			this->datehiredpicker->Size = System::Drawing::Size(132, 26);
			this->datehiredpicker->TabIndex = 21;
			this->datehiredpicker->Value = System::DateTime(2021, 12, 5, 0, 0, 0, 0);
			// 
			// CreateUserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1008, 729);
			this->Controls->Add(this->datehiredpicker);
			this->Controls->Add(this->datehiredpanel);
			this->Controls->Add(this->datehiredlbl);
			this->Controls->Add(this->workerpasswordulpanel);
			this->Controls->Add(this->workerpasswordtxtbox);
			this->Controls->Add(this->workerpasswordlbl);
			this->Controls->Add(this->closebtn);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Addworkerlbl);
			this->Controls->Add(this->contacttxtbox);
			this->Controls->Add(this->Contactlbl);
			this->Controls->Add(this->salarytxtbox);
			this->Controls->Add(this->Salarylbl);
			this->Controls->Add(this->Departmentlbl);
			this->Controls->Add(this->LastNamelbl);
			this->Controls->Add(this->FirstNamelbl);
			this->Controls->Add(this->departmenttxtbox);
			this->Controls->Add(this->lastnametxtbox);
			this->Controls->Add(this->firstnametxtbox);
			this->Controls->Add(this->AddUserBtn);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"CreateUserForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"CreateUserForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Global Variable use for data transferring
	    String^ Firstname;
		String^ Lastname;
		String^ Fullname;
		String^ Contact;
		String^ Department;
		String^ WorkerPassword;
		String^ Datehired;


    //Sends data to our database table when this button is click
	private: System::Void AddUserBtn_Click(System::Object^ sender, System::EventArgs^ e) {

		

		//Declares a string that contains credentials on our hosted server
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=syscommdb";
		//Instantiates a connection to MySql and having its parameter as constr (connection string)
		MySqlConnection^ con = gcnew MySqlConnection(constr);

		Firstname = firstnametxtbox->Text;
		Lastname = lastnametxtbox->Text;
		Fullname = Firstname + " " + Lastname;
		WorkerPassword = workerpasswordtxtbox->Text;

		Department = departmenttxtbox->Text;
		Contact = contacttxtbox->Text;
		Datehired = datehiredpicker->Text;
		try {
	
			con->Open();//opens our database to check connectivity
			con->Close();//After checking closes it then runs the next try function.

			//Checks if salary input has string or no input

			try {

				//Checks if all input fields has input.
				if (this->WorkerPassword->Length != 0 && this->Firstname->Length != 0 && this->Lastname->Length != 0 && this->Fullname->Length != 0 && this->Department->Length != 0 && this->Contact->Length != 0 ) {


					//Validates if the salary input is number
					if (System::Text::RegularExpressions::Regex::IsMatch(salarytxtbox->Text, "^[-0-9]*.[.0-9].[0-9]*$")) {

						double salarynumber;
						salarynumber = Convert::ToInt32(salarytxtbox->Text);//Converts to double so that our database table can accept it.


						MySqlCommand^ cmdinsertuserdata = gcnew MySqlCommand("insert into syscommtable values('" + Firstname + "','" + Lastname + "','" + Fullname + "','" + Department + "','" + salarynumber + "', '" + Contact + "', '" + workerpasswordtxtbox->Text + "' , '"+Datehired+"')", con);
						MySqlDataReader^ insertuserdatareader;
						con->Open();
						insertuserdatareader = cmdinsertuserdata->ExecuteReader();
						con->Close();

						con->Open();
						WorkerPassword = workerpasswordtxtbox->Text;
						MySqlCommand^ cmdcreatetableforuser = gcnew MySqlCommand("create table "+ WorkerPassword +"(date VARCHAR(255), timein VARCHAR(255), timeout VARCHAR(255), PRIMARY KEY (date))", con);
						MySqlDataReader^ createtableforuser;
						createtableforuser = cmdcreatetableforuser->ExecuteReader();

						MessageBox::Show("Data Added", "Succesful", MessageBoxButtons::OK, MessageBoxIcon::Information);
						con->Close();
					}
					//Will display if salary is not number.
					else {

						MessageBox::Show("Salary should be a number only.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}



				}
				else {

					MessageBox::Show("There's an empty text box.","Error!",MessageBoxButtons::OK, MessageBoxIcon::Error);
				}




			}
			//Will display if the user input has same worker id with existing worker id.
			catch (Exception^ errorsameid) {

				MessageBox::Show("The Worker ID/Password of this employee has been used already. Please use unique Worker ID/Password for this employee.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
		}
		//Will display if your are not connected to any database.
		catch (Exception^ errormessage) {

			MessageBox::Show("You are not connected to any database and hence will not be able to use this function.","Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}

	}
    //Close btn - closes this form and goes back to previous form.
	private: System::Void closebtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Form::Close();
	}
    //Hover in effect to add user button
	private: System::Void AddUserBtn_hover(System::Object^ sender, System::EventArgs^ e) {
		AddUserBtn->BackColor = System::Drawing::Color::FromArgb(123, 0, 30);
	}
	//Hover out effect to add user button
	private: System::Void AddUserBtn_hoverout(System::Object^ sender, System::EventArgs^ e) {
		AddUserBtn->BackColor = System::Drawing::Color::FromArgb(255, 0, 63);
	}
	//Hover in effect to close button 'X'
	private: System::Void closebtn_hover(System::Object^ sender, System::EventArgs^ e) {
		closebtn->ForeColor = System::Drawing::Color::FromArgb(123, 0, 30);
	}
	//Hover out effect to close button 'X'
	private: System::Void closebtn_hoverout(System::Object^ sender, System::EventArgs^ e) {
		closebtn->ForeColor = System::Drawing::Color::FromArgb(255, 0, 63);
	}
};
}
