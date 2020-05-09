#pragma once
#include "Forma13.h"
namespace Projekat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Forma10
	/// </summary>
	public ref class Forma10 : public System::Windows::Forms::Form
	{
	public:
		Forma10(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Forma10(String^ s1, String^ s2, String^ s3)
		{
			InitializeComponent();
			textBox2->Text = s1;
			textBox3->Text = s2;
			textBox1->Text = s3;
			
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Forma10()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(26, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Naziv";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Broj zaposlenih";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(26, 161);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(193, 150);
			this->dataGridView1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(119, 66);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(119, 104);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(23, 135);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Broj menadzera";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(119, 132);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(389, 35);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Menadzeri";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(389, 183);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Ostali radnici";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(339, 51);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(240, 101);
			this->dataGridView2->TabIndex = 10;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(339, 199);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(240, 99);
			this->dataGridView3->TabIndex = 11;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(247, 64);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Izmijeni";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Forma10::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(258, 214);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Dodaj";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Forma10::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(258, 257);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Obrisi";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Forma10::button3_Click);
			// 
			// Forma10
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(647, 347);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"Forma10";
			this->Text = L"Forma10";
			this->Load += gcnew System::EventHandler(this, &Forma10::Forma10_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Forma10_Load(System::Object^  sender, System::EventArgs^  e) {
		String^ s = "server = localhost; port = 3306; database = employees; " +
			"username=root;password=zova;";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(s);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select all_titles.title, count(view7.emp_no) from all_titles left join view7 on all_titles.title = view7.title and view7.department = '" + textBox2->Text + "' group by all_titles.title order by 2 DESC", conDataBase);
		MySqlDataReader^ myReader;
		MySqlConnection^ conDataBase1 = gcnew MySqlConnection(s);
		MySqlCommand^ cmdDataBase1 = gcnew MySqlCommand("select * from employees. broj_menadzera where dept_no='"+ textBox1->Text + "';", conDataBase1);
		MySqlDataReader^ myReader1;
		MySqlConnection^ conDataBase2 = gcnew MySqlConnection(s);
		MySqlCommand^ cmdDataBase2 = gcnew MySqlCommand("select * from employees.svi_men where dept_no='" + textBox1->Text + "'; ", conDataBase2);
		MySqlDataReader^ myReader2;
		MySqlConnection^ conDataBase3 = gcnew MySqlConnection(s);
		MySqlCommand^ cmdDataBase3 = gcnew MySqlCommand("select * from employees.bez_menadzera1 where dept_no='" + textBox1->Text + "'; ", conDataBase3);
		MySqlDataReader^ myReader3;
		
		try{
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDataBase;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource = gcnew BindingSource();
			bSource->DataSource = dbdataset;
			dataGridView1->DataSource = bSource;
			sda->Update(dbdataset);
			conDataBase1->Open();
			myReader1 = cmdDataBase1->ExecuteReader();
			while (myReader1->Read()){
				String^ bm = myReader1->GetInt32("count(dept_manager.emp_no)").ToString();
				textBox4->Text = bm;
			}
			MySqlDataAdapter^ sda2 = gcnew MySqlDataAdapter();
			sda2->SelectCommand = cmdDataBase2;
			DataTable^ dbdataset2 = gcnew DataTable();
			sda2->Fill(dbdataset2);
			BindingSource^ bSource2 = gcnew BindingSource();
			bSource2->DataSource = dbdataset2;
			dataGridView2->DataSource = bSource2;
			sda2->Update(dbdataset2);
			conDataBase2->Open();
			myReader2 = cmdDataBase2->ExecuteReader();
			while (myReader2->Read()){}
			MySqlDataAdapter^ sda3 = gcnew MySqlDataAdapter();
			sda3->SelectCommand = cmdDataBase3;
			DataTable^ dbdataset3 = gcnew DataTable();
			sda3->Fill(dbdataset3);
			BindingSource^ bSource3 = gcnew BindingSource();
			bSource3->DataSource = dbdataset3;
			dataGridView3->DataSource = bSource3;
			sda3->Update(dbdataset3);
			conDataBase3->Open();
			myReader3 = cmdDataBase3->ExecuteReader();
			while (myReader3->Read()){}
			
		}
		catch (Exception^ex){
			MessageBox::Show(ex->Message);
		}
	}
			
	
	
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ s = "server = localhost; port = 3306; database = employees; " +
		"username=root;password=zova;";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(s);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("update employees.departments set dept_name='"+textBox2->Text+"' where dept_no='"+textBox1->Text+"' ;", conDataBase);
	MySqlDataReader^ myReader;
	try{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Izmijenjeno");
		while (myReader->Read()){}
	}
	catch (Exception^ex){

		MessageBox::Show(ex->Message);
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ s = "server = localhost; port = 3306; database = employees; " +
		"username=root;password=zova;";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(s);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select  * from employees.employees ;", conDataBase);
	MySqlDataReader^ myReader;
	try{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		while (myReader->Read()){}
		Forma13^ f13 = gcnew Forma13(textBox1->Text);
		f13->ShowDialog();
	}
	catch (Exception^ex){

		MessageBox::Show(ex->Message);
	}
}
		 String^ funk(String^ s){
			 String^ rez;
			 int i = 0;
			 while (s[i] != ' '){
				 rez += s[i];
				 i++;
			 }
			 return rez;
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView3->Columns[2]->DefaultCellStyle->Format = "yyyy-MM-dd";
	dataGridView3->Columns[3]->DefaultCellStyle->Format = "yyyy-MM-dd";
	int selectedrowindex = dataGridView3->SelectedCells[0]->RowIndex;
	DataGridViewRow^ selectedRow = dataGridView3->Rows[selectedrowindex];
	String^ a = selectedRow->Cells["emp_no"]->Value->ToString();
	String^ c = selectedRow->Cells["first_name"]->Value->ToString();
	String^ d = selectedRow->Cells["last_name"]->Value->ToString();

	//textBox7->Text = c1;
	String^ to_date = "9999-01-01";
	String^ s = "server = localhost; port = 3306; database = employees; " +
		"username=root;password=zova;";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(s);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" delete  from employees.dept_emp where emp_no='" + a + "' and dept_no='" + textBox1->Text + "' and to_date='" + to_date + "';", conDataBase);
	MySqlDataReader^ myReader;
	try{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		while (myReader->Read()){
		}
		int rowIndex = dataGridView3->CurrentCell->RowIndex;
		dataGridView3->Rows->RemoveAt(rowIndex);

	}
	catch (Exception^ex){

		MessageBox::Show(ex->Message);
	}
}
};
}
