#pragma once
#include "FormData.h"
#include <vector>
#include <string>




namespace Akhir {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for DetailJawaban
	/// </summary>
    public ref class DetailJawaban : public System::Windows::Forms::Form
    {
    public:
        DetailJawaban(List<FormData^>^ dataListPembuatan,
            List<FormData^>^ dataListPembaruan,
            List<FormData^>^ dataListPLPembuatan,
            List<FormData^>^ dataListPLPembaruan, int index, int pilihan)
        {
            InitializeComponent();
            this->dataListPembuatan = dataListPembuatan;
            this->dataListPembaruan = dataListPembaruan;
            this->dataListPLPembuatan = dataListPLPembuatan;
            this->dataListPLPembaruan = dataListPLPembaruan;
			this->indexarray = index;
            this->pilihany = pilihan;
            // Display the data in the form
            this->Text = "Detail Jawaban";
            Label^ label = gcnew Label();
            label->AutoSize = true;
            this->Controls->Add(label);
            this->Controls->Add(label);
           
            std::string antri = std::to_string(indexarray +1);
            System::String^ antriString = gcnew System::String(antri.c_str());
			if (pilihany == 0) {
                label8->Text = dataListPembuatan[indexarray]->nama;
				label9->Text = dataListPembuatan[indexarray]->tempatLahir+", "+ dataListPembuatan[indexarray]->tanggalLahir;
				label10->Text = dataListPembuatan[indexarray]->alamat;
				label11->Text = dataListPembuatan[indexarray]->pekerjaan;
				label12->Text = dataListPembuatan[indexarray]->sim;
				label13->Text = dataListPembuatan[indexarray]->jenisKelamin;
				label26->Text = dataListPLPembuatan[indexarray]->PLbuat1;
				label23->Text = dataListPLPembuatan[indexarray]->PLbuat2;
                label22->Text = dataListPLPembuatan[indexarray]->PLbuat3;
				label21->Text = dataListPLPembuatan[indexarray]->PLbuat4;
				label20->Text = dataListPLPembuatan[indexarray]->PLbuat5;
                label25->Text = antriString;
			}
			else if (pilihany == 1) {
                label8->Text = dataListPembaruan[indexarray]->nama;
                label9->Text = dataListPembaruan[indexarray]->tempatLahir + ", " + dataListPembaruan[indexarray]->tanggalLahir;
                label10->Text = dataListPembaruan[indexarray]->alamat;
                label11->Text = dataListPembaruan[indexarray]->pekerjaan;
                label12->Text = dataListPembaruan[indexarray]->sim;
                label13->Text = dataListPembaruan[indexarray]->jenisKelamin;
                label26->Text = dataListPLPembaruan[indexarray]->PLbaru1;
                label23->Text = dataListPLPembaruan[indexarray]->PLbaru2;
                label22->Text = dataListPLPembaruan[indexarray]->PLbaru3;
                label21->Text = dataListPLPembaruan[indexarray]->PLbaru4;
                label20->Text = dataListPLPembaruan[indexarray]->PLbaru5;
				label25->Text = antriString;
			}
            
        }

    protected:
        ~DetailJawaban()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^ label1;
    protected:
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label7;






    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::Label^ label18;


           List<FormData^>^ dataListPembuatan;
           List<FormData^>^ dataListPembaruan;
           List<FormData^>^ dataListPLPembuatan;
           List<FormData^>^ dataListPLPembaruan;


           
           System::Collections::Generic::Stack<FormData^>^ dataStackPLPembuatan;
           System::Collections::Generic::Stack<FormData^>^ dataStackPembuatan;

    private:


        int indexarray;
        int pilihany;
       
        
    private: System::Windows::Forms::Label^ label24;
    private: System::Windows::Forms::Label^ label25;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::Label^ label13;

    private: System::Windows::Forms::Label^ label20;
    private: System::Windows::Forms::Label^ label21;
    private: System::Windows::Forms::Label^ label22;
    private: System::Windows::Forms::Label^ label23;
    private: System::Windows::Forms::Label^ label26;


        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(220, 9);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(173, 16);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Kartu Hasil Registrasi";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(20, 40);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(215, 16);
            this->label2->TabIndex = 1;
            this->label2->Text = L"Nama                          : ";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(20, 68);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(216, 16);
            this->label3->TabIndex = 2;
            this->label3->Text = L"Tempat, Tanggal Lahir     : ";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(22, 99);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(214, 16);
            this->label4->TabIndex = 3;
            this->label4->Text = L"Alamat                        : ";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(22, 127);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(213, 16);
            this->label5->TabIndex = 4;
            this->label5->Text = L"Pekerjaan                    : ";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(25, 160);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(210, 16);
            this->label6->TabIndex = 5;
            this->label6->Text = L"Pilih SIM                     : ";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->Location = System::Drawing::Point(23, 190);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(212, 16);
            this->label7->TabIndex = 6;
            this->label7->Text = L"Jenis Kelamin               : ";
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->Location = System::Drawing::Point(24, 260);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(192, 16);
            this->label14->TabIndex = 13;
            this->label14->Text = L"Jawaban Pertanyaan 1 :";
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->Location = System::Drawing::Point(25, 305);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(192, 16);
            this->label15->TabIndex = 14;
            this->label15->Text = L"Jawaban Pertanyaan 2 :";
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label16->Location = System::Drawing::Point(26, 348);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(192, 16);
            this->label16->TabIndex = 15;
            this->label16->Text = L"Jawaban Pertanyaan 3 :";
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label17->Location = System::Drawing::Point(25, 390);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(192, 16);
            this->label17->TabIndex = 16;
            this->label17->Text = L"Jawaban Pertanyaan 4 :";
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label18->Location = System::Drawing::Point(27, 436);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(192, 16);
            this->label18->TabIndex = 17;
            this->label18->Text = L"Jawaban Pertanyaan 5 :";
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label24->Location = System::Drawing::Point(22, 488);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(118, 16);
            this->label24->TabIndex = 23;
            this->label24->Text = L"Nomor Antrian";
            // 
            // label25
            // 
            this->label25->AutoSize = true;
            this->label25->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label25->Location = System::Drawing::Point(36, 504);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(91, 97);
            this->label25->TabIndex = 24;
            
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->Location = System::Drawing::Point(242, 40);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(61, 19);
            this->label8->TabIndex = 25;
            this->label8->Text = L"label8";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(242, 68);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(61, 19);
            this->label9->TabIndex = 26;
            this->label9->Text = L"label9";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->Location = System::Drawing::Point(241, 99);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(72, 19);
            this->label10->TabIndex = 27;
            this->label10->Text = L"label10";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label11->Location = System::Drawing::Point(242, 127);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(72, 19);
            this->label11->TabIndex = 28;
            this->label11->Text = L"label11";
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->Location = System::Drawing::Point(242, 160);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(72, 19);
            this->label12->TabIndex = 29;
            this->label12->Text = L"label12";
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label13->Location = System::Drawing::Point(242, 190);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(72, 19);
            this->label13->TabIndex = 30;
            this->label13->Text = L"label13";
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label20->Location = System::Drawing::Point(232, 437);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(72, 19);
            this->label20->TabIndex = 35;
            this->label20->Text = L"label20";
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label21->Location = System::Drawing::Point(232, 390);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(72, 19);
            this->label21->TabIndex = 34;
            this->label21->Text = L"label21";
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label22->Location = System::Drawing::Point(231, 349);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(72, 19);
            this->label22->TabIndex = 33;
            this->label22->Text = L"label22";
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label23->Location = System::Drawing::Point(232, 307);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(72, 19);
            this->label23->TabIndex = 32;
            this->label23->Text = L"label23";
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label26->Location = System::Drawing::Point(231, 260);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(72, 19);
            this->label26->TabIndex = 31;
            this->label26->Text = L"label26";
            // 
            // DetailJawaban
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(654, 682);
            this->Controls->Add(this->label20);
            this->Controls->Add(this->label21);
            this->Controls->Add(this->label22);
            this->Controls->Add(this->label23);
            this->Controls->Add(this->label26);
            this->Controls->Add(this->label13);
            this->Controls->Add(this->label12);
            this->Controls->Add(this->label11);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->label25);
            this->Controls->Add(this->label24);
            this->Controls->Add(this->label18);
            this->Controls->Add(this->label17);
            this->Controls->Add(this->label16);
            this->Controls->Add(this->label15);
            this->Controls->Add(this->label14);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Name = L"DetailJawaban";
            this->Text = L"DetailJawaban";
            
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    

};

}
