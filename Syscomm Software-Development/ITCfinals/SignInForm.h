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
	/// Summary for SignInForm
	/// </summary>
	public ref class SignInForm : public System::Windows::Forms::Form
	{
	public:
		SignInForm(void)
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
		~SignInForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ signinlabel;
	private: System::Windows::Forms::Label^ headingGD;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ usernamelabel;
	private: System::Windows::Forms::Label^ passwordlabel;
	private: System::Windows::Forms::TextBox^ usernametxtbox;
	private: System::Windows::Forms::Panel^ usernamepanel;
	private: System::Windows::Forms::TextBox^ passwordtxtbox;
	private: System::Windows::Forms::Panel^ passwordpanel;
	private: System::Windows::Forms::Label^ closebtn;
	private: System::Windows::Forms::Button^ loginbtn;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SignInForm::typeid));
			this->signinlabel = (gcnew System::Windows::Forms::Label());
			this->headingGD = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->usernamelabel = (gcnew System::Windows::Forms::Label());
			this->passwordlabel = (gcnew System::Windows::Forms::Label());
			this->usernametxtbox = (gcnew System::Windows::Forms::TextBox());
			this->usernamepanel = (gcnew System::Windows::Forms::Panel());
			this->passwordtxtbox = (gcnew System::Windows::Forms::TextBox());
			this->passwordpanel = (gcnew System::Windows::Forms::Panel());
			this->closebtn = (gcnew System::Windows::Forms::Label());
			this->loginbtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// signinlabel
			// 
			this->signinlabel->AutoSize = true;
			this->signinlabel->BackColor = System::Drawing::Color::Transparent;
			this->signinlabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signinlabel->Location = System::Drawing::Point(37, 89);
			this->signinlabel->Name = L"signinlabel";
			this->signinlabel->Size = System::Drawing::Size(140, 43);
			this->signinlabel->TabIndex = 1;
			this->signinlabel->Text = L"Sign in";
			// 
			// headingGD
			// 
			this->headingGD->AutoSize = true;
			this->headingGD->BackColor = System::Drawing::Color::Transparent;
			this->headingGD->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->headingGD->Location = System::Drawing::Point(25, 165);
			this->headingGD->Name = L"headingGD";
			this->headingGD->Size = System::Drawing::Size(232, 75);
			this->headingGD->TabIndex = 2;
			this->headingGD->Text = L"GOOD";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(27, 229);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(186, 75);
			this->label1->TabIndex = 3;
			this->label1->Text = L"DAY!";
			// 
			// usernamelabel
			// 
			this->usernamelabel->AutoSize = true;
			this->usernamelabel->BackColor = System::Drawing::Color::Transparent;
			this->usernamelabel->Font = (gcnew System::Drawing::Font(L"Agency FB", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernamelabel->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->usernamelabel->Location = System::Drawing::Point(36, 390);
			this->usernamelabel->Name = L"usernamelabel";
			this->usernamelabel->Size = System::Drawing::Size(73, 25);
			this->usernamelabel->TabIndex = 4;
			this->usernamelabel->Text = L"Username";
			// 
			// passwordlabel
			// 
			this->passwordlabel->AutoSize = true;
			this->passwordlabel->BackColor = System::Drawing::Color::Transparent;
			this->passwordlabel->Font = (gcnew System::Drawing::Font(L"Agency FB", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordlabel->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->passwordlabel->Location = System::Drawing::Point(36, 459);
			this->passwordlabel->Name = L"passwordlabel";
			this->passwordlabel->Size = System::Drawing::Size(71, 25);
			this->passwordlabel->TabIndex = 5;
			this->passwordlabel->Text = L"Password";
			// 
			// usernametxtbox
			// 
			this->usernametxtbox->BackColor = System::Drawing::SystemColors::Window;
			this->usernametxtbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->usernametxtbox->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->usernametxtbox->Location = System::Drawing::Point(40, 422);
			this->usernametxtbox->Name = L"usernametxtbox";
			this->usernametxtbox->Size = System::Drawing::Size(363, 22);
			this->usernametxtbox->TabIndex = 6;
			// 
			// usernamepanel
			// 
			this->usernamepanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->usernamepanel->Location = System::Drawing::Point(40, 450);
			this->usernamepanel->Name = L"usernamepanel";
			this->usernamepanel->Size = System::Drawing::Size(363, 5);
			this->usernamepanel->TabIndex = 7;
			// 
			// passwordtxtbox
			// 
			this->passwordtxtbox->BackColor = System::Drawing::SystemColors::Window;
			this->passwordtxtbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passwordtxtbox->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->passwordtxtbox->Location = System::Drawing::Point(40, 496);
			this->passwordtxtbox->Name = L"passwordtxtbox";
			this->passwordtxtbox->Size = System::Drawing::Size(363, 22);
			this->passwordtxtbox->TabIndex = 8;
			this->passwordtxtbox->UseSystemPasswordChar = true;
			// 
			// passwordpanel
			// 
			this->passwordpanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->passwordpanel->Location = System::Drawing::Point(41, 524);
			this->passwordpanel->Name = L"passwordpanel";
			this->passwordpanel->Size = System::Drawing::Size(363, 5);
			this->passwordpanel->TabIndex = 8;
			// 
			// closebtn
			// 
			this->closebtn->AutoSize = true;
			this->closebtn->BackColor = System::Drawing::Color::Transparent;
			this->closebtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->closebtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->closebtn->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->closebtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->closebtn->Location = System::Drawing::Point(980, 2);
			this->closebtn->Name = L"closebtn";
			this->closebtn->Size = System::Drawing::Size(26, 28);
			this->closebtn->TabIndex = 9;
			this->closebtn->Text = L"X";
			this->closebtn->Click += gcnew System::EventHandler(this, &SignInForm::closebtn_Click);
			this->closebtn->MouseEnter += gcnew System::EventHandler(this, &SignInForm::closebtn_hover);
			this->closebtn->MouseLeave += gcnew System::EventHandler(this, &SignInForm::closebtn_hoverout);
			// 
			// loginbtn
			// 
			this->loginbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->loginbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->loginbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginbtn->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginbtn->ForeColor = System::Drawing::Color::White;
			this->loginbtn->Location = System::Drawing::Point(40, 543);
			this->loginbtn->Name = L"loginbtn";
			this->loginbtn->Size = System::Drawing::Size(364, 42);
			this->loginbtn->TabIndex = 10;
			this->loginbtn->Text = L"Login";
			this->loginbtn->UseVisualStyleBackColor = false;
			this->loginbtn->Click += gcnew System::EventHandler(this, &SignInForm::loginbtn_Click);
			this->loginbtn->MouseEnter += gcnew System::EventHandler(this, &SignInForm::loginbtn_hover);
			this->loginbtn->MouseLeave += gcnew System::EventHandler(this, &SignInForm::loginbtn_hoverout);
			// 
			// SignInForm
			// 
			this->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1008, 729);
			this->Controls->Add(this->loginbtn);
			this->Controls->Add(this->closebtn);
			this->Controls->Add(this->passwordpanel);
			this->Controls->Add(this->passwordtxtbox);
			this->Controls->Add(this->usernamepanel);
			this->Controls->Add(this->usernametxtbox);
			this->Controls->Add(this->passwordlabel);
			this->Controls->Add(this->usernamelabel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->headingGD);
			this->Controls->Add(this->signinlabel);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"SignInForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SignInForm";
			this->Load += gcnew System::EventHandler(this, &SignInForm::SignInForm_Loading);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
    //Global variables;
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=syscommdb";
		String^ usercheck;
		String^ passwordcheck;
		String^ username;
		String^ password;
		

	//When the form launches
	private: System::Void SignInForm_Loading(System::Object^ sender, System::EventArgs^ e) {

		//Checks if database is connected
		//try will run its statement if it's connected
		try {
 
			MySqlConnection^ con = gcnew MySqlConnection(constr);//Establishing a connection between our application and database.
			con->Open(); //Opens our database
			con->Close();//Closes our database after checking
		}
		//catch will run if database is not connected.
		catch (Exception^ errormessageloading) {

			MessageBox::Show("MySql Database is not connected. Please use the special credentials.", "Error",MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

	}

	//Login button click
	private: System::Void loginbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		

		ITCfinals::WorkerForm wf;//Instantiates an object that calls our form - WorkerForm.
		ITCfinals::WorkerEmployeeForm wef(usernametxtbox->Text);

		

		//Function for login validation


		
		//Will only run if MySql server data is running along with its table.
		try {
			username = usernametxtbox->Text;
			password = passwordtxtbox->Text;
			MySqlConnection^ con = gcnew MySqlConnection(constr);//Establishing a connection between our application and database.
			MySqlCommand^ cmd = gcnew MySqlCommand("select firstname, password from syscommtable where firstname='" + usernametxtbox->Text + "' and password = '" + passwordtxtbox->Text + "'", con);
			con->Open(); //Opens our database
			MySqlDataReader^ dr;


	
			dr = cmd->ExecuteReader(); //Executes our command

			//Will run everytime we click this button
			//Retrieves data from our database.
			while (dr->Read()) {

				usercheck = dr["firstname"]->ToString();
				passwordcheck = dr["password"]->ToString();

			}
		
			if (username == dr["firstname"]->ToString() && password == dr["password"]->ToString()) {

					ITCfinals::WorkerEmployeeForm wef(username);
					this->Hide();
					wef.ShowDialog();
					this->Show();
					con->Close();

			}

			else {

					if (usernametxtbox->Text == "admin" && passwordtxtbox->Text == "1234") {

						this->Hide();
						wf.ShowDialog();
						this->Show();

					}
					else {

						MessageBox::Show("Invalid username or password!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

					}
					
					
			}
			
	
			
	
		
		}

		//Will Run if MySql server data is not opened // this block of code will execute as a statement instead of an error displaying MySql is not connected.
		catch (Exception^ specialcredentials) {

			//Validates user input with predefined values as its condition
			if (usernametxtbox->Text == "admin" && passwordtxtbox->Text == "1234") {

				this->Hide();//Hides this form
				wf.ShowDialog();//Then Shows the worker form
				this->Show();//Pulls back this form
			}

			else {

				MessageBox::Show("Invalid Username or Password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
		}
		
		
		
		
	}

    //Log in btnMouse hover in
    private: System::Void loginbtn_hover(System::Object^ sender, System::EventArgs^ e) {

		loginbtn->BackColor = System::Drawing::Color::FromArgb(157, 0, 39);

     }
    //Login button hover out
	private: System::Void loginbtn_hoverout(System::Object^ sender, System::EventArgs^ e) {

		loginbtn->BackColor = System::Drawing::Color::FromArgb(255, 0, 63);
	 }
	
    //Close button function
	private: System::Void closebtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
    //Close button hover in effect
	private: System::Void closebtn_hover(System::Object^ sender, System::EventArgs^ e) {

		closebtn->BackColor = System::Drawing::Color::Transparent;
		closebtn->ForeColor = System::Drawing::Color::FromArgb(123, 0, 30);
	}
    //Close button hover out effect
	private: System::Void closebtn_hoverout(System::Object^ sender, System::EventArgs^ e) {
		
		closebtn->BackColor = System::Drawing::Color::Transparent;
		closebtn->ForeColor = System::Drawing::Color::FromArgb(255, 0, 63);
	}
   


};
}
