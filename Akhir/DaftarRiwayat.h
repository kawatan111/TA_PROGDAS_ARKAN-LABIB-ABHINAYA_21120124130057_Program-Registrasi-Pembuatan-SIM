#pragma once
#include "FormData.h"
#include "DetailJawaban.h"

namespace Akhir {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for DaftarRiwayat
	/// </summary>
	public ref class DaftarRiwayat : public System::Windows::Forms::Form
	{
	public:
		DaftarRiwayat(List<FormData^>^ dataListPembuatan,
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
			UpdateButtonVisibilityPembuatan();
			UpdateButtonVisibilityPembaruan();
			//
			//TODO: Add the constructor code here
			//
		}
		List<FormData^>^ dataListPembuatan;
		List<FormData^>^ dataListPembaruan;
		List<FormData^>^ dataListPLPembuatan;
		List<FormData^>^ dataListPLPembaruan;

		System::Collections::Generic::Stack<FormData^>^ dataStackPembaruan;
		System::Collections::Generic::Stack<FormData^>^ dataStackPembuatan;
		System::Collections::Generic::Stack<FormData^>^ dataStackPLPembaruan;
	private: System::Windows::Forms::ColumnHeader^ columnHeader12;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::ColumnHeader^ columnHeader13;
	private: System::Windows::Forms::ColumnHeader^ columnHeader14;
	private: System::Windows::Forms::Button^ button7;




	public:
		System::Collections::Generic::Stack<FormData^>^ dataStackPLPembuatan;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DaftarRiwayat()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListView^ listViewPembuatan;


	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ListView^ listViewPembaruan;

	private: System::Windows::Forms::ColumnHeader^ columnHeader6;
	private: System::Windows::Forms::ColumnHeader^ columnHeader7;
	private: System::Windows::Forms::ColumnHeader^ columnHeader8;
	private: System::Windows::Forms::ColumnHeader^ columnHeader9;
	private: System::Windows::Forms::ColumnHeader^ columnHeader10;
	private: System::Windows::Forms::ColumnHeader^ columnHeader11;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		int index = 0;
		int pilihan = 0;
		System::ComponentModel::Container ^components;
		void UpdateButtonVisibilityPembuatan()
		{
		

			button1->Visible = false;
			button2->Visible = false;
			button3->Visible = false;

			int count = dataListPembuatan->Count;

			if (count == 1)
			{

				button1->Visible = true;
				
			}
			else if (count == 2)
			{

				button2->Visible = true;
				button1->Visible = true;
			}
			else if (count == 3)
			{
				button2->Visible = true;
				button1->Visible = true;
				button3->Visible = true;
			}
		}
		void UpdateButtonVisibilityPembaruan()
		{
			

			button6->Visible = false;
			button5->Visible = false;
			button4->Visible = false;

			int count = dataListPembaruan->Count;

			if (count == 1)
			{

				button6->Visible = true;

			}
			else if (count == 2)
			{

				button6->Visible = true;
				button5->Visible = true;
			}
			else if (count == 3)
			{
				button6->Visible = true;
				button5->Visible = true;
				button4->Visible = true;
			}
		}
		void PopulateListViewPembuatan()
		{
			listViewPembuatan->Items->Clear();
			for each (FormData ^ data in dataListPembuatan)
			{
				ListViewItem^ item = gcnew ListViewItem(data->nama);
				item->SubItems->Add(data->tempatLahir + data->tanggalLahir.ToString());
				item->SubItems->Add(data->alamat);
				item->SubItems->Add(data->pekerjaan);
				item->SubItems->Add(data->sim);
				item->SubItems->Add(data->jenisKelamin);
				item->SubItems->Add(data->status);
				listViewPembuatan->Items->Add(item);
			}
		}

		void PopulateListViewPembaruan()
		{
			listViewPembaruan->Items->Clear();
			for each (FormData ^ data in dataListPembaruan)
			{
				ListViewItem^ item = gcnew ListViewItem(data->nama);
				item->SubItems->Add(data->tempatLahir + data->tanggalLahir.ToString());
				item->SubItems->Add(data->alamat);
				item->SubItems->Add(data->pekerjaan);
				item->SubItems->Add(data->sim);
				item->SubItems->Add(data->jenisKelamin);
				item->SubItems->Add(data->status);
				listViewPembaruan->Items->Add(item);
			}
		}

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listViewPembuatan = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader12 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader13 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->listViewPembaruan = (gcnew System::Windows::Forms::ListView());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader10 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader11 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader14 = (gcnew System::Windows::Forms::ColumnHeader());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(348, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(284, 30);
			this->label1->TabIndex = 44;
			this->label1->Text = L"Pengecekan Pengajuan SIM";
			// 
			// listViewPembuatan
			// 
			this->listViewPembuatan->BackColor = System::Drawing::SystemColors::Window;
			this->listViewPembuatan->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->columnHeader1,
					this->columnHeader2, this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader12, this->columnHeader13
			});
			this->listViewPembuatan->HideSelection = false;
			this->listViewPembuatan->Location = System::Drawing::Point(37, 130);
			this->listViewPembuatan->Name = L"listViewPembuatan";
			this->listViewPembuatan->Size = System::Drawing::Size(716, 119);
			this->listViewPembuatan->TabIndex = 51;
			this->listViewPembuatan->UseCompatibleStateImageBehavior = false;
			this->listViewPembuatan->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Nama";
			this->columnHeader1->Width = 118;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Tempat, Tanggal Lahir";
			this->columnHeader2->Width = 123;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Alamat";
			this->columnHeader3->Width = 90;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Pekerjaan";
			this->columnHeader4->Width = 131;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Jenis SIM";
			this->columnHeader5->Width = 65;
			// 
			// columnHeader12
			// 
			this->columnHeader12->Text = L"Jenis Kelamin";
			this->columnHeader12->Width = 105;
			// 
			// columnHeader13
			// 
			this->columnHeader13->Text = L"Status";
			this->columnHeader13->Width = 68;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(32, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 25);
			this->label2->TabIndex = 52;
			this->label2->Text = L"Pembuatan";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(32, 271);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(114, 25);
			this->label3->TabIndex = 54;
			this->label3->Text = L"Pembaruan";
			// 
			// listViewPembaruan
			// 
			this->listViewPembaruan->BackColor = System::Drawing::SystemColors::Window;
			this->listViewPembaruan->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->columnHeader6,
					this->columnHeader7, this->columnHeader8, this->columnHeader9, this->columnHeader10, this->columnHeader11, this->columnHeader14
			});
			this->listViewPembaruan->HideSelection = false;
			this->listViewPembaruan->Location = System::Drawing::Point(37, 299);
			this->listViewPembaruan->Name = L"listViewPembaruan";
			this->listViewPembaruan->Size = System::Drawing::Size(716, 119);
			this->listViewPembaruan->TabIndex = 53;
			this->listViewPembaruan->UseCompatibleStateImageBehavior = false;
			this->listViewPembaruan->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Nama";
			this->columnHeader6->Width = 115;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Tempat, Tanggal Lahir";
			this->columnHeader7->Width = 132;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Alamat";
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"Pekerjaan";
			this->columnHeader9->Width = 139;
			// 
			// columnHeader10
			// 
			this->columnHeader10->Text = L"Jenis SIM";
			this->columnHeader10->Width = 100;
			// 
			// columnHeader11
			// 
			this->columnHeader11->Text = L"Jenis Kelamin";
			this->columnHeader11->Width = 94;
			// 
			// columnHeader14
			// 
			this->columnHeader14->Text = L"Status";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Wheat;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(759, 162);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 23);
			this->button1->TabIndex = 58;
			this->button1->Text = L"Cetak Hasil Registrasi";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &DaftarRiwayat::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Wheat;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(759, 191);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(126, 23);
			this->button2->TabIndex = 59;
			this->button2->Text = L"Cetak Hasil Registrasi";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &DaftarRiwayat::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Wheat;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Location = System::Drawing::Point(759, 220);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(126, 23);
			this->button3->TabIndex = 60;
			this->button3->Text = L"Cetak Hasil Registrasi";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &DaftarRiwayat::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Wheat;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Location = System::Drawing::Point(759, 388);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(126, 23);
			this->button4->TabIndex = 63;
			this->button4->Text = L"Cetak Hasil Registrasi";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &DaftarRiwayat::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Wheat;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Location = System::Drawing::Point(759, 359);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(126, 23);
			this->button5->TabIndex = 62;
			this->button5->Text = L"Cetak Hasil Registrasi";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &DaftarRiwayat::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Wheat;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Location = System::Drawing::Point(759, 330);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(126, 23);
			this->button6->TabIndex = 61;
			this->button6->Text = L"Cetak Hasil Registrasi";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &DaftarRiwayat::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Wheat;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(37, 445);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 64;
			this->button7->Text = L"Keluar";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &DaftarRiwayat::button7_Click);
			// 
			// DaftarRiwayat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Khaki;
			this->ClientSize = System::Drawing::Size(976, 480);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->listViewPembaruan);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listViewPembuatan);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"DaftarRiwayat";
			this->Text = L"DaftarRiwayat";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
			//Menutup form
			this->Close();
		}

		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

			index = 0;
			pilihan = 0;
			if (dataListPembuatan[index]->status == "Terima") {
				DetailJawaban^ detailForm = gcnew DetailJawaban(this->dataListPembuatan, this->dataListPembaruan, this->dataListPLPembuatan, this->dataListPLPembaruan, index, pilihan);
				detailForm->ShowDialog();
			}
			else {
				MessageBox::Show("Data belum diterima");
			}
		}
			   private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
				   index = 1;
				   pilihan = 0;
				   if (dataListPembuatan[index]->status == "Terima") {
					   DetailJawaban^ detailForm = gcnew DetailJawaban(this->dataListPembuatan, this->dataListPembaruan, this->dataListPLPembuatan, this->dataListPLPembaruan, index, pilihan);
					   detailForm->ShowDialog();
				   }
				   else {
					   MessageBox::Show("Data belum diterima");
				   }
			   }
					  private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
						  index = 2;
						  pilihan = 0;
						  if (dataListPembuatan[index]->status == "Terima") {
							  DetailJawaban^ detailForm = gcnew DetailJawaban(this->dataListPembuatan, this->dataListPembaruan, this->dataListPLPembuatan, this->dataListPLPembaruan, index, pilihan);
							  detailForm->ShowDialog();
						  }
						  else {
							  MessageBox::Show("Data belum diterima");
						  }
					  }

		private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
			index = 0;
			pilihan = 1;
			if (dataListPembaruan[index]->status == "Terima") {
				DetailJawaban^ detailForm = gcnew DetailJawaban(this->dataListPembuatan, this->dataListPembaruan, this->dataListPLPembuatan, this->dataListPLPembaruan, index, pilihan);
				detailForm->ShowDialog();
			}
			else {
				MessageBox::Show("Data belum diterima");
			}
		}
			   private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
				   index = 1;
				   pilihan = 1;
				   if (dataListPembaruan[index]->status == "Terima") {
					   DetailJawaban^ detailForm = gcnew DetailJawaban(this->dataListPembuatan, this->dataListPembaruan, this->dataListPLPembuatan, this->dataListPLPembaruan, index, pilihan);
					   detailForm->ShowDialog();
				   }
				   else {
					   MessageBox::Show("Data belum diterima");
				   }
			   }
					  private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
						  index = 2;
						  pilihan = 1;
						  if (dataListPembaruan[index]->status == "Terima") {
							  DetailJawaban^ detailForm = gcnew DetailJawaban(this->dataListPembuatan, this->dataListPembaruan, this->dataListPLPembuatan, this->dataListPLPembaruan, index, pilihan);
							  detailForm->ShowDialog();
						  }
						  else {
							  MessageBox::Show("Data belum diterima");
						  }
					  }
	};
}
