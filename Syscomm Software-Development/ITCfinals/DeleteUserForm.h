#pragma once

namespace ITCfinals {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DeleteUserForm
	/// </summary>
	public ref class DeleteUserForm : public System::Windows::Forms::Form
	{
	public:
		DeleteUserForm(void)
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
		~DeleteUserForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ efullnameheaderlbl;
	protected:
	private: System::Windows::Forms::TextBox^ efullnametxtbox;
	private: System::Windows::Forms::Panel^ efullnamepanel;
	private: System::Windows::Forms::Label^ workeridheaderlbl;
	private: System::Windows::Forms::TextBox^ workeridpasswordtxtbox;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ deleteuserbtn;
	private: System::Windows::Forms::Label^ closebtn;
	private: System::Windows::Forms::Label^ headerlbl;
	private: System::Windows::Forms::Label^ headernamelbl;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DeleteUserForm::typeid));
			this->efullnameheaderlbl = (gcnew System::Windows::Forms::Label());
			this->efullnametxtbox = (gcnew System::Windows::Forms::TextBox());
			this->efullnamepanel = (gcnew System::Windows::Forms::Panel());
			this->workeridheaderlbl = (gcnew System::Windows::Forms::Label());
			this->workeridpasswordtxtbox = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->deleteuserbtn = (gcnew System::Windows::Forms::Button());
			this->closebtn = (gcnew System::Windows::Forms::Label());
			this->headerlbl = (gcnew System::Windows::Forms::Label());
			this->headernamelbl = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// efullnameheaderlbl
			// 
			this->efullnameheaderlbl->AutoSize = true;
			this->efullnameheaderlbl->BackColor = System::Drawing::Color::Transparent;
			this->efullnameheaderlbl->Font = (gcnew System::Drawing::Font(L"Agency FB", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->efullnameheaderlbl->ForeColor = System::Drawing::SystemColors::GrayText;
			this->efullnameheaderlbl->Location = System::Drawing::Point(686, 315);
			this->efullnameheaderlbl->Name = L"efullnameheaderlbl";
			this->efullnameheaderlbl->Size = System::Drawing::Size(139, 24);
			this->efullnameheaderlbl->TabIndex = 0;
			this->efullnameheaderlbl->Text = L"Employee\'s Full name:";
			// 
			// efullnametxtbox
			// 
			this->efullnametxtbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->efullnametxtbox->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->efullnametxtbox->Location = System::Drawing::Point(690, 348);
			this->efullnametxtbox->Name = L"efullnametxtbox";
			this->efullnametxtbox->Size = System::Drawing::Size(243, 25);
			this->efullnametxtbox->TabIndex = 1;
			// 
			// efullnamepanel
			// 
			this->efullnamepanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->efullnamepanel->Location = System::Drawing::Point(690, 375);
			this->efullnamepanel->Name = L"efullnamepanel";
			this->efullnamepanel->Size = System::Drawing::Size(243, 6);
			this->efullnamepanel->TabIndex = 2;
			// 
			// workeridheaderlbl
			// 
			this->workeridheaderlbl->AutoSize = true;
			this->workeridheaderlbl->BackColor = System::Drawing::Color::Transparent;
			this->workeridheaderlbl->Font = (gcnew System::Drawing::Font(L"Agency FB", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->workeridheaderlbl->ForeColor = System::Drawing::SystemColors::GrayText;
			this->workeridheaderlbl->Location = System::Drawing::Point(686, 429);
			this->workeridheaderlbl->Name = L"workeridheaderlbl";
			this->workeridheaderlbl->Size = System::Drawing::Size(141, 24);
			this->workeridheaderlbl->TabIndex = 3;
			this->workeridheaderlbl->Text = L"Worker ID/Password:";
			// 
			// workeridpasswordtxtbox
			// 
			this->workeridpasswordtxtbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->workeridpasswordtxtbox->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->workeridpasswordtxtbox->Location = System::Drawing::Point(690, 465);
			this->workeridpasswordtxtbox->Name = L"workeridpasswordtxtbox";
			this->workeridpasswordtxtbox->Size = System::Drawing::Size(243, 25);
			this->workeridpasswordtxtbox->TabIndex = 4;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->panel1->Location = System::Drawing::Point(690, 492);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(243, 6);
			this->panel1->TabIndex = 3;
			// 
			// deleteuserbtn
			// 
			this->deleteuserbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->deleteuserbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->deleteuserbtn->FlatAppearance->BorderSize = 0;
			this->deleteuserbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deleteuserbtn->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deleteuserbtn->ForeColor = System::Drawing::Color::White;
			this->deleteuserbtn->Location = System::Drawing::Point(690, 534);
			this->deleteuserbtn->Name = L"deleteuserbtn";
			this->deleteuserbtn->Size = System::Drawing::Size(243, 57);
			this->deleteuserbtn->TabIndex = 5;
			this->deleteuserbtn->Text = L"Delete";
			this->deleteuserbtn->UseVisualStyleBackColor = false;
			this->deleteuserbtn->Click += gcnew System::EventHandler(this, &DeleteUserForm::deleteuserbtn_Click);
			this->deleteuserbtn->MouseEnter += gcnew System::EventHandler(this, &DeleteUserForm::deleteuserbtn_hover);
			this->deleteuserbtn->MouseLeave += gcnew System::EventHandler(this, &DeleteUserForm::deleteuserbtn_hoverout);
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
			this->closebtn->Location = System::Drawing::Point(978, 3);
			this->closebtn->Name = L"closebtn";
			this->closebtn->Size = System::Drawing::Size(26, 28);
			this->closebtn->TabIndex = 6;
			this->closebtn->Text = L"X";
			this->closebtn->Click += gcnew System::EventHandler(this, &DeleteUserForm::closebtn_Click);
			this->closebtn->MouseEnter += gcnew System::EventHandler(this, &DeleteUserForm::closebtn_hover);
			this->closebtn->MouseLeave += gcnew System::EventHandler(this, &DeleteUserForm::closebtn_hoverout);
			// 
			// headerlbl
			// 
			this->headerlbl->AutoSize = true;
			this->headerlbl->BackColor = System::Drawing::Color::Transparent;
			this->headerlbl->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->headerlbl->Location = System::Drawing::Point(130, 204);
			this->headerlbl->Name = L"headerlbl";
			this->headerlbl->Size = System::Drawing::Size(201, 24);
			this->headerlbl->TabIndex = 7;
			this->headerlbl->Text = L"It\'s been a journey,";
			// 
			// headernamelbl
			// 
			this->headernamelbl->AutoSize = true;
			this->headernamelbl->BackColor = System::Drawing::Color::Transparent;
			this->headernamelbl->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->headernamelbl->Location = System::Drawing::Point(129, 231);
			this->headernamelbl->Name = L"headernamelbl";
			this->headernamelbl->Size = System::Drawing::Size(0, 28);
			this->headernamelbl->TabIndex = 8;
			// 
			// DeleteUserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1008, 729);
			this->Controls->Add(this->headernamelbl);
			this->Controls->Add(this->headerlbl);
			this->Controls->Add(this->closebtn);
			this->Controls->Add(this->deleteuserbtn);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->workeridpasswordtxtbox);
			this->Controls->Add(this->workeridheaderlbl);
			this->Controls->Add(this->efullnamepanel);
			this->Controls->Add(this->efullnametxtbox);
			this->Controls->Add(this->efullnameheaderlbl);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"DeleteUserForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Delete User";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=syscommdb";
		String^ fullname;
		String^ Workeridpass;
	private: System::Void deleteuserbtn_Click(System::Object^ sender, System::EventArgs^ e) {


		fullname = efullnametxtbox->Text;
		Workeridpass = workeridpasswordtxtbox->Text;
		try {
			if (this->fullname->Length != 0 && this->Workeridpass->Length != 0) {


				if (MessageBox::Show("Do you really want to delete this user?", "Caution", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {



					MySqlConnection^ con = gcnew MySqlConnection(constr);
					MySqlCommand^ cmddud = gcnew MySqlCommand("delete from syscommtable where fullname = '" + fullname + "' and password = '" + Workeridpass + "' ", con);
					con->Open();
					MySqlDataReader^ dr;
					dr = cmddud->ExecuteReader();
					con->Close();

					try {
						MySqlCommand^ cmddut = gcnew MySqlCommand("DROP TABLE " + Workeridpass + " ", con);
						con->Open();
						MySqlDataReader^ drut;
						drut = cmddut->ExecuteReader();

						MessageBox::Show("User has been successfully deleted.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
						headernamelbl->Text = fullname + " Thank You!";

					}

					catch (Exception^ ex) {

						MessageBox::Show("No such user exist!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}


				}


			}
			else {

				MessageBox::Show("Please enter an input", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}


		}
		catch (Exception^ nodbconnected) {


			MessageBox::Show("Error! you are not connected to any database.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);

		}

	}
	private: System::Void closebtn_Click(System::Object^ sender, System::EventArgs^ e) {

		Form::Close();


	}
	//Delete button hover in effect - changes backcolor to new color as set from argb
	private: System::Void deleteuserbtn_hover(System::Object^ sender, System::EventArgs^ e) {

		deleteuserbtn->BackColor = System::Drawing::Color::FromArgb(123, 0, 30);

	}
    //Delete button hover out effect - Returns to default color
	private: System::Void deleteuserbtn_hoverout(System::Object^ sender, System::EventArgs^ e) {
		deleteuserbtn->BackColor = System::Drawing::Color::FromArgb(255,0,63);
	}
	//Close btn hover in effect
	private: System::Void closebtn_hover(System::Object^ sender, System::EventArgs^ e) {
		closebtn->ForeColor = System::Drawing::Color::FromArgb(123, 0, 30);
	}
    //Close btn hover in effect
    private: System::Void closebtn_hoverout(System::Object^ sender, System::EventArgs^ e) {
		closebtn->ForeColor = System::Drawing::Color::FromArgb(255, 0, 68);
	}
};
}
