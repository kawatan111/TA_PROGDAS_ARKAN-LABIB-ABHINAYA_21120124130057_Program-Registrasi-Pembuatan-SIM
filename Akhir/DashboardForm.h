#pragma once
#include <regex>
#include <msclr/marshal_cppstd.h>
#include "DaftarRiwayat.h"
#include "AccPage.h"
#include "FormData.h"
#include <vector>







namespace Akhir {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	public ref class DashboardForm : public System::Windows::Forms::Form
	{
	public:
		DashboardForm(void)
		{
			InitializeComponent();
		}
		List<FormData^>^ dataListPembuatan = gcnew List<FormData^>();
		List<FormData^>^ dataListPembaruan = gcnew List<FormData^>();
		List<FormData^>^ dataListPLPembuatan = gcnew List<FormData^>();
		List<FormData^>^ dataListPLPembaruan = gcnew List<FormData^>();
	private: System::Windows::Forms::Label^ label1;
	public:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button5;
	public:	
	protected:
		~DashboardForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ backButtonPembuatan;
	private: System::Windows::Forms::Button^ backButtonPembaruan;
	private: System::Windows::Forms::Label^ tempatlahirPembuatan;
	private: System::Windows::Forms::ComboBox^ pilihsimPembuatan;
	private: System::Windows::Forms::TextBox^ textBoxpekerjaanPembuatan;
	private: System::Windows::Forms::TextBox^ textBoxAlamatPembuatan;
	private: System::Windows::Forms::TextBox^ textBoxTempatlahirPembuatan;
	private: System::Windows::Forms::TextBox^ textboxNamaPembuatan;
	private: System::Windows::Forms::Label^ alamatPembuatan;
	private: System::Windows::Forms::Label^ pekerjaanPembuatan;
	private: System::Windows::Forms::ComboBox^ jeniskelPembuatan;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerPembuatan;
	private: System::Windows::Forms::CheckBox^ checkBoxPembuatan;
	private: System::Windows::Forms::Label^ namaPembuatan;
	private: System::Windows::Forms::Button^ nextbuttonPembuatan;
	private: System::Windows::Forms::Button^ buttonPembaruanNext;
	private: System::Windows::Forms::Label^ namaPembaruan;
	private: System::Windows::Forms::ComboBox^ simPembaruan;
	private: System::Windows::Forms::TextBox^ textBoxpekerjaanPembaruan;
	private: System::Windows::Forms::TextBox^ textBoxAlamatPembaruan;
	private: System::Windows::Forms::TextBox^ textboxTempatlahirPembaruan;
	private: System::Windows::Forms::TextBox^ textboxNamaPembaruan;
	private: System::Windows::Forms::Label^ alamatPembaruan;
	private: System::Windows::Forms::Label^ pekerjaanPembaruan;
	private: System::Windows::Forms::ComboBox^ jeniskelPembaruan;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerPembaruan;
	private: System::Windows::Forms::CheckBox^ checkPembaruan;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ tempatlahirPembaruan;
	private: System::Windows::Forms::TextBox^ textBoxsimlamaPembaruan;
	private: System::Windows::Forms::Label^ nomorsimPembaruan;
	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::Button^ buttonSubmitbaru;
	private: System::Windows::Forms::CheckBox^ checkBoxpertanyaanLanjutan;
	private: System::Windows::Forms::TextBox^ textBoxpertanyaanLanjutan5;
	private: System::Windows::Forms::Label^ pertanyaanLanjutan5;
	private: System::Windows::Forms::TextBox^ textBoxpertanyaanLanjutan4;
	private: System::Windows::Forms::Label^ pertanyaanLanjutan4;
	private: System::Windows::Forms::TextBox^ textBoxpertanyaanLanjutan3;
	private: System::Windows::Forms::Label^ pertanyaanLanjutan3;
	private: System::Windows::Forms::TextBox^ textBoxpertanyaanLanjutan2;
	private: System::Windows::Forms::Label^ pertanyaanLanjutan2;
	private: System::Windows::Forms::TextBox^ textBoxpertanyaanLanjutan1;
	private: System::Windows::Forms::Label^ pertanyaanLanjutan1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ buttonBackPertanyaanPembuatan;
	private: System::Windows::Forms::Button^ buttonBackPertanyaanPembaruan;
	private: System::Windows::Forms::Button^ button3;
	protected:
	private:
		System::ComponentModel::Container^ components;
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->backButtonPembuatan = (gcnew System::Windows::Forms::Button());
			this->backButtonPembaruan = (gcnew System::Windows::Forms::Button());
			this->pilihsimPembuatan = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxpekerjaanPembuatan = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAlamatPembuatan = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTempatlahirPembuatan = (gcnew System::Windows::Forms::TextBox());
			this->textboxNamaPembuatan = (gcnew System::Windows::Forms::TextBox());
			this->alamatPembuatan = (gcnew System::Windows::Forms::Label());
			this->pekerjaanPembuatan = (gcnew System::Windows::Forms::Label());
			this->jeniskelPembuatan = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePickerPembuatan = (gcnew System::Windows::Forms::DateTimePicker());
			this->checkBoxPembuatan = (gcnew System::Windows::Forms::CheckBox());
			this->tempatlahirPembuatan = (gcnew System::Windows::Forms::Label());
			this->namaPembuatan = (gcnew System::Windows::Forms::Label());
			this->nextbuttonPembuatan = (gcnew System::Windows::Forms::Button());
			this->buttonPembaruanNext = (gcnew System::Windows::Forms::Button());
			this->namaPembaruan = (gcnew System::Windows::Forms::Label());
			this->simPembaruan = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxpekerjaanPembaruan = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAlamatPembaruan = (gcnew System::Windows::Forms::TextBox());
			this->textboxTempatlahirPembaruan = (gcnew System::Windows::Forms::TextBox());
			this->textboxNamaPembaruan = (gcnew System::Windows::Forms::TextBox());
			this->alamatPembaruan = (gcnew System::Windows::Forms::Label());
			this->pekerjaanPembaruan = (gcnew System::Windows::Forms::Label());
			this->jeniskelPembaruan = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePickerPembaruan = (gcnew System::Windows::Forms::DateTimePicker());
			this->checkPembaruan = (gcnew System::Windows::Forms::CheckBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tempatlahirPembaruan = (gcnew System::Windows::Forms::Label());
			this->textBoxsimlamaPembaruan = (gcnew System::Windows::Forms::TextBox());
			this->nomorsimPembaruan = (gcnew System::Windows::Forms::Label());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->buttonSubmitbaru = (gcnew System::Windows::Forms::Button());
			this->checkBoxpertanyaanLanjutan = (gcnew System::Windows::Forms::CheckBox());
			this->textBoxpertanyaanLanjutan5 = (gcnew System::Windows::Forms::TextBox());
			this->pertanyaanLanjutan5 = (gcnew System::Windows::Forms::Label());
			this->textBoxpertanyaanLanjutan4 = (gcnew System::Windows::Forms::TextBox());
			this->pertanyaanLanjutan4 = (gcnew System::Windows::Forms::Label());
			this->textBoxpertanyaanLanjutan3 = (gcnew System::Windows::Forms::TextBox());
			this->pertanyaanLanjutan3 = (gcnew System::Windows::Forms::Label());
			this->textBoxpertanyaanLanjutan2 = (gcnew System::Windows::Forms::TextBox());
			this->pertanyaanLanjutan2 = (gcnew System::Windows::Forms::Label());
			this->textBoxpertanyaanLanjutan1 = (gcnew System::Windows::Forms::TextBox());
			this->pertanyaanLanjutan1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->buttonBackPertanyaanPembuatan = (gcnew System::Windows::Forms::Button());
			this->buttonBackPertanyaanPembaruan = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Wheat;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(360, 157);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(182, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"1. Pembuatan Lisensi Mengemudi";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &DashboardForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Wheat;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(360, 200);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(182, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"2. Pembaruan Lisensi Mengemudi";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &DashboardForm::button2_Click);
			// 
			// backButtonPembuatan
			// 
			this->backButtonPembuatan->BackColor = System::Drawing::Color::Wheat;
			this->backButtonPembuatan->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backButtonPembuatan->Location = System::Drawing::Point(18, 327);
			this->backButtonPembuatan->Name = L"backButtonPembuatan";
			this->backButtonPembuatan->Size = System::Drawing::Size(75, 23);
			this->backButtonPembuatan->TabIndex = 8;
			this->backButtonPembuatan->Text = L"Kembali";
			this->backButtonPembuatan->UseVisualStyleBackColor = false;
			this->backButtonPembuatan->Visible = false;
			this->backButtonPembuatan->Click += gcnew System::EventHandler(this, &DashboardForm::backButton1_Click);
			// 
			// backButtonPembaruan
			// 
			this->backButtonPembaruan->BackColor = System::Drawing::Color::Wheat;
			this->backButtonPembaruan->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backButtonPembaruan->Location = System::Drawing::Point(70, 366);
			this->backButtonPembaruan->Name = L"backButtonPembaruan";
			this->backButtonPembaruan->Size = System::Drawing::Size(75, 31);
			this->backButtonPembaruan->TabIndex = 9;
			this->backButtonPembaruan->Text = L"Kembali";
			this->backButtonPembaruan->UseVisualStyleBackColor = false;
			this->backButtonPembaruan->Visible = false;
			this->backButtonPembaruan->Click += gcnew System::EventHandler(this, &DashboardForm::backButton2_Click);
			// 
			// pilihsimPembuatan
			// 
			this->pilihsimPembuatan->AllowDrop = true;
			this->pilihsimPembuatan->BackColor = System::Drawing::SystemColors::Info;
			this->pilihsimPembuatan->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pilihsimPembuatan->FormattingEnabled = true;
			this->pilihsimPembuatan->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"SIM A", L"SIM B", L"SIM C" });
			this->pilihsimPembuatan->Location = System::Drawing::Point(18, 234);
			this->pilihsimPembuatan->Name = L"pilihsimPembuatan";
			this->pilihsimPembuatan->Size = System::Drawing::Size(152, 21);
			this->pilihsimPembuatan->TabIndex = 26;
			this->pilihsimPembuatan->Text = L"Pilih SIM yang anda mau";
			this->pilihsimPembuatan->Visible = false;
			// 
			// textBoxpekerjaanPembuatan
			// 
			this->textBoxpekerjaanPembuatan->BackColor = System::Drawing::SystemColors::Info;
			this->textBoxpekerjaanPembuatan->Location = System::Drawing::Point(18, 198);
			this->textBoxpekerjaanPembuatan->Name = L"textBoxpekerjaanPembuatan";
			this->textBoxpekerjaanPembuatan->Size = System::Drawing::Size(152, 20);
			this->textBoxpekerjaanPembuatan->TabIndex = 25;
			this->textBoxpekerjaanPembuatan->Visible = false;
			// 
			// textBoxAlamatPembuatan
			// 
			this->textBoxAlamatPembuatan->BackColor = System::Drawing::SystemColors::Info;
			this->textBoxAlamatPembuatan->Location = System::Drawing::Point(18, 162);
			this->textBoxAlamatPembuatan->Name = L"textBoxAlamatPembuatan";
			this->textBoxAlamatPembuatan->Size = System::Drawing::Size(152, 20);
			this->textBoxAlamatPembuatan->TabIndex = 24;
			this->textBoxAlamatPembuatan->Visible = false;
			// 
			// textBoxTempatlahirPembuatan
			// 
			this->textBoxTempatlahirPembuatan->BackColor = System::Drawing::SystemColors::Info;
			this->textBoxTempatlahirPembuatan->Location = System::Drawing::Point(18, 126);
			this->textBoxTempatlahirPembuatan->Name = L"textBoxTempatlahirPembuatan";
			this->textBoxTempatlahirPembuatan->Size = System::Drawing::Size(100, 20);
			this->textBoxTempatlahirPembuatan->TabIndex = 23;
			this->textBoxTempatlahirPembuatan->Visible = false;
			// 
			// textboxNamaPembuatan
			// 
			this->textboxNamaPembuatan->BackColor = System::Drawing::SystemColors::Info;
			this->textboxNamaPembuatan->Location = System::Drawing::Point(18, 90);
			this->textboxNamaPembuatan->Name = L"textboxNamaPembuatan";
			this->textboxNamaPembuatan->Size = System::Drawing::Size(152, 20);
			this->textboxNamaPembuatan->TabIndex = 22;
			this->textboxNamaPembuatan->Visible = false;
			// 
			// alamatPembuatan
			// 
			this->alamatPembuatan->AutoSize = true;
			this->alamatPembuatan->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->alamatPembuatan->Location = System::Drawing::Point(18, 146);
			this->alamatPembuatan->Name = L"alamatPembuatan";
			this->alamatPembuatan->Size = System::Drawing::Size(44, 13);
			this->alamatPembuatan->TabIndex = 19;
			this->alamatPembuatan->Text = L"Alamat";
			this->alamatPembuatan->Visible = false;
			// 
			// pekerjaanPembuatan
			// 
			this->pekerjaanPembuatan->AutoSize = true;
			this->pekerjaanPembuatan->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pekerjaanPembuatan->Location = System::Drawing::Point(18, 182);
			this->pekerjaanPembuatan->Name = L"pekerjaanPembuatan";
			this->pekerjaanPembuatan->Size = System::Drawing::Size(58, 13);
			this->pekerjaanPembuatan->TabIndex = 18;
			this->pekerjaanPembuatan->Text = L"Pekerjaan";
			this->pekerjaanPembuatan->Visible = false;
			// 
			// jeniskelPembuatan
			// 
			this->jeniskelPembuatan->AllowDrop = true;
			this->jeniskelPembuatan->BackColor = System::Drawing::SystemColors::Info;
			this->jeniskelPembuatan->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->jeniskelPembuatan->FormattingEnabled = true;
			this->jeniskelPembuatan->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Pria", L"Wanita" });
			this->jeniskelPembuatan->Location = System::Drawing::Point(18, 270);
			this->jeniskelPembuatan->Name = L"jeniskelPembuatan";
			this->jeniskelPembuatan->Size = System::Drawing::Size(152, 21);
			this->jeniskelPembuatan->TabIndex = 27;
			this->jeniskelPembuatan->Text = L"Jenis Kelamin";
			this->jeniskelPembuatan->Visible = false;
			// 
			// dateTimePickerPembuatan
			// 
			this->dateTimePickerPembuatan->CustomFormat = L"dd/MM/yyyy";
			this->dateTimePickerPembuatan->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePickerPembuatan->Location = System::Drawing::Point(124, 126);
			this->dateTimePickerPembuatan->Name = L"dateTimePickerPembuatan";
			this->dateTimePickerPembuatan->Size = System::Drawing::Size(200, 20);
			this->dateTimePickerPembuatan->TabIndex = 28;
			this->dateTimePickerPembuatan->Visible = false;
			// 
			// checkBoxPembuatan
			// 
			this->checkBoxPembuatan->BackColor = System::Drawing::Color::Transparent;
			this->checkBoxPembuatan->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBoxPembuatan->Location = System::Drawing::Point(18, 297);
			this->checkBoxPembuatan->Name = L"checkBoxPembuatan";
			this->checkBoxPembuatan->Size = System::Drawing::Size(370, 24);
			this->checkBoxPembuatan->TabIndex = 29;
			this->checkBoxPembuatan->Text = L"Apakah anda sudah yakin dengan data Anda\?";
			this->checkBoxPembuatan->UseVisualStyleBackColor = false;
			this->checkBoxPembuatan->Visible = false;
			// 
			// tempatlahirPembuatan
			// 
			this->tempatlahirPembuatan->AutoSize = true;
			this->tempatlahirPembuatan->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tempatlahirPembuatan->Location = System::Drawing::Point(18, 110);
			this->tempatlahirPembuatan->Name = L"tempatlahirPembuatan";
			this->tempatlahirPembuatan->Size = System::Drawing::Size(118, 13);
			this->tempatlahirPembuatan->TabIndex = 20;
			this->tempatlahirPembuatan->Text = L"Tempat, Tanggal lahir";
			this->tempatlahirPembuatan->Visible = false;
			// 
			// namaPembuatan
			// 
			this->namaPembuatan->AutoSize = true;
			this->namaPembuatan->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->namaPembuatan->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->namaPembuatan->Location = System::Drawing::Point(18, 71);
			this->namaPembuatan->Name = L"namaPembuatan";
			this->namaPembuatan->Size = System::Drawing::Size(38, 13);
			this->namaPembuatan->TabIndex = 31;
			this->namaPembuatan->Text = L"Nama";
			this->namaPembuatan->Visible = false;
			// 
			// nextbuttonPembuatan
			// 
			this->nextbuttonPembuatan->BackColor = System::Drawing::Color::Wheat;
			this->nextbuttonPembuatan->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nextbuttonPembuatan->Location = System::Drawing::Point(124, 326);
			this->nextbuttonPembuatan->Name = L"nextbuttonPembuatan";
			this->nextbuttonPembuatan->Size = System::Drawing::Size(75, 23);
			this->nextbuttonPembuatan->TabIndex = 33;
			this->nextbuttonPembuatan->Text = L"Lanjut";
			this->nextbuttonPembuatan->UseVisualStyleBackColor = false;
			this->nextbuttonPembuatan->Visible = false;
			this->nextbuttonPembuatan->Click += gcnew System::EventHandler(this, &DashboardForm::nextbuttonPembuatan_Click);
			// 
			// buttonPembaruanNext
			// 
			this->buttonPembaruanNext->BackColor = System::Drawing::Color::Wheat;
			this->buttonPembaruanNext->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPembaruanNext->Location = System::Drawing::Point(187, 366);
			this->buttonPembaruanNext->Name = L"buttonPembaruanNext";
			this->buttonPembaruanNext->Size = System::Drawing::Size(75, 31);
			this->buttonPembaruanNext->TabIndex = 34;
			this->buttonPembaruanNext->Text = L"Lanjut";
			this->buttonPembaruanNext->UseVisualStyleBackColor = false;
			this->buttonPembaruanNext->Visible = false;
			this->buttonPembaruanNext->Click += gcnew System::EventHandler(this, &DashboardForm::buttonPembaruanNext_Click);
			// 
			// namaPembaruan
			// 
			this->namaPembaruan->AutoSize = true;
			this->namaPembaruan->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->namaPembaruan->Location = System::Drawing::Point(58, 71);
			this->namaPembaruan->Name = L"namaPembaruan";
			this->namaPembaruan->Size = System::Drawing::Size(38, 13);
			this->namaPembaruan->TabIndex = 50;
			this->namaPembaruan->Text = L"Nama";
			this->namaPembaruan->Visible = false;
			// 
			// simPembaruan
			// 
			this->simPembaruan->AllowDrop = true;
			this->simPembaruan->BackColor = System::Drawing::SystemColors::Info;
			this->simPembaruan->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->simPembaruan->FormattingEnabled = true;
			this->simPembaruan->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"SIM A", L"SIM B", L"SIM C" });
			this->simPembaruan->Location = System::Drawing::Point(58, 251);
			this->simPembaruan->Name = L"simPembaruan";
			this->simPembaruan->Size = System::Drawing::Size(152, 21);
			this->simPembaruan->TabIndex = 46;
			this->simPembaruan->Text = L"Pilih SIM yang anda mau";
			this->simPembaruan->Visible = false;
			// 
			// textBoxpekerjaanPembaruan
			// 
			this->textBoxpekerjaanPembaruan->BackColor = System::Drawing::SystemColors::Info;
			this->textBoxpekerjaanPembaruan->Location = System::Drawing::Point(58, 198);
			this->textBoxpekerjaanPembaruan->Name = L"textBoxpekerjaanPembaruan";
			this->textBoxpekerjaanPembaruan->Size = System::Drawing::Size(152, 20);
			this->textBoxpekerjaanPembaruan->TabIndex = 45;
			this->textBoxpekerjaanPembaruan->Visible = false;
			// 
			// textBoxAlamatPembaruan
			// 
			this->textBoxAlamatPembaruan->BackColor = System::Drawing::SystemColors::Info;
			this->textBoxAlamatPembaruan->Location = System::Drawing::Point(58, 162);
			this->textBoxAlamatPembaruan->Name = L"textBoxAlamatPembaruan";
			this->textBoxAlamatPembaruan->Size = System::Drawing::Size(152, 20);
			this->textBoxAlamatPembaruan->TabIndex = 44;
			this->textBoxAlamatPembaruan->Visible = false;
			// 
			// textboxTempatlahirPembaruan
			// 
			this->textboxTempatlahirPembaruan->BackColor = System::Drawing::SystemColors::Info;
			this->textboxTempatlahirPembaruan->Location = System::Drawing::Point(58, 126);
			this->textboxTempatlahirPembaruan->Name = L"textboxTempatlahirPembaruan";
			this->textboxTempatlahirPembaruan->Size = System::Drawing::Size(100, 20);
			this->textboxTempatlahirPembaruan->TabIndex = 43;
			this->textboxTempatlahirPembaruan->Visible = false;
			// 
			// textboxNamaPembaruan
			// 
			this->textboxNamaPembaruan->BackColor = System::Drawing::SystemColors::Info;
			this->textboxNamaPembaruan->Location = System::Drawing::Point(58, 90);
			this->textboxNamaPembaruan->Name = L"textboxNamaPembaruan";
			this->textboxNamaPembaruan->Size = System::Drawing::Size(152, 20);
			this->textboxNamaPembaruan->TabIndex = 42;
			this->textboxNamaPembaruan->Visible = false;
			// 
			// alamatPembaruan
			// 
			this->alamatPembaruan->AutoSize = true;
			this->alamatPembaruan->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->alamatPembaruan->Location = System::Drawing::Point(58, 146);
			this->alamatPembaruan->Name = L"alamatPembaruan";
			this->alamatPembaruan->Size = System::Drawing::Size(44, 13);
			this->alamatPembaruan->TabIndex = 40;
			this->alamatPembaruan->Text = L"Alamat";
			this->alamatPembaruan->Visible = false;
			// 
			// pekerjaanPembaruan
			// 
			this->pekerjaanPembaruan->AutoSize = true;
			this->pekerjaanPembaruan->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pekerjaanPembaruan->Location = System::Drawing::Point(58, 182);
			this->pekerjaanPembaruan->Name = L"pekerjaanPembaruan";
			this->pekerjaanPembaruan->Size = System::Drawing::Size(58, 13);
			this->pekerjaanPembaruan->TabIndex = 39;
			this->pekerjaanPembaruan->Text = L"Pekerjaan";
			this->pekerjaanPembaruan->Visible = false;
			// 
			// jeniskelPembaruan
			// 
			this->jeniskelPembaruan->AllowDrop = true;
			this->jeniskelPembaruan->BackColor = System::Drawing::SystemColors::Info;
			this->jeniskelPembaruan->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->jeniskelPembaruan->FormattingEnabled = true;
			this->jeniskelPembaruan->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Pria", L"Wanita" });
			this->jeniskelPembaruan->Location = System::Drawing::Point(58, 224);
			this->jeniskelPembaruan->Name = L"jeniskelPembaruan";
			this->jeniskelPembaruan->Size = System::Drawing::Size(152, 21);
			this->jeniskelPembaruan->TabIndex = 47;
			this->jeniskelPembaruan->Text = L"Jenis Kelamin";
			this->jeniskelPembaruan->Visible = false;
			// 
			// dateTimePickerPembaruan
			// 
			this->dateTimePickerPembaruan->CalendarMonthBackground = System::Drawing::SystemColors::Info;
			this->dateTimePickerPembaruan->CalendarTitleBackColor = System::Drawing::SystemColors::Info;
			this->dateTimePickerPembaruan->CustomFormat = L"dd/MM/yyyy";
			this->dateTimePickerPembaruan->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePickerPembaruan->Location = System::Drawing::Point(164, 126);
			this->dateTimePickerPembaruan->Name = L"dateTimePickerPembaruan";
			this->dateTimePickerPembaruan->Size = System::Drawing::Size(200, 20);
			this->dateTimePickerPembaruan->TabIndex = 48;
			this->dateTimePickerPembaruan->Visible = false;
			// 
			// checkPembaruan
			// 
			this->checkPembaruan->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkPembaruan->Location = System::Drawing::Point(58, 327);
			this->checkPembaruan->Name = L"checkPembaruan";
			this->checkPembaruan->Size = System::Drawing::Size(330, 24);
			this->checkPembaruan->TabIndex = 49;
			this->checkPembaruan->Text = L"Apakah anda sudah yakin dengan data Anda\?";
			this->checkPembaruan->Visible = false;
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(62, 89);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(200, 23);
			this->label8->TabIndex = 37;
			this->label8->Text = L"New Label 1";
			this->label8->Visible = false;
			// 
			// tempatlahirPembaruan
			// 
			this->tempatlahirPembaruan->AutoSize = true;
			this->tempatlahirPembaruan->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tempatlahirPembaruan->Location = System::Drawing::Point(58, 110);
			this->tempatlahirPembaruan->Name = L"tempatlahirPembaruan";
			this->tempatlahirPembaruan->Size = System::Drawing::Size(118, 13);
			this->tempatlahirPembaruan->TabIndex = 41;
			this->tempatlahirPembaruan->Text = L"Tempat, Tanggal lahir";
			this->tempatlahirPembaruan->Visible = false;
			// 
			// textBoxsimlamaPembaruan
			// 
			this->textBoxsimlamaPembaruan->BackColor = System::Drawing::SystemColors::Info;
			this->textBoxsimlamaPembaruan->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxsimlamaPembaruan->Location = System::Drawing::Point(58, 301);
			this->textBoxsimlamaPembaruan->Name = L"textBoxsimlamaPembaruan";
			this->textBoxsimlamaPembaruan->Size = System::Drawing::Size(100, 22);
			this->textBoxsimlamaPembaruan->TabIndex = 52;
			this->textBoxsimlamaPembaruan->Visible = false;
			// 
			// nomorsimPembaruan
			// 
			this->nomorsimPembaruan->AutoSize = true;
			this->nomorsimPembaruan->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nomorsimPembaruan->Location = System::Drawing::Point(58, 285);
			this->nomorsimPembaruan->Name = L"nomorsimPembaruan";
			this->nomorsimPembaruan->Size = System::Drawing::Size(95, 13);
			this->nomorsimPembaruan->TabIndex = 51;
			this->nomorsimPembaruan->Text = L"Nomor SIM lama";
			this->nomorsimPembaruan->Visible = false;
			// 
			// buttonExit
			// 
			this->buttonExit->BackColor = System::Drawing::Color::Wheat;
			this->buttonExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonExit->Location = System::Drawing::Point(415, 262);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(75, 23);
			this->buttonExit->TabIndex = 53;
			this->buttonExit->Text = L"Keluar";
			this->buttonExit->UseVisualStyleBackColor = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &DashboardForm::buttonExit_Click);
			// 
			// buttonSubmitbaru
			// 
			this->buttonSubmitbaru->BackColor = System::Drawing::Color::Wheat;
			this->buttonSubmitbaru->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSubmitbaru->Location = System::Drawing::Point(402, 345);
			this->buttonSubmitbaru->Name = L"buttonSubmitbaru";
			this->buttonSubmitbaru->Size = System::Drawing::Size(173, 23);
			this->buttonSubmitbaru->TabIndex = 65;
			this->buttonSubmitbaru->Text = L"Submit PendaftaranPembaruan";
			this->buttonSubmitbaru->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonSubmitbaru->UseVisualStyleBackColor = false;
			this->buttonSubmitbaru->Visible = false;
			this->buttonSubmitbaru->Click += gcnew System::EventHandler(this, &DashboardForm::buttonBaruSubmit_Click);
			// 
			// checkBoxpertanyaanLanjutan
			// 
			this->checkBoxpertanyaanLanjutan->AutoSize = true;
			this->checkBoxpertanyaanLanjutan->Location = System::Drawing::Point(188, 322);
			this->checkBoxpertanyaanLanjutan->Name = L"checkBoxpertanyaanLanjutan";
			this->checkBoxpertanyaanLanjutan->Size = System::Drawing::Size(220, 17);
			this->checkBoxpertanyaanLanjutan->TabIndex = 64;
			this->checkBoxpertanyaanLanjutan->Text = L"Saya sudah yakin dengan jawaban saya.";
			this->checkBoxpertanyaanLanjutan->UseVisualStyleBackColor = true;
			this->checkBoxpertanyaanLanjutan->Visible = false;
			// 
			// textBoxpertanyaanLanjutan5
			// 
			this->textBoxpertanyaanLanjutan5->Location = System::Drawing::Point(188, 282);
			this->textBoxpertanyaanLanjutan5->Name = L"textBoxpertanyaanLanjutan5";
			this->textBoxpertanyaanLanjutan5->Size = System::Drawing::Size(584, 20);
			this->textBoxpertanyaanLanjutan5->TabIndex = 63;
			this->textBoxpertanyaanLanjutan5->Visible = false;
			// 
			// pertanyaanLanjutan5
			// 
			this->pertanyaanLanjutan5->AutoSize = true;
			this->pertanyaanLanjutan5->Location = System::Drawing::Point(188, 265);
			this->pertanyaanLanjutan5->Name = L"pertanyaanLanjutan5";
			this->pertanyaanLanjutan5->Size = System::Drawing::Size(469, 13);
			this->pertanyaanLanjutan5->TabIndex = 62;
			this->pertanyaanLanjutan5->Text = L"Siapa yang harus didahulukan ketika ada Ambulance, Pemadam Kebakaran, dan Mobil P"
				L"residen\?";
			this->pertanyaanLanjutan5->Visible = false;
			// 
			// textBoxpertanyaanLanjutan4
			// 
			this->textBoxpertanyaanLanjutan4->Location = System::Drawing::Point(188, 234);
			this->textBoxpertanyaanLanjutan4->Name = L"textBoxpertanyaanLanjutan4";
			this->textBoxpertanyaanLanjutan4->Size = System::Drawing::Size(584, 20);
			this->textBoxpertanyaanLanjutan4->TabIndex = 61;
			this->textBoxpertanyaanLanjutan4->Visible = false;
			// 
			// pertanyaanLanjutan4
			// 
			this->pertanyaanLanjutan4->AutoSize = true;
			this->pertanyaanLanjutan4->Location = System::Drawing::Point(188, 217);
			this->pertanyaanLanjutan4->Name = L"pertanyaanLanjutan4";
			this->pertanyaanLanjutan4->Size = System::Drawing::Size(280, 13);
			this->pertanyaanLanjutan4->TabIndex = 60;
			this->pertanyaanLanjutan4->Text = L"Apa yang anda harus lakukan ketika ingin berbelok arah\?";
			this->pertanyaanLanjutan4->Visible = false;
			// 
			// textBoxpertanyaanLanjutan3
			// 
			this->textBoxpertanyaanLanjutan3->Location = System::Drawing::Point(189, 181);
			this->textBoxpertanyaanLanjutan3->Name = L"textBoxpertanyaanLanjutan3";
			this->textBoxpertanyaanLanjutan3->Size = System::Drawing::Size(583, 20);
			this->textBoxpertanyaanLanjutan3->TabIndex = 59;
			this->textBoxpertanyaanLanjutan3->Visible = false;
			// 
			// pertanyaanLanjutan3
			// 
			this->pertanyaanLanjutan3->AutoSize = true;
			this->pertanyaanLanjutan3->Location = System::Drawing::Point(189, 164);
			this->pertanyaanLanjutan3->Name = L"pertanyaanLanjutan3";
			this->pertanyaanLanjutan3->Size = System::Drawing::Size(468, 13);
			this->pertanyaanLanjutan3->TabIndex = 58;
			this->pertanyaanLanjutan3->Text = L"Apakah menggunakan helm itu wajib hukumnya ketika menggunakan motor\? Apakah alasa"
				L"nnya\?";
			this->pertanyaanLanjutan3->Visible = false;
			// 
			// textBoxpertanyaanLanjutan2
			// 
			this->textBoxpertanyaanLanjutan2->Location = System::Drawing::Point(188, 128);
			this->textBoxpertanyaanLanjutan2->Name = L"textBoxpertanyaanLanjutan2";
			this->textBoxpertanyaanLanjutan2->Size = System::Drawing::Size(584, 20);
			this->textBoxpertanyaanLanjutan2->TabIndex = 57;
			this->textBoxpertanyaanLanjutan2->Visible = false;
			// 
			// pertanyaanLanjutan2
			// 
			this->pertanyaanLanjutan2->AutoSize = true;
			this->pertanyaanLanjutan2->Location = System::Drawing::Point(188, 111);
			this->pertanyaanLanjutan2->Name = L"pertanyaanLanjutan2";
			this->pertanyaanLanjutan2->Size = System::Drawing::Size(387, 13);
			this->pertanyaanLanjutan2->TabIndex = 56;
			this->pertanyaanLanjutan2->Text = L"Apa yang anda lakukan ketika lampu merah berwarna merah, hijau, dan kuning\?";
			this->pertanyaanLanjutan2->Visible = false;
			// 
			// textBoxpertanyaanLanjutan1
			// 
			this->textBoxpertanyaanLanjutan1->Location = System::Drawing::Point(189, 81);
			this->textBoxpertanyaanLanjutan1->Name = L"textBoxpertanyaanLanjutan1";
			this->textBoxpertanyaanLanjutan1->Size = System::Drawing::Size(583, 20);
			this->textBoxpertanyaanLanjutan1->TabIndex = 55;
			this->textBoxpertanyaanLanjutan1->Visible = false;
			// 
			// pertanyaanLanjutan1
			// 
			this->pertanyaanLanjutan1->AutoSize = true;
			this->pertanyaanLanjutan1->Location = System::Drawing::Point(189, 64);
			this->pertanyaanLanjutan1->Name = L"pertanyaanLanjutan1";
			this->pertanyaanLanjutan1->Size = System::Drawing::Size(277, 13);
			this->pertanyaanLanjutan1->TabIndex = 54;
			this->pertanyaanLanjutan1->Text = L"Sudah berapa lama anda mengendarai kendaraan anda\?";
			this->pertanyaanLanjutan1->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(160, 24);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(646, 30);
			this->label6->TabIndex = 66;
			this->label6->Text = L"Selamat Datang di Sistem Registrasi Pembuatan/Pembaruan SIM";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(330, 123);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(232, 21);
			this->label7->TabIndex = 67;
			this->label7->Text = L"Silahkan pilih kebutuhan anda :";
			// 
			// buttonBackPertanyaanPembuatan
			// 
			this->buttonBackPertanyaanPembuatan->BackColor = System::Drawing::Color::Wheat;
			this->buttonBackPertanyaanPembuatan->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonBackPertanyaanPembuatan->Location = System::Drawing::Point(289, 345);
			this->buttonBackPertanyaanPembuatan->Name = L"buttonBackPertanyaanPembuatan";
			this->buttonBackPertanyaanPembuatan->Size = System::Drawing::Size(75, 23);
			this->buttonBackPertanyaanPembuatan->TabIndex = 68;
			this->buttonBackPertanyaanPembuatan->Text = L"Kembali";
			this->buttonBackPertanyaanPembuatan->UseVisualStyleBackColor = false;
			this->buttonBackPertanyaanPembuatan->Visible = false;
			this->buttonBackPertanyaanPembuatan->Click += gcnew System::EventHandler(this, &DashboardForm::buttonbackPertanyaanPembuatan_Click);
			// 
			// buttonBackPertanyaanPembaruan
			// 
			this->buttonBackPertanyaanPembaruan->BackColor = System::Drawing::Color::Wheat;
			this->buttonBackPertanyaanPembaruan->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonBackPertanyaanPembaruan->Location = System::Drawing::Point(187, 345);
			this->buttonBackPertanyaanPembaruan->Name = L"buttonBackPertanyaanPembaruan";
			this->buttonBackPertanyaanPembaruan->Size = System::Drawing::Size(75, 23);
			this->buttonBackPertanyaanPembaruan->TabIndex = 69;
			this->buttonBackPertanyaanPembaruan->Text = L"Kembali";
			this->buttonBackPertanyaanPembaruan->UseVisualStyleBackColor = false;
			this->buttonBackPertanyaanPembaruan->Visible = false;
			this->buttonBackPertanyaanPembaruan->Click += gcnew System::EventHandler(this, &DashboardForm::buttonbackPertanyaanPembaruan_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Wheat;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(360, 232);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(182, 23);
			this->button3->TabIndex = 70;
			this->button3->Text = L"3. Cek Riwayat Pendaftaran";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &DashboardForm::cekRiwayatButton_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Wheat;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(592, 345);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(180, 23);
			this->button4->TabIndex = 71;
			this->button4->Text = L"Submit Pendaftaran Pembuatan";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &DashboardForm::buttonBuatSubmit_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Wheat;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(21, 375);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(127, 23);
			this->button5->TabIndex = 72;
			this->button5->Text = L"Login sebagai operator";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &DashboardForm::OperatorButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(301, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(322, 30);
			this->label1->TabIndex = 73;
			this->label1->Text = L"Isi Pendaftaran Pembuatan SIM";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(301, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(322, 30);
			this->label2->TabIndex = 74;
			this->label2->Text = L"Isi Pendaftaran Pembaruan SIM";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(301, 34);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(243, 30);
			this->label3->TabIndex = 75;
			this->label3->Text = L"Isi Pertanyaan Lanjutan";
			this->label3->Visible = false;
			// 
			// DashboardForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Khaki;
			this->ClientSize = System::Drawing::Size(987, 484);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->buttonBackPertanyaanPembaruan);
			this->Controls->Add(this->buttonBackPertanyaanPembuatan);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->buttonSubmitbaru);
			this->Controls->Add(this->checkBoxpertanyaanLanjutan);
			this->Controls->Add(this->textBoxpertanyaanLanjutan5);
			this->Controls->Add(this->pertanyaanLanjutan5);
			this->Controls->Add(this->textBoxpertanyaanLanjutan4);
			this->Controls->Add(this->pertanyaanLanjutan4);
			this->Controls->Add(this->textBoxpertanyaanLanjutan3);
			this->Controls->Add(this->pertanyaanLanjutan3);
			this->Controls->Add(this->textBoxpertanyaanLanjutan2);
			this->Controls->Add(this->pertanyaanLanjutan2);
			this->Controls->Add(this->textBoxpertanyaanLanjutan1);
			this->Controls->Add(this->pertanyaanLanjutan1);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->textBoxsimlamaPembaruan);
			this->Controls->Add(this->nomorsimPembaruan);
			this->Controls->Add(this->namaPembaruan);
			this->Controls->Add(this->simPembaruan);
			this->Controls->Add(this->textBoxpekerjaanPembaruan);
			this->Controls->Add(this->textBoxAlamatPembaruan);
			this->Controls->Add(this->textboxTempatlahirPembaruan);
			this->Controls->Add(this->textboxNamaPembaruan);
			this->Controls->Add(this->alamatPembaruan);
			this->Controls->Add(this->pekerjaanPembaruan);
			this->Controls->Add(this->jeniskelPembaruan);
			this->Controls->Add(this->dateTimePickerPembaruan);
			this->Controls->Add(this->checkPembaruan);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->tempatlahirPembaruan);
			this->Controls->Add(this->buttonPembaruanNext);
			this->Controls->Add(this->nextbuttonPembuatan);
			this->Controls->Add(this->namaPembuatan);
			this->Controls->Add(this->pilihsimPembuatan);
			this->Controls->Add(this->textBoxpekerjaanPembuatan);
			this->Controls->Add(this->textBoxAlamatPembuatan);
			this->Controls->Add(this->textBoxTempatlahirPembuatan);
			this->Controls->Add(this->textboxNamaPembuatan);
			this->Controls->Add(this->alamatPembuatan);
			this->Controls->Add(this->pekerjaanPembuatan);
			this->Controls->Add(this->jeniskelPembuatan);
			this->Controls->Add(this->dateTimePickerPembuatan);
			this->Controls->Add(this->checkBoxPembuatan);
			this->Controls->Add(this->backButtonPembaruan);
			this->Controls->Add(this->backButtonPembuatan);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tempatlahirPembuatan);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"DashboardForm";
			this->Text = L"DashboardForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		


#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->button1->Visible = false;
		this->button2->Visible = false;
		this->button3->Visible = false;
		this->button5->Visible = false;
		this->label6->Visible = false;
		this->label7->Visible = false;
		this->buttonExit->Visible = false;
		
		this->backButtonPembaruan->Visible = true;
		
		this->label2->Visible = true;
		this->textBoxsimlamaPembaruan->Visible = true;
		this->nomorsimPembaruan->Visible = true;
		this->buttonPembaruanNext->Visible = true;
		this->simPembaruan->Visible = true;
		this->textboxNamaPembaruan->Visible = true;
		this->textBoxAlamatPembaruan->Visible = true;
		this->textBoxpekerjaanPembaruan->Visible = true;
		this->textboxTempatlahirPembaruan->Visible = true;
		this->namaPembaruan->Visible = true;
		this->tempatlahirPembaruan->Visible = true;
		this->pekerjaanPembaruan->Visible = true;
		this->alamatPembaruan->Visible = true;
		this->jeniskelPembaruan->Visible = true;
		this->dateTimePickerPembaruan->Visible = true;
		this->checkPembaruan->Visible = true;
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->button1->Visible = false;
	this->button2->Visible = false;
	this->button3->Visible = false;
	this->button5->Visible = false;
	this->label6->Visible = false;
	this->label7-> Visible = false;
	this->buttonExit->Visible = false;
	this->backButtonPembuatan->Visible = true;

	this->label1->Visible = true;
	
	this->nextbuttonPembuatan->Visible = true;
	this->pilihsimPembuatan->Visible = true;
	this->textboxNamaPembuatan->Visible = true;
	this->textBoxAlamatPembuatan->Visible = true;
	this->textBoxpekerjaanPembuatan->Visible = true;
	this->textBoxTempatlahirPembuatan->Visible = true;
	this->namaPembuatan->Visible = true;
	this->tempatlahirPembuatan->Visible = true;
	this->pekerjaanPembuatan->Visible = true;
	this->alamatPembuatan->Visible = true;
	this->jeniskelPembuatan->Visible = true;
	this->dateTimePickerPembuatan->Visible = true;
	this->checkBoxPembuatan->Visible = true;
}

private: System::Void backButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->button1->Visible = true;
	this->button2->Visible = true;
	this->button3->Visible = true;
	this->button5->Visible = true;
	this->label6->Visible = true;
	this->label7->Visible = true;
	this->buttonExit->Visible = true;
	this->backButtonPembaruan->Visible = false;
	
	this->label2->Visible = false;
	this->textBoxsimlamaPembaruan->Visible = false;
	this->nomorsimPembaruan->Visible = false;
	this->buttonPembaruanNext->Visible = false;
	this->simPembaruan->Visible = false;
	this->textboxNamaPembaruan->Visible = false;
	this->textBoxAlamatPembaruan->Visible = false;
	this->textBoxpekerjaanPembaruan->Visible = false;
	this->textboxTempatlahirPembaruan->Visible = false;
	this->namaPembaruan->Visible = false;
	this->tempatlahirPembaruan->Visible = false;
	this->pekerjaanPembaruan->Visible = false;
	this->alamatPembaruan->Visible = false;
	this->jeniskelPembaruan->Visible = false;
	this->dateTimePickerPembaruan->Visible = false;
	this->checkPembaruan->Visible = false;
}

private: System::Void backButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->buttonExit->Visible = true;
	this->backButtonPembuatan->Visible = false;
	this->button1->Visible = true;
	this->button2->Visible = true;
	this->button3->Visible = true;
	this->button5->Visible = true;
	this->label6->Visible = true;
	this->label7->Visible = true;
	
	this->label1->Visible = false;
	this->nextbuttonPembuatan->Visible = false;
	this->pilihsimPembuatan->Visible = false;
	this->textboxNamaPembuatan->Visible = false;
	this->textBoxAlamatPembuatan->Visible = false;
	this->textBoxpekerjaanPembuatan->Visible = false;
	this->textBoxTempatlahirPembuatan->Visible = false;
	this->namaPembuatan->Visible = false;
	this->tempatlahirPembuatan->Visible = false;
	this->pekerjaanPembuatan->Visible = false;
	this->alamatPembuatan->Visible = false;
	this->jeniskelPembuatan->Visible = false;
	this->dateTimePickerPembuatan->Visible = false;
	this->checkBoxPembuatan->Visible = false;
}
	   private: std::string ConvertString(System::String^ str) {
		   return msclr::interop::marshal_as<std::string>(str);
	   }
	   private: System::Boolean ValidatePembaruanFields() {
		   std::regex alphabetRegex("^[A-Za-z ]+$");
		   std::regex numberRegex("^[0-9]{6}$");
		   String^ simlamaText = textBoxsimlamaPembaruan->Text;
		   for each (char c in simlamaText) {
			   if (!Char::IsDigit(c)) {
				   MessageBox::Show("SIM Lama must contain only numbers.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   return false;
			   }
		   }
		   return
			   std::regex_match(ConvertString(textboxNamaPembaruan->Text), alphabetRegex) &&
			   std::regex_match(ConvertString(textboxTempatlahirPembaruan->Text), alphabetRegex) &&
			   std::regex_match(ConvertString(textBoxAlamatPembaruan->Text), alphabetRegex) &&
			   std::regex_match(ConvertString(textBoxpekerjaanPembaruan->Text), alphabetRegex)&&
			   jeniskelPembaruan->SelectedIndex != -1 &&
			   simPembaruan->SelectedIndex != -1 &&
			   checkPembaruan->Checked;
			  
	   }
		private: System::Boolean ValidatePembuatanFields() {
			std::regex alphabetRegex("^[A-Za-z ]+$");

			return

				std::regex_match(ConvertString(textboxNamaPembuatan->Text), alphabetRegex) &&
				std::regex_match(ConvertString(textBoxTempatlahirPembuatan->Text), alphabetRegex) &&
				std::regex_match(ConvertString(textBoxAlamatPembuatan->Text), alphabetRegex) &&
				std::regex_match(ConvertString(textBoxpekerjaanPembuatan->Text), alphabetRegex) &&
				jeniskelPembuatan->SelectedIndex != -1 &&
				pilihsimPembuatan->SelectedIndex != -1 &&
				checkBoxPembuatan->Checked;
		}
		private: System::Boolean ValidatePertanyaanLanjutanFields() {
			std::regex alphabetRegex("^[A-Za-z ]+$");

			return
				std::regex_match(ConvertString(textBoxpertanyaanLanjutan2->Text), alphabetRegex) &&
				std::regex_match(ConvertString(textBoxpertanyaanLanjutan3->Text), alphabetRegex) &&
				std::regex_match(ConvertString(textBoxpertanyaanLanjutan4->Text), alphabetRegex) &&
				std::regex_match(ConvertString(textBoxpertanyaanLanjutan5->Text), alphabetRegex)
				;
		}
private: System::Void nextbuttonPembuatan_Click(System::Object^ sender, System::EventArgs^ e) {
	if (ValidatePembuatanFields()) {
		
		this->label3->Visible = true;
		this->textBoxpertanyaanLanjutan1->Visible = true;
		this->textBoxpertanyaanLanjutan2->Visible = true;
		this->textBoxpertanyaanLanjutan3->Visible = true;
		this->textBoxpertanyaanLanjutan4->Visible = true;
		this->textBoxpertanyaanLanjutan5->Visible = true;
		this->pertanyaanLanjutan1->Visible = true;
		this->pertanyaanLanjutan2->Visible = true;
		this->pertanyaanLanjutan3->Visible = true;
		this->pertanyaanLanjutan4->Visible = true;
		this->pertanyaanLanjutan5->Visible = true;
		this->buttonBackPertanyaanPembuatan->Visible = true;
		this->buttonSubmitbaru->Visible = false;
		this->button4->Visible = false;
		this->button4->Visible = true;
		this->backButtonPembuatan->Visible = false;
		this->label1->Visible = false;
		this->nextbuttonPembuatan->Visible = false;
		this->pilihsimPembuatan->Visible = false;
		this->textboxNamaPembuatan->Visible = false;
		this->textBoxAlamatPembuatan->Visible = false;
		this->textBoxpekerjaanPembuatan->Visible = false;
		this->textBoxTempatlahirPembuatan->Visible = false;
		this->namaPembuatan->Visible = false;
		this->tempatlahirPembuatan->Visible = false;
		this->pekerjaanPembuatan->Visible = false;
		this->alamatPembuatan->Visible = false;
		this->jeniskelPembuatan->Visible = false;
		this->dateTimePickerPembuatan->Visible = false;
		this->checkBoxPembuatan->Visible = false;
	}
	else {
		MessageBox::Show("Please fill in all fields and fill it correctly.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void buttonPembaruanNext_Click(System::Object^ sender, System::EventArgs^ e) {
	if (ValidatePembaruanFields()) {
		
		this->label3->Visible = true;
		this->textBoxpertanyaanLanjutan1->Visible = true;
		this->textBoxpertanyaanLanjutan2->Visible = true;
		this->textBoxpertanyaanLanjutan3->Visible = true;
		this->textBoxpertanyaanLanjutan4->Visible = true;
		this->textBoxpertanyaanLanjutan5->Visible = true;
		this->pertanyaanLanjutan1->Visible = true;
		this->pertanyaanLanjutan2->Visible = true;
		this->pertanyaanLanjutan3->Visible = true;
		this->pertanyaanLanjutan4->Visible = true;
		this->pertanyaanLanjutan5->Visible = true;
		this->buttonBackPertanyaanPembaruan->Visible = true;
		this->buttonSubmitbaru->Visible = true;
		this->button4->Visible = false;
		
		this->label2->Visible = false;
		this->backButtonPembaruan->Visible = false;
		this->textBoxsimlamaPembaruan->Visible = false;
		this->nomorsimPembaruan->Visible = false;
		this->buttonPembaruanNext->Visible = false;
		this->simPembaruan->Visible = false;
		this->textboxNamaPembaruan->Visible = false;
		this->textBoxAlamatPembaruan->Visible = false;
		this->textBoxpekerjaanPembaruan->Visible = false;
		this->textboxTempatlahirPembaruan->Visible = false;
		this->namaPembaruan->Visible = false;
		this->tempatlahirPembaruan->Visible = false;
		this->pekerjaanPembaruan->Visible = false;
		this->alamatPembaruan->Visible = false;
		this->jeniskelPembaruan->Visible = false;
		this->dateTimePickerPembaruan->Visible = false;
		this->checkPembaruan->Visible = false;
	}
	else {
		MessageBox::Show("Please fill in all fields and fill it correctly.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
	  private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e) {
		  Application::Exit();
	  }

	private: System::Void buttonbackPertanyaanPembuatan_Click(System::Object^ sender, System::EventArgs^ e) {
		this->nextbuttonPembuatan->Visible = true;
		this->pilihsimPembuatan->Visible = true;
		this->textboxNamaPembuatan->Visible = true;
		this->textBoxAlamatPembuatan->Visible = true;
		this->textBoxpekerjaanPembuatan->Visible = true;
		this->textBoxTempatlahirPembuatan->Visible = true;
		this->namaPembuatan->Visible = true;
		this->tempatlahirPembuatan->Visible = true;
		this->pekerjaanPembuatan->Visible = true;
		this->alamatPembuatan->Visible = true;
		this->jeniskelPembuatan->Visible = true;
		this->dateTimePickerPembuatan->Visible = true;
		this->checkBoxPembuatan->Visible = true;
		this->label1->Visible = true;

		this->backButtonPembaruan->Visible = false;
		this->textBoxsimlamaPembaruan->Visible = false;
		this->nomorsimPembaruan->Visible = false;
		this->buttonPembaruanNext->Visible = false;
		this->simPembaruan->Visible = false;
		this->textboxNamaPembaruan->Visible = false;
		this->textBoxAlamatPembaruan->Visible = false;
		this->textBoxpekerjaanPembaruan->Visible = false;
		this->textboxTempatlahirPembaruan->Visible = false;
		this->namaPembaruan->Visible = false;
		this->tempatlahirPembaruan->Visible = false;
		this->pekerjaanPembaruan->Visible = false;
		this->alamatPembaruan->Visible = false;
		this->jeniskelPembaruan->Visible = false;
		this->dateTimePickerPembaruan->Visible = false;
		this->checkPembaruan->Visible = false;

		this->buttonBackPertanyaanPembuatan->Visible = false;
		
		this->label3->Visible = false;
		this->textBoxpertanyaanLanjutan1->Visible = false;
		this->textBoxpertanyaanLanjutan2->Visible = false;
		this->textBoxpertanyaanLanjutan3->Visible = false;
		this->textBoxpertanyaanLanjutan4->Visible = false;
		this->textBoxpertanyaanLanjutan5->Visible = false;
		this->pertanyaanLanjutan1->Visible = false;
		this->pertanyaanLanjutan2->Visible = false;
		this->pertanyaanLanjutan3->Visible = false;
		this->pertanyaanLanjutan4->Visible = false;
		this->pertanyaanLanjutan5->Visible = false;
		
		this->buttonSubmitbaru->Visible = false;
		this->button4->Visible = false;
		this->backButtonPembuatan->Visible = true;
	}
	private: System::Void buttonbackPertanyaanPembaruan_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBoxsimlamaPembaruan->Visible = true;
		this->nomorsimPembaruan->Visible = true;
		this->buttonPembaruanNext->Visible = true;
		this->simPembaruan->Visible = true;
		this->textboxNamaPembaruan->Visible = true;
		this->textBoxAlamatPembaruan->Visible = true;
		this->textBoxpekerjaanPembaruan->Visible = true;
		this->textboxTempatlahirPembaruan->Visible = true;
		this->namaPembaruan->Visible = true;
		this->tempatlahirPembaruan->Visible = true;
		this->pekerjaanPembaruan->Visible = true;
		this->alamatPembaruan->Visible = true;
		this->jeniskelPembaruan->Visible = true;
		this->dateTimePickerPembaruan->Visible = true;
		this->checkPembaruan->Visible = true;
		this->label2->Visible = true;

		this->backButtonPembuatan->Visible = false;
		this->nextbuttonPembuatan->Visible = false;
		this->pilihsimPembuatan->Visible = false;
		this->textboxNamaPembuatan->Visible = false;
		this->textBoxAlamatPembuatan->Visible = false;
		this->textBoxpekerjaanPembuatan->Visible = false;
		this->textBoxTempatlahirPembuatan->Visible = false;
		this->namaPembuatan->Visible = false;
		this->tempatlahirPembuatan->Visible = false;
		this->pekerjaanPembuatan->Visible = false;
		this->alamatPembuatan->Visible = false;
		this->jeniskelPembuatan->Visible = false;
		this->dateTimePickerPembuatan->Visible = false;
		this->checkBoxPembuatan->Visible = false;

		
		
		this->label3->Visible = false;
		this->textBoxpertanyaanLanjutan1->Visible = false;
		this->textBoxpertanyaanLanjutan2->Visible = false;
		this->textBoxpertanyaanLanjutan3->Visible = false;
		this->textBoxpertanyaanLanjutan4->Visible = false;
		this->textBoxpertanyaanLanjutan5->Visible = false;
		this->pertanyaanLanjutan1->Visible = false;
		this->pertanyaanLanjutan2->Visible = false;
		this->pertanyaanLanjutan3->Visible = false;
		this->pertanyaanLanjutan4->Visible = false;
		this->pertanyaanLanjutan5->Visible = false;
		this->buttonBackPertanyaanPembaruan->Visible = false;
		this->buttonSubmitbaru->Visible = false;
		this->button4->Visible = false;
		this->backButtonPembaruan->Visible = true;
		   }

	     private: System::Void buttonBaruSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
			 if (dataListPembaruan->Count <3) {
				 if (ValidatePertanyaanLanjutanFields()) {

					 FormData^ dataPembaruan = gcnew FormData();
					 FormData^ dataPLPembaruan = gcnew FormData();
					 FormData^ dataRiwayatPembaruan = gcnew FormData();

					 
					 dataPembaruan->nama = textboxNamaPembaruan->Text;
					 dataPembaruan->tempatLahir = textboxTempatlahirPembaruan->Text;
					 dataPembaruan->alamat = textBoxAlamatPembaruan->Text;
					 dataPembaruan->pekerjaan = textBoxpekerjaanPembaruan->Text;
					 dataPembaruan->tanggalLahir = dateTimePickerPembaruan->Value;
					 dataPembaruan->jenisKelamin = jeniskelPembaruan->Text;
					 dataPembaruan->sim = simPembaruan->Text;
					 dataPembaruan->status = "Proses";

					 dataListPembaruan->Add(dataPembaruan);
					

					
					 dataPLPembaruan->PLbaru1 = textBoxpertanyaanLanjutan1->Text;
					 dataPLPembaruan->PLbaru2 = textBoxpertanyaanLanjutan2->Text;
					 dataPLPembaruan->PLbaru3 = textBoxpertanyaanLanjutan3->Text;
					 dataPLPembaruan->PLbaru4 = textBoxpertanyaanLanjutan4->Text;
					 dataPLPembaruan->PLbaru5 = textBoxpertanyaanLanjutan5->Text;
					 dataListPLPembaruan->Add(dataPLPembaruan);

				


					 MessageBox::Show("Data telah Tersimpan.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
					 ResetTextBoxes();
				 }
				 else {
					 MessageBox::Show("Tolong isi semua data dengan benar", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					 ResetTextBoxes();
				 }
			 }
			 else {
				 MessageBox::Show("Data sudah mencapai batas maksimal", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 ResetTextBoxes();
			 }
		   }

		   private: System::Void buttonBuatSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
			   if (dataListPembuatan->Count <3) {
				   if (ValidatePertanyaanLanjutanFields()) {
					   FormData^ dataPembuatan = gcnew FormData();
					   FormData^ dataPLPembuatan = gcnew FormData();

					 
					   dataPembuatan->nama = textboxNamaPembuatan->Text;
					   dataPembuatan->tempatLahir = textBoxTempatlahirPembuatan->Text;
					   dataPembuatan->alamat = textBoxAlamatPembuatan->Text;
					   dataPembuatan->pekerjaan = textBoxpekerjaanPembuatan->Text;
					   dataPembuatan->tanggalLahir = dateTimePickerPembuatan->Value;
					   dataPembuatan->jenisKelamin = jeniskelPembuatan->Text;
					   dataPembuatan->sim = pilihsimPembuatan->Text;
					   dataPembuatan->status = "Proses";
					   dataListPembuatan->Add(dataPembuatan);
					

					   
					   dataPLPembuatan->PLbuat1 = textBoxpertanyaanLanjutan1->Text;
					   dataPLPembuatan->PLbuat2 = textBoxpertanyaanLanjutan2->Text;
					   dataPLPembuatan->PLbuat3 = textBoxpertanyaanLanjutan3->Text;
					   dataPLPembuatan->PLbuat4 = textBoxpertanyaanLanjutan4->Text;
					   dataPLPembuatan->PLbuat5 = textBoxpertanyaanLanjutan5->Text;
					   dataListPLPembuatan->Add(dataPLPembuatan);
					   MessageBox::Show("Data Telah Tersimpan", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
					   ResetTextBoxes();
				   }
				   else {
					   MessageBox::Show("Tolong isi semua data dengan benar", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					   ResetTextBoxes();
				   }
			   }
			   else {
				   MessageBox::Show("Data sudah mencapai batas maksimal", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   ResetTextBoxes();
			   }
			  
		   }
				  private: void ResetTextBoxes() {
					 
					  textboxNamaPembuatan->Text = "";
					  textBoxTempatlahirPembuatan->Text = "";
					  textBoxAlamatPembuatan->Text = "";
					  textBoxpekerjaanPembuatan->Text = "";
					  textboxNamaPembaruan->Text = "";
					  textboxTempatlahirPembaruan->Text = "";
					  textBoxAlamatPembaruan->Text = "";
					  textBoxpekerjaanPembuatan->Text = "";
					  textBoxsimlamaPembaruan->Text = "";
					  textBoxpertanyaanLanjutan1->Text = "";
					  textBoxpertanyaanLanjutan2->Text = "";
					  textBoxpertanyaanLanjutan3->Text = "";
					  textBoxpertanyaanLanjutan4->Text = "";
					  textBoxpertanyaanLanjutan5->Text = "";
					
				  }
				  private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
					  MessageBox::Show("OK");
				  }

private: System::Void cekRiwayatButton_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	DaftarRiwayat^ daftarriwayatForm = gcnew DaftarRiwayat(this->dataListPembuatan, this->dataListPembaruan, this->dataListPLPembuatan, this->dataListPLPembaruan);
	daftarriwayatForm->Show();
}
private: System::Void OperatorButton_Click(System::Object^ sender, System::EventArgs^ e) {

		 
		   AccPage^ accPageForm = gcnew AccPage(this->dataListPembuatan, this->dataListPembaruan, this->dataListPLPembuatan, this->dataListPLPembaruan);
		   accPageForm->Show();
	   }

	};
	

}
