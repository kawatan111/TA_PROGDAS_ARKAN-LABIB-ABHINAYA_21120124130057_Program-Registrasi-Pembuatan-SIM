#pragma once
#include "DashboardForm.h"

namespace Akhir {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::TextBox^ textbox_username;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textbox_password;
	private: System::Windows::Forms::Button^ button_login;
	private: System::Windows::Forms::CheckBox^ checkBox1;


	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textbox_username = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textbox_password = (gcnew System::Windows::Forms::TextBox());
			this->button_login = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(424, 135);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Username";
			
			// 
			// textbox_username
			// 
			this->textbox_username->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textbox_username->BackColor = System::Drawing::SystemColors::Info;
			this->textbox_username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textbox_username->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textbox_username->ForeColor = System::Drawing::SystemColors::MenuText;
			this->textbox_username->Location = System::Drawing::Point(339, 163);
			this->textbox_username->Name = L"textbox_username";
			this->textbox_username->Size = System::Drawing::Size(265, 26);
			this->textbox_username->TabIndex = 2;
			this->textbox_username->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(424, 197);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password";
			// 
			// textbox_password
			// 
			this->textbox_password->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textbox_password->BackColor = System::Drawing::SystemColors::Info;
			this->textbox_password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textbox_password->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textbox_password->Location = System::Drawing::Point(339, 225);
			this->textbox_password->Name = L"textbox_password";
			this->textbox_password->Size = System::Drawing::Size(265, 26);
			this->textbox_password->TabIndex = 4;
			this->textbox_password->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button_login
			// 
			this->button_login->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button_login->BackColor = System::Drawing::Color::Wheat;
			this->button_login->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_login->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_login->Location = System::Drawing::Point(429, 300);
			this->button_login->Name = L"button_login";
			this->button_login->Size = System::Drawing::Size(92, 38);
			this->button_login->TabIndex = 5;
			this->button_login->Text = L"Login";
			this->button_login->UseVisualStyleBackColor = false;
			this->button_login->Click += gcnew System::EventHandler(this, &MyForm::button_login_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(384, 257);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(194, 29);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"Saya bukan Robot";
			this->checkBox1->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Khaki;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(974, 481);
			this->Controls->Add(this->button_login);
			this->Controls->Add(this->textbox_password);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textbox_username);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_login_Click(System::Object^ sender, System::EventArgs^ e) {
		Login();
	}
	private: System::Void Login() {
		String^ username = textbox_username->Text;
		String^ password = textbox_password->Text;
		
		if (!checkBox1->Checked) {
			MessageBox::Show("Please check the checkbox to proceed.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
			if (username == "admin" && password == "password") {
				MessageBox::Show("Login successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				this->Hide();
				DashboardForm^ dashboard = gcnew DashboardForm();
				dashboard->ShowDialog();
				this->Close();
			}
			else {
				MessageBox::Show("Invalid username or password.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		
		
		
	}
	};
}
