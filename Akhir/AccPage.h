#pragma once
#include "FormData.h"
#include "Detailjawaban.h"

namespace Akhir {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	/// <summary>
	/// Summary for AccPage
	/// </summary>
	public ref class AccPage : public System::Windows::Forms::Form
	{
	public:
		AccPage(List<FormData^>^ dataListPembuatan, 
			List<FormData^>^ dataListPembaruan,
			List<FormData^>^ dataListPLPembuatan,
			List<FormData^>^ dataListPLPembaruan)
		{
			InitializeComponent();
			

			this->dataListPembuatan = dataListPembuatan;
			this->dataListPembaruan = dataListPembaruan;
			this->dataListPLPembuatan = dataListPLPembuatan;
			this->dataListPLPembaruan = dataListPLPembaruan;
			PopulateListViewPembuatan();
			PopulateListViewPembaruan();
			
		}
		
	private: System::Windows::Forms::ListView^ listViewPembaruan;
	private: System::Windows::Forms::ListView^ listViewPembuatan;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::ColumnHeader^ columnHeader6;
	private: System::Windows::Forms::ColumnHeader^ columnHeader7;
	private: System::Windows::Forms::ColumnHeader^ columnHeaderNama;
	private: System::Windows::Forms::ColumnHeader^ columnHeaderTempatLahir;
	private: System::Windows::Forms::ColumnHeader^ columnHeaderAlamat;
	private: System::Windows::Forms::ColumnHeader^ columnHeaderPekerjaan;
	private: System::Windows::Forms::ColumnHeader^ columnHeaderTanggalLahir;
	private: System::Windows::Forms::ColumnHeader^ columnHeaderJenisKelamin;
	private: System::Windows::Forms::ColumnHeader^ columnHeaderSim;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;

	private: System::Windows::Forms::Button^ button12;

	private: System::Windows::Forms::Button^ button17;

		   List<FormData^>^ dataListPembuatan;
		   List<FormData^>^ dataListPembaruan;
		   List<FormData^>^ dataListPLPembuatan;
		   List<FormData^>^ dataListPLPembaruan;
		   
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button19;
		  
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AccPage()
		{
			if (components)
			{
				delete components;
			}
		}
	

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;



	private: System::Windows::Forms::Button^ button7;





	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		/// int index;
		/// 
		/// private:
	

		int checkIndex1() {
			int index;
			int count = dataListPembuatan->Count;

			if (count == 1) {
				index = 0;
			}

			if (count == 2) {
				index = 1;
			}

			if (count == 3) {
				index = 2;
			}
			return index;
		}
		int checkIndex2() {
			int index;
			int count = dataListPembuatan->Count;


			if (count == 2) {
				index = 0;
			}

			if (count == 3) {
				index = 1;
			}
			return index;
		}
		int checkIndex3() {
			int index;
			int count = dataListPembuatan->Count;


			if (count == 3) {
				index = 0;
			}
			return index;
		}
		
		
		System::ComponentModel::Container ^components;
		void button19_Click(System::Object^ sender, System::EventArgs^ e)
		{
			
			if (textBox1->Text == "correct_password")
			{
				
				label1->Visible = true;
				button1->Visible = true;
				button2->Visible = true;
				button3->Visible = true;
				button4->Visible = true;
				button5->Visible = true;
				button6->Visible = true;
				button7->Visible = true;
				
				button9->Visible = true;
				button10->Visible = true;
				
				button12->Visible = true;
				button13->Visible = true;
				button14->Visible = true;
				button15->Visible = true;
				
				button17->Visible = true;
				
				label2->Visible = true;
				label3->Visible = true;
				label4->Visible = false;
				listViewPembuatan->Visible = true;
				listViewPembaruan->Visible = true;
				button8->Visible = false;
				button19->Visible = false;
				textBox1->Visible = false;
				UpdateButtonVisibilityPembuatan();
				UpdateButtonVisibilityPembaruan();
			}
			else
			{
				MessageBox::Show("Incorrect credentials, please try again.");
			}
		}
		
		void PopulateListViewPembuatan()
		{
			listViewPembuatan->Items->Clear();
			for each (FormData ^ data in dataListPembuatan)
			{
				ListViewItem^ item = gcnew ListViewItem(data->nama);
				item->SubItems->Add(data->tempatLahir);
				item->SubItems->Add(data->alamat);
				item->SubItems->Add(data->pekerjaan);
				item->SubItems->Add(data->tanggalLahir.ToString());
				item->SubItems->Add(data->jenisKelamin);
				item->SubItems->Add(data->sim);
				listViewPembuatan->Items->Add(item);
			}
		}

		void PopulateListViewPembaruan()
		{
			listViewPembaruan->Items->Clear();
			for each (FormData ^ data in dataListPembaruan)
			{
				ListViewItem^ item = gcnew ListViewItem(data->nama);
				item->SubItems->Add(data->tempatLahir);
				item->SubItems->Add(data->alamat);
				item->SubItems->Add(data->pekerjaan);
				item->SubItems->Add(data->tanggalLahir.ToString());
				item->SubItems->Add(data->jenisKelamin);
				item->SubItems->Add(data->sim);
				listViewPembaruan->Items->Add(item);
			}
		}
		
		
		void UpdateButtonVisibilityPembuatan()
		{
			
			
			button2->Visible = false;
			button3->Visible = false;
			
			button7->Visible = false;
			
			button13->Visible = false;
			button14->Visible = false;
			button15->Visible = false;

			int count = dataListPembuatan->Count;

			if (count == 1)
			{
				
				button2->Visible = true;
				button15->Visible = true;

				
			}
			else if (count == 2)
			{
				
				button2->Visible = true;
				button15->Visible = true;
				button3->Visible = true;
				
				button14->Visible = true;
				
			}
			else if (count == 3)
			{
				button2->Visible = true;
				button15->Visible = true;
				button3->Visible = true;
				
				button14->Visible = true;
				button7->Visible = true;
				
				button13->Visible = true;
				
			}
		}
		void UpdateButtonVisibilityPembaruan()
		{
			
			button17->Visible = false;
			button9->Visible = false;
			
			button12->Visible = false;
			button6->Visible = false;
			
			button10->Visible = false;
			button5->Visible = false;

			int count = dataListPembaruan->Count;

			if (count == 1)
			{
				
				button17->Visible = true;
				button9->Visible = true;

				
			}
			else if (count == 2)
			{
				
				button17->Visible = true;
				button9->Visible = true;
				
				button12->Visible = true;
				button6->Visible = true;
				
			}
			else if (count == 3)
			{
				
				button17->Visible = true;
				button9->Visible = true;
				
				button12->Visible = true;
				button6->Visible = true;
				
				button10->Visible = true;
				button5->Visible = true;
				
			}
		}
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->listViewPembuatan = (gcnew System::Windows::Forms::ListView());
			this->columnHeaderNama = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeaderTempatLahir = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeaderAlamat = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeaderPekerjaan = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeaderTanggalLahir = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeaderJenisKelamin = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeaderSim = (gcnew System::Windows::Forms::ColumnHeader());
			this->listViewPembaruan = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(288, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(328, 32);
			this->label1->TabIndex = 44;
			this->label1->Text = L"Pengecekan Pengajuan SIM";
			this->label1->Visible = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->Location = System::Drawing::Point(776, 127);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 81;
			this->button2->Text = L"Terima";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &AccPage::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button3->Location = System::Drawing::Point(776, 157);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 83;
			this->button3->Text = L"Terima";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &AccPage::button3_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button7->Location = System::Drawing::Point(776, 186);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 85;
			this->button7->Text = L"Terima";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &AccPage::button7_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Red;
			this->button13->Location = System::Drawing::Point(857, 186);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 23);
			this->button13->TabIndex = 92;
			this->button13->Text = L"Tolak";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Visible = false;
			this->button13->Click += gcnew System::EventHandler(this, &AccPage::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Red;
			this->button14->Location = System::Drawing::Point(857, 157);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 23);
			this->button14->TabIndex = 91;
			this->button14->Text = L"Tolak";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Visible = false;
			this->button14->Click += gcnew System::EventHandler(this, &AccPage::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Red;
			this->button15->Location = System::Drawing::Point(857, 127);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 23);
			this->button15->TabIndex = 90;
			this->button15->Text = L"Tolak";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Visible = false;
			this->button15->Click += gcnew System::EventHandler(this, &AccPage::button15_Click);
			// 
			// listViewPembuatan
			// 
			this->listViewPembuatan->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->columnHeaderNama,
					this->columnHeaderTempatLahir, this->columnHeaderAlamat, this->columnHeaderPekerjaan, this->columnHeaderTanggalLahir, this->columnHeaderJenisKelamin,
					this->columnHeaderSim
			});
			this->listViewPembuatan->HideSelection = false;
			this->listViewPembuatan->Location = System::Drawing::Point(12, 104);
			this->listViewPembuatan->Name = L"listViewPembuatan";
			this->listViewPembuatan->Size = System::Drawing::Size(738, 112);
			this->listViewPembuatan->TabIndex = 0;
			this->listViewPembuatan->UseCompatibleStateImageBehavior = false;
			this->listViewPembuatan->View = System::Windows::Forms::View::Details;
			this->listViewPembuatan->Visible = false;
			// 
			// columnHeaderNama
			// 
			this->columnHeaderNama->Text = L"Nama";
			this->columnHeaderNama->Width = 134;
			// 
			// columnHeaderTempatLahir
			// 
			this->columnHeaderTempatLahir->Text = L"Tempat Lahir";
			this->columnHeaderTempatLahir->Width = 82;
			// 
			// columnHeaderAlamat
			// 
			this->columnHeaderAlamat->Width = 103;
			// 
			// columnHeaderPekerjaan
			// 
			this->columnHeaderPekerjaan->Text = L"Pekerjaan";
			this->columnHeaderPekerjaan->Width = 88;
			// 
			// columnHeaderTanggalLahir
			// 
			this->columnHeaderTanggalLahir->Text = L"Tanggal Lahir";
			this->columnHeaderTanggalLahir->Width = 92;
			// 
			// columnHeaderJenisKelamin
			// 
			this->columnHeaderJenisKelamin->Text = L"Jenis Kelamin";
			this->columnHeaderJenisKelamin->Width = 82;
			// 
			// columnHeaderSim
			// 
			this->columnHeaderSim->Text = L"Jenis Sim";
			this->columnHeaderSim->Width = 61;
			// 
			// listViewPembaruan
			// 
			this->listViewPembaruan->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->columnHeader1,
					this->columnHeader2, this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7
			});
			this->listViewPembaruan->HideSelection = false;
			this->listViewPembaruan->Location = System::Drawing::Point(12, 268);
			this->listViewPembaruan->Name = L"listViewPembaruan";
			this->listViewPembaruan->Size = System::Drawing::Size(738, 112);
			this->listViewPembaruan->TabIndex = 95;
			this->listViewPembaruan->UseCompatibleStateImageBehavior = false;
			this->listViewPembaruan->View = System::Windows::Forms::View::Details;
			this->listViewPembaruan->Visible = false;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Nama";
			this->columnHeader1->Width = 134;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Tempat Lahir";
			this->columnHeader2->Width = 82;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Width = 103;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Pekerjaan";
			this->columnHeader4->Width = 88;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Tanggal Lahir";
			this->columnHeader5->Width = 92;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Jenis Kelamin";
			this->columnHeader6->Width = 82;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Jenis Sim";
			this->columnHeader7->Width = 61;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 25);
			this->label2->TabIndex = 96;
			this->label2->Text = L"Pembuatan";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 240);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(114, 25);
			this->label3->TabIndex = 97;
			this->label3->Text = L"Pembaruan";
			this->label3->Visible = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Red;
			this->button5->Location = System::Drawing::Point(857, 355);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 106;
			this->button5->Text = L"Tolak";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Visible = false;
			this->button9->Click += gcnew System::EventHandler(this, &AccPage::button9_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Red;
			this->button6->Location = System::Drawing::Point(857, 326);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 105;
			this->button6->Text = L"Tolak";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &AccPage::button6_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Red;
			this->button9->Location = System::Drawing::Point(857, 296);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 104;
			this->button9->Text = L"Tolak";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Visible = false;
			this->button9->Click += gcnew System::EventHandler(this, &AccPage::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button10->Location = System::Drawing::Point(776, 355);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 103;
			this->button10->Text = L"Terima";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Visible = false;
			this->button10->Click += gcnew System::EventHandler(this, &AccPage::button10_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button12->Location = System::Drawing::Point(776, 326);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 23);
			this->button12->TabIndex = 101;
			this->button12->Text = L"Terima";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Visible = false;
			this->button12->Click += gcnew System::EventHandler(this, &AccPage::button12_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button17->Location = System::Drawing::Point(776, 296);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 23);
			this->button17->TabIndex = 99;
			this->button17->Text = L"Terima";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Visible = false;
			this->button17->Click += gcnew System::EventHandler(this, &AccPage::button17_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(306, 158);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(250, 21);
			this->label4->TabIndex = 107;
			this->label4->Text = L"Masukan Kode Kredensial Anda";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(365, 191);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(138, 20);
			this->textBox1->TabIndex = 108;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Wheat;
			this->button19->Location = System::Drawing::Point(371, 217);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(128, 23);
			this->button19->TabIndex = 109;
			this->button19->Text = L"Masukan Kredensial";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &AccPage::button19_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(798, 132);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(113, 13);
			this->label5->TabIndex = 110;
			this->label5->Text = L"Status Telah Diupdate";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(798, 162);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(113, 13);
			this->label6->TabIndex = 111;
			this->label6->Text = L"Status Telah Diupdate";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(798, 194);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(113, 13);
			this->label7->TabIndex = 112;
			this->label7->Text = L"Status Telah Diupdate";
			this->label7->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(798, 301);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(113, 13);
			this->label8->TabIndex = 113;
			this->label8->Text = L"Status Telah Diupdate";
			this->label8->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(798, 331);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(113, 13);
			this->label9->TabIndex = 114;
			this->label9->Text = L"Status Telah Diupdate";
			this->label9->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(798, 360);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(113, 13);
			this->label10->TabIndex = 115;
			this->label10->Text = L"Status Telah Diupdate";
			this->label10->Visible = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Wheat;
			this->button1->Location = System::Drawing::Point(13, 411);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 23);
			this->button1->TabIndex = 116;
			this->button1->Text = L"Reset semua data";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &AccPage::button1_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Wheat;
			this->button4->Location = System::Drawing::Point(146, 410);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 117;
			this->button4->Text = L"Keluar";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &AccPage::button4_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Wheat;
			this->button8->Location = System::Drawing::Point(395, 242);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 118;
			this->button8->Text = L"Keluar";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &AccPage::button4_Click);
			// 
			// AccPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Khaki;
			this->ClientSize = System::Drawing::Size(979, 482);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listViewPembaruan);
			this->Controls->Add(this->listViewPembuatan);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AccPage";
			this->Text = L"AccPage";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
			// menutup AccPage form
			this->Close();
		}

		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			dataListPembuatan[0]->status = "Terima";
			MessageBox::Show("Status updated to Terima ");
			button2->Visible = false;
			button15->Visible = false;
			label5->Visible = true;
			
			
		}
			   private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
				   dataListPembuatan[1]->status = "Terima";
				   MessageBox::Show("Status updated to Terima ");
				   button3->Visible = false;
				   button14->Visible = false;
				   label6->Visible = true;
			   }
					  private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
						  dataListPembuatan[2]->status = "Terima";
						  MessageBox::Show("Status updated to Terima ");
						  button7->Visible = false;
						  button13->Visible = false;
						  label7->Visible = true;
						  
					  }
		private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
			dataListPembuatan[0]->status = "Tolak";
			MessageBox::Show("Status updated to Tolak");
			button2->Visible = false;
			button15->Visible = false;
			label5->Visible = true;

		}
			   private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
				   dataListPembuatan[1]->status = "Tolak";
				   MessageBox::Show("Status updated to Tolak");
				   button3->Visible = false;
				   button14->Visible = false;
				   label6->Visible = true;

			   }
					  private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
						  dataListPembuatan[2]->status = "Tolak";
						  MessageBox::Show("Status updated to Tolak");
						  button7->Visible = false;
						  button13->Visible = false;
						  label7->Visible = true;

					  }

		private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
			dataListPembaruan[0]->status = "Terima";
			MessageBox::Show("Status updated to Terima ");
			button9->Visible = false;
			button17->Visible = false;
			label8->Visible = true;
			
		}
			   private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
				   dataListPembaruan[1]->status = "Terima";
				   MessageBox::Show("Status updated to Terima");
				   button6->Visible = false;
				   button12->Visible = false;
				   label9->Visible = true;

			   }
					  private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
						  dataListPembaruan[2]->status = "Terima";
						  MessageBox::Show("Status updated to Terima");
						  button10->Visible = false;
						  button5->Visible = false;
						  label10->Visible = true;

					  }
		private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
			dataListPembaruan[0]->status = "Tolak";
			MessageBox::Show("Status updated to Tolak");
			button9->Visible = false;
			button17->Visible = false;
			label8->Visible = true;
		}
			   private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
				   dataListPembaruan[1]->status = "Tolak";
				   MessageBox::Show("Status updated to Tolak");
				   button6->Visible = false;
				   button12->Visible = false;
				   label9->Visible = true;

			   }
					  private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
						  dataListPembaruan[2]->status = "Tolak";
						  MessageBox::Show("Status updated to Tolak");
						  button10->Visible = false;
						  button5->Visible = false;
						  label10->Visible = true;

						  
					  }
			   
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		dataListPembuatan->Clear();
		dataListPembaruan->Clear();
		PopulateListViewPembuatan();
		PopulateListViewPembaruan();
		UpdateButtonVisibilityPembuatan();
		UpdateButtonVisibilityPembaruan();
		MessageBox::Show("Data berhasil di Reset");
	}
	

	};
}
