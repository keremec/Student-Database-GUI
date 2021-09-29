#pragma once
#include "krmsrandomizer.h"
#include "myArry.h"
//#include <msclr/marshal_cppstd.h>

#define COL_NUM 4

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;














	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;





	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;




























	protected:

		void MarshalString(String^ s, string& os) {
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(587, 395);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(60, 104);
			this->button1->TabIndex = 4;
			this->button1->Text = L"ADD";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(22, 394);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 48);
			this->button2->TabIndex = 6;
			this->button2->Text = L"DEL";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(666, 394);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 48);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Import";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click_1);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(666, 447);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(128, 48);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Export";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(22, 32);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(772, 337);
			this->dataGridView1->TabIndex = 5;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Address";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 245;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Name";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 140;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"GPA";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 40;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"ID";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 125;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(142, 482);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Name";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(347, 486);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"GPA";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(469, 485);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"ID";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(142, 431);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 17);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Address";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(145, 403);
			this->textBox1->MaxLength = 75;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(421, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(145, 458);
			this->textBox2->MaxLength = 50;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(190, 22);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(350, 458);
			this->textBox3->MaxLength = 10;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ShortcutsEnabled = false;
			this->textBox3->Size = System::Drawing::Size(106, 22);
			this->textBox3->TabIndex = 2;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox3_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(472, 458);
			this->textBox4->MaxLength = 10;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ShortcutsEnabled = false;
			this->textBox4->Size = System::Drawing::Size(94, 22);
			this->textBox4->TabIndex = 3;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_TextChanged);
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox4_KeyPress);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(22, 452);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(90, 47);
			this->button5->TabIndex = 6;
			this->button5->Text = L"RAND";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(306, 482);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(29, 25);
			this->button6->TabIndex = 9;
			this->button6->Text = L"🔎";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(537, 428);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(29, 25);
			this->button7->TabIndex = 10;
			this->button7->Text = L"🔎";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(427, 482);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(29, 25);
			this->button8->TabIndex = 11;
			this->button8->Text = L"🔎";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(537, 482);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(29, 25);
			this->button9->TabIndex = 12;
			this->button9->Text = L"🔎";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(481, 428);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(53, 25);
			this->button10->TabIndex = 13;
			this->button10->Text = L"0|1";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(265, 482);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(41, 25);
			this->button11->TabIndex = 14;
			this->button11->Text = L"0|1";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(384, 482);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(41, 25);
			this->button12->TabIndex = 15;
			this->button12->Text = L"0|1";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(494, 482);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(41, 25);
			this->button13->TabIndex = 16;
			this->button13->Text = L"0|1";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(419, 428);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(60, 25);
			this->button14->TabIndex = 17;
			this->button14->Text = L"E4 🔎";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(204, 482);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(59, 25);
			this->button15->TabIndex = 18;
			this->button15->Text = L"E4 🔎";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(813, 516);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
	
	// ADD BUTTON
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Add(this->textBox1->Text, this->textBox2->Text, this->textBox3->Text, this->textBox4->Text);
	
	student tmpst;	// temp struct for a line
	System::String^ txyz;	// temp system string variable
	std::string c_txyz;	// temp std string variable
	

	txyz = this->textBox1->Text;
	MarshalString(txyz, c_txyz); // converting system string to std string
	tmpst.address = c_txyz;

	txyz = this->textBox2->Text;
	MarshalString(txyz, c_txyz);
	tmpst.name = c_txyz;

	txyz = this->textBox3->Text;
	MarshalString(txyz, c_txyz);
	tmpst.gpa = stod(c_txyz);

	txyz = this->textBox4->Text;
	MarshalString(txyz, c_txyz);
	tmpst.id = stoi(c_txyz);

	star.addItem(tmpst);
	
	this->textBox1->Clear();
	this->textBox2->Clear();
	this->textBox3->Clear();
	this->textBox4->Clear();
	}
	
	// DEL BUTTON
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {	

	if (this->dataGridView1->SelectedRows->Count > 0 && this->dataGridView1->SelectedRows[0]->Index < this->dataGridView1->RowCount - 1 ){
		int todel = this->dataGridView1->SelectedRows[0]->Index;
		star.removeIndexItem(todel);
		dataGridView1->Rows->RemoveAt(todel);

	}
}

	// RAND BUTTON   
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	char name[10];
	char address[20];

	gen_random(name, 9, false);
	gen_random(address, 19, true);

	std::string s0 = std::to_string(randnum(0.0, 4.0));
	char const* pchar0 = s0.c_str();
	
	std::string s = std::to_string(randnum(0, 9990000));
	char const* pchar = s.c_str();

	String^ s_name = gcnew String(name);
	String^ s_address = gcnew String(address);
	String^ s_gpa = gcnew String(pchar0);
	String^ s_number = gcnew String(pchar);


	this->textBox1->Clear();
	this->textBox1->Text = s_address;


	this->textBox2->Clear();
	this->textBox2->Text =s_name;

	this->textBox3->Clear();
	this->textBox3->Text = s_gpa;

	this->textBox4->Clear();
	this->textBox4->Text = s_number;
	
}

	//Export Button
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	
	using namespace System::IO;
	using namespace System;

	
	remove("file_tmp.txt");
	StreamWriter^ outFile = gcnew StreamWriter("file_tmp.txt", true);



	outFile->WriteLine("---startoffile---");

	int m = this->dataGridView1->Rows->Count-1;
	int j = 0;
	while (j<m) {
		for (int i = 0; i < COL_NUM; i++) {
			outFile->WriteLine(this->dataGridView1->Rows[j]->Cells[i]->Value);
		}
		j++;
	}

	outFile->WriteLine("---endoffile---");

	outFile->Close();

	remove("file.txt");
	rename("file_tmp.txt", "file.txt");


	   }

	// Import Button
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	using namespace System::IO;
	using namespace System;
	
	this->dataGridView1->Rows->Clear();
	star.cleararr();
	
	StreamReader^ inFile = gcnew StreamReader("file.txt");
	String^ inbuf = inFile->ReadLine();

	int j = 0;
	while (j!=-1) {

		this->dataGridView1->Rows->Add();
		for (int i = 0; i < COL_NUM; i++) {
			inbuf = inFile->ReadLine();
			if (inbuf == "---endoffile---") {
				dataGridView1->Rows->RemoveAt(this->dataGridView1->Rows->Count - 2);
				j = -2;
				break;
			}
			this->dataGridView1->Rows[j]->Cells[i]->Value = inbuf;
		}
		j++;

	}


	inFile->Close();

	// importing data to class

	student tmpst;	// temp struct for a line
	System::String^ txyz;	// temp system string variable
	std::string c_txyz;	// temp std string variable

	int m = this->dataGridView1->Rows->Count - 1;
	j = 0;

	while (j < m) {
		txyz = this->dataGridView1->Rows[j]->Cells[0]->Value->ToString();
		MarshalString(txyz, c_txyz); // converting system string to std string
		tmpst.address = c_txyz;

		txyz = this->dataGridView1->Rows[j]->Cells[1]->Value->ToString();
		MarshalString(txyz, c_txyz);
		tmpst.name = c_txyz;

		txyz = this->dataGridView1->Rows[j]->Cells[2]->Value->ToString();
		MarshalString(txyz, c_txyz);
		tmpst.gpa = stod(c_txyz);

		txyz = this->dataGridView1->Rows[j]->Cells[3]->Value->ToString();
		MarshalString(txyz, c_txyz);
		tmpst.id = stoi(c_txyz);

		star.addItem(tmpst);

		j++;
	}

}


private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: void setButtonVisibility()
	   {
	if ((textBox1->Text != String::Empty) && (textBox2->Text != String::Empty) && (textBox3->Text != String::Empty) && (textBox4->Text != String::Empty))
		   {
			   button1->Enabled = true;
		   }
		   else
		   {
			   button1->Enabled = false;
		   }
	   }

private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	setButtonVisibility();
	livar = 0;
	lsvar = 0;
	callsign_lin = 0;
	callsign_ls = 0;
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	setButtonVisibility();
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	setButtonVisibility();
	livar = 0;
	lsvar = 0;
	callsign_lin = 0;
	callsign_ls = 0;
}
	   
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		   setButtonVisibility();
	   }


	   // NAME SEARCH BUTTON LINEAR

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

	std::string s_name;
	System::String^ txyz;	// temp system string variable
	std::string c_txyz;	// temp std string variable

	std::string temptest;


	txyz = this->textBox2->Text;
	MarshalString(txyz, c_txyz); // converting system string to std string
	s_name = c_txyz;

	int selr = star.linfind_name(s_name);
	
	dataGridView1->ClearSelection();

	if (selr >= 0) {
		dataGridView1->Rows[selr]->Selected = true;
	}
	else {
		selr = star.linfind_name(s_name);
		if (selr >= 0) {
			dataGridView1->Rows[selr]->Selected = true;
		}

	}

}	


private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}


	   //ADDRESS SEARCH BUTTON LINEAR

private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	
	std::string s_name;
	System::String^ txyz;	// temp system string variable
	std::string c_txyz;	// temp std string variable

	std::string temptest;


	txyz = this->textBox1->Text;
	MarshalString(txyz, c_txyz); // converting system string to std string
	s_name = c_txyz;

	int selr = star.linfind_address(s_name);

	dataGridView1->ClearSelection();

	if (selr >= 0) {
		dataGridView1->Rows[selr]->Selected = true;
	}
	else {
		selr = star.linfind_address(s_name);
		if (selr >= 0) {
			dataGridView1->Rows[selr]->Selected = true;
		}

	}

}

	   //GPA SEARCH BUTTON LINEAR

private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

	std::string s_name;
	System::String^ txyz;	// temp system string variable
	std::string c_txyz;	// temp std string variable

	std::string temptest;


	txyz = this->textBox3->Text;
	MarshalString(txyz, c_txyz); // converting system string to std string
	s_name = c_txyz;

	int selr = star.linfind_gpa(s_name);

	dataGridView1->ClearSelection();

	if (selr >= 0) {
		dataGridView1->Rows[selr]->Selected = true;
	}
	else {
		selr = star.linfind_gpa(s_name);
		if (selr >= 0) {
			dataGridView1->Rows[selr]->Selected = true;
		}

	}

}

	   //ID SEARCH BUTTON LINEAR

private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string s_name;
	System::String^ txyz;	// temp system string variable
	std::string c_txyz;	// temp std string variable

	std::string temptest;


	txyz = this->textBox4->Text;
	MarshalString(txyz, c_txyz); // converting system string to std string
	s_name = c_txyz;

	int selr = star.linfind_id(s_name);

	dataGridView1->ClearSelection();

	if (selr >= 0) {
		dataGridView1->Rows[selr]->Selected = true;
	}
	else {
		selr = star.linfind_id(s_name);
		if (selr >= 0) {
			dataGridView1->Rows[selr]->Selected = true;
		}

	}

}


	   // Binary Search Address

	   
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {


	dataGridView1->ClearSelection();
	dataGridView1->Rows->Clear();
	dataGridView1->Refresh();

	star.insertionSort_Address();

	int rownum = star.sizeofarr();

	for (int i = 0; i < rownum; i++) {
		String^ s_name = gcnew String(star.getname(i).c_str());
		String^ s_address = gcnew String(star.getaddress(i).c_str());
		String^ s_gpa = gcnew String(to_string(star.getgpa(i)).c_str());
		String^ s_number = gcnew String(to_string(star.getid(i)).c_str());
		dataGridView1->Rows->Add(s_address, s_name, s_gpa, s_number);
	}

	std::string s_address;
	System::String^ txyz;	// temp system string variable
	std::string c_txyz;	// temp std string variable

	std::string temptest;

	txyz = this->textBox1->Text;
	MarshalString(txyz, c_txyz); // converting system string to std string
	s_address = c_txyz;

	int selr = star.binarySearch_address(0, star.sizeofarr() - 1, s_address);

	dataGridView1->ClearSelection();

	if (selr >= 0) {
		dataGridView1->Rows[selr]->Selected = true;
	}

	
}


	   // Binary Search Name

private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {

	dataGridView1->ClearSelection();
	dataGridView1->Rows->Clear();
	dataGridView1->Refresh();

	star.insertionSort_Name();

	int rownum = star.sizeofarr();

	for (int i = 0; i < rownum; i++) {
		String^ s_name = gcnew String(star.getname(i).c_str());
		String^ s_address = gcnew String(star.getaddress(i).c_str());
		String^ s_gpa = gcnew String(to_string(star.getgpa(i)).c_str());
		String^ s_number = gcnew String(to_string(star.getid(i)).c_str());
		dataGridView1->Rows->Add(s_address, s_name, s_gpa, s_number);
	}

	std::string s_name;
	System::String^ txyz;	// temp system string variable
	std::string c_txyz;	// temp std string variable

	std::string temptest;

	txyz = this->textBox2->Text;
	MarshalString(txyz, c_txyz); // converting system string to std string
	s_name = c_txyz;

	int selr = star.binarySearch_name(0, star.sizeofarr() - 1, s_name);

	dataGridView1->ClearSelection();

	if (selr >= 0) {
		dataGridView1->Rows[selr]->Selected = true;
	}

}


	   // Binary Search GPA


private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {

	dataGridView1->ClearSelection();
	dataGridView1->Rows->Clear();
	dataGridView1->Refresh();

	star.insertionSort_Gpa();

	int rownum = star.sizeofarr();

	for (int i = 0; i < rownum; i++) {
		String^ s_name = gcnew String(star.getname(i).c_str());
		String^ s_address = gcnew String(star.getaddress(i).c_str());
		String^ s_gpa = gcnew String(to_string(star.getgpa(i)).c_str());
		String^ s_number = gcnew String(to_string(star.getid(i)).c_str());
		dataGridView1->Rows->Add(s_address, s_name, s_gpa, s_number);
	}

	std::string s_gpa;
	System::String^ txyz;	// temp system string variable
	std::string c_txyz;	// temp std string variable

	std::string temptest;

	txyz = this->textBox3->Text;
	MarshalString(txyz, c_txyz); // converting system string to std string
	s_gpa = c_txyz;
	double d_gpa = stod(s_gpa);

	int selr = star.binarySearch_gpa(0, star.sizeofarr() - 1, d_gpa);

	dataGridView1->ClearSelection();

	if (selr >= 0) {
		dataGridView1->Rows[selr]->Selected = true;
	}


}


	   // Binary Search ID

private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {

	dataGridView1->ClearSelection();
	dataGridView1->Rows->Clear();
	dataGridView1->Refresh();

	star.insertionSort_Id();

	int rownum = star.sizeofarr();

	for (int i = 0; i < rownum; i++) {
		String^ s_name = gcnew String(star.getname(i).c_str());
		String^ s_address = gcnew String(star.getaddress(i).c_str());
		String^ s_gpa = gcnew String(to_string(star.getgpa(i)).c_str());
		String^ s_number = gcnew String(to_string(star.getid(i)).c_str());
		dataGridView1->Rows->Add(s_address, s_name, s_gpa, s_number);
	}

	std::string s_id;
	System::String^ txyz;	// temp system string variable
	std::string c_txyz;	// temp std string variable

	std::string temptest;

	txyz = this->textBox4->Text;
	MarshalString(txyz, c_txyz); // converting system string to std string
	s_id = c_txyz;
	long l_id = stol(s_id);

	int selr = star.binarySearch_id(0, star.sizeofarr() - 1, l_id);

	dataGridView1->ClearSelection();

	if (selr >= 0) {
		dataGridView1->Rows[selr]->Selected = true;
	}



}

private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == '.')
	{
		if (this->textBox3->Text->Contains(".") && !this->textBox3->SelectedText->Contains("."))
			e->Handled = true;
	}
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;
}
	
private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;

}


	 // Address Button Search Element 4

private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {

	std::string s_name;
	System::String^ txyz;	// temp system string variable
	std::string c_txyz;	// temp std string variable

	std::string temptest;


	txyz = this->textBox1->Text;
	MarshalString(txyz, c_txyz); // converting system string to std string
	s_name = c_txyz;

	int selr = star.element4_search(s_name, 1);

	dataGridView1->ClearSelection();

	if (selr >= 0) {
		dataGridView1->Rows[selr]->Selected = true;
	}
	else {
		selr = star.linfind_address(s_name);
		if (selr >= 0) {
			dataGridView1->Rows[selr]->Selected = true;
		}

	}

}


	   // Name Button Search Element 4

private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {

	std::string s_name;
	System::String^ txyz;	// temp system string variable
	std::string c_txyz;	// temp std string variable

	std::string temptest;


	txyz = this->textBox2->Text;
	MarshalString(txyz, c_txyz); // converting system string to std string
	s_name = c_txyz;

	int selr = star.element4_search(s_name, 0);

	dataGridView1->ClearSelection();

	if (selr >= 0) {
		dataGridView1->Rows[selr]->Selected = true;
	}
	else {
		selr = star.linfind_name(s_name);
		if (selr >= 0) {
			dataGridView1->Rows[selr]->Selected = true;
		}

	}

}

};
}
