#pragma once
#include "user.h"
using namespace std;

namespace HotelManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(User ^user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			lbUserInfo->Text = "ID= " + user->id + ", Name= " + user->name + ", email= " +user->email + ", address= " + user->address;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lbUserInfo;
	private: System::Windows::Forms::Panel^ Menu;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ Go_btn;



	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ tbDestination;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ exit_btn;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbUserInfo = (gcnew System::Windows::Forms::Label());
			this->Menu = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Go_btn = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tbDestination = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->exit_btn = (gcnew System::Windows::Forms::Button());
			this->Menu->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(282, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(738, 56);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome to Dashboard";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbUserInfo
			// 
			this->lbUserInfo->AutoSize = true;
			this->lbUserInfo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbUserInfo->Location = System::Drawing::Point(426, 83);
			this->lbUserInfo->Name = L"lbUserInfo";
			this->lbUserInfo->Size = System::Drawing::Size(86, 32);
			this->lbUserInfo->TabIndex = 1;
			this->lbUserInfo->Text = L"label2";
			// 
			// Menu
			// 
			this->Menu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->Menu->Controls->Add(this->panel1);
			this->Menu->Dock = System::Windows::Forms::DockStyle::Left;
			this->Menu->Location = System::Drawing::Point(0, 0);
			this->Menu->Name = L"Menu";
			this->Menu->Size = System::Drawing::Size(220, 510);
			this->Menu->TabIndex = 2;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(220, 100);
			this->panel1->TabIndex = 0;
			// 
			// Go_btn
			// 
			this->Go_btn->Location = System::Drawing::Point(785, 244);
			this->Go_btn->Name = L"Go_btn";
			this->Go_btn->Size = System::Drawing::Size(75, 23);
			this->Go_btn->TabIndex = 1;
			this->Go_btn->Text = L"Go";
			this->Go_btn->UseVisualStyleBackColor = true;
			this->Go_btn->Click += gcnew System::EventHandler(this, &MainForm::Go_btn_Click);
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(354, 213);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(148, 15);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"Enter Your Destination";
			// 
			// tbDestination
			// 
			this->tbDestination->Location = System::Drawing::Point(354, 246);
			this->tbDestination->Name = L"tbDestination";
			this->tbDestination->Size = System::Drawing::Size(189, 22);
			this->tbDestination->TabIndex = 4;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(563, 245);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 5;
			// 
			// exit_btn
			// 
			this->exit_btn->Location = System::Drawing::Point(577, 336);
			this->exit_btn->Name = L"exit_btn";
			this->exit_btn->Size = System::Drawing::Size(75, 23);
			this->exit_btn->TabIndex = 6;
			this->exit_btn->Text = L"Exit";
			this->exit_btn->UseVisualStyleBackColor = true;
			this->exit_btn->Click += gcnew System::EventHandler(this, &MainForm::exit_btn_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1072, 510);
			this->Controls->Add(this->exit_btn);
			this->Controls->Add(this->Go_btn);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->tbDestination);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Menu);
			this->Controls->Add(this->lbUserInfo);
			this->Controls->Add(this->label1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Menu->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		
public: User^ user = nullptr;
private: System::Void Go_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ destination = tbDestination->Text;
	String^ email = nullptr;

	if (destination->Length == 0) {
		MessageBox::Show("Please Enter Destination!");
			return;
	}

	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=Hotel_database;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "INSERT INTO User_Destination " +
			"(email, destination) VALUES " +
			"((SELECT (@email) FROM Users WHERE (email) = @email), @destination);";

		SqlCommand command(sqlQuery, % sqlConn);
		
		command.Parameters->AddWithValue("@destination", destination);
		command.Parameters->AddWithValue("@email", email);
		
	
		command.ExecuteNonQuery();
		user = gcnew User;
		user->email = email;
		user->destination = destination;
		

		this->Close();

	}
	catch (Exception^ ex) {
		MessageBox::Show("Destination not found", "Enter Destination", MessageBoxButtons::OK);
	}
}
private: System::Void exit_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
