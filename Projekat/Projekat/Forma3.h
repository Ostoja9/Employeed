#pragma once
#include "Forma9.h"
#include "Forma12.h"
namespace Projekat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for Forma3
	/// </summary>
	public ref class Forma3 : public System::Windows::Forms::Form
	{
	public:
		Forma3(void)
		{
			InitializeComponent();
			Fillcombo();
			//
			//TODO: Add the constructor code here
			//
		}
	public:
		Forma3(String^ t1, String^ t2, String^ t3, String^ t4,String^ t5, String^ t6)
		{
			
			InitializeComponent();
			textBox4->Text = t1;
			textBox1->Text = t2;
			textBox2->Text = t3;
			textBox3->Text = t4;
			textBox5->Text = t5;
			textBox6->Text = t6;
			Fillcombo();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Forma3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  textBox7;


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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(43, 46);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ime";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(43, 91);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Prezime";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(43, 131);
			this->label3->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Datum rođenja";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(182, 42);
			this->textBox1->Margin = System::Windows::Forms::Padding(5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(164, 27);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(182, 91);
			this->textBox2->Margin = System::Windows::Forms::Padding(5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(164, 27);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(182, 131);
			this->textBox3->Margin = System::Windows::Forms::Padding(5);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(164, 27);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(182, 171);
			this->textBox4->Margin = System::Windows::Forms::Padding(5);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(164, 27);
			this->textBox4->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(47, 175);
			this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Pol";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(47, 214);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Struka";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(182, 211);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(164, 27);
			this->textBox5->TabIndex = 11;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(613, 42);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(277, 174);
			this->dataGridView1->TabIndex = 12;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(47, 264);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 27);
			this->textBox6->TabIndex = 13;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(490, 273);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(408, 90);
			this->dataGridView2->TabIndex = 14;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(275, 244);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 34);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Ažuriraj";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Forma3::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(415, 46);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(174, 33);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Dodaj";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Forma3::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(366, 284);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 34);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Dodaj";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Forma3::button3_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(383, 210);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 28);
			this->comboBox1->TabIndex = 18;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Forma3::comboBox1_SelectedIndexChanged);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(415, 111);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(174, 31);
			this->button4->TabIndex = 19;
			this->button4->Text = L"Obriši";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Forma3::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(366, 340);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(101, 31);
			this->button5->TabIndex = 20;
			this->button5->Text = L"Obriši";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Forma3::button5_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(232, 355);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 27);
			this->textBox7->TabIndex = 21;
			// 
			// Forma3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1076, 430);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"Forma3";
			this->Text = L"Forma3";
			this->Load += gcnew System::EventHandler(this, &Forma3::Forma3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Forma3_Load(System::Object^  sender, System::EventArgs^  e) {
		String^ a = textBox6->Text;
		String^ s = "server = localhost; port = 3306; database = employees; " +
			"username=root;password=zova;";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(s);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select salary,from_date,to_date from employees.salaries where emp_no='" + a + "' ;", conDataBase);
		MySqlDataReader^ myReader;
		MySqlConnection^ conDataBase1 = gcnew MySqlConnection(s);
		MySqlCommand^ cmdDataBase1 = gcnew MySqlCommand("select dept_no,dept_name,from_date,to_date from view10 where emp_no='" + a + "' ;", conDataBase);
		MySqlDataReader^ myReader1;
		try{
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDataBase;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource = gcnew BindingSource();
			bSource->DataSource = dbdataset;
			dataGridView1->DataSource = bSource;
			sda->Update(dbdataset);
			MySqlDataAdapter^ sda1 = gcnew MySqlDataAdapter();
			sda1->SelectCommand = cmdDataBase1;
			DataTable^ dbdataset1 = gcnew DataTable();
			sda1->Fill(dbdataset1);
			BindingSource^ bSource1 = gcnew BindingSource();
			bSource1->DataSource = dbdataset1;
			dataGridView2->DataSource = bSource1;
			sda1->Update(dbdataset1);
			dataGridView2->Columns[2]->DefaultCellStyle->Format = "yyyy-MM-dd";
			dataGridView2->Columns[3]->DefaultCellStyle->Format = "yyyy-MM-dd";
		}
		catch (Exception^ex){
			MessageBox::Show(ex->Message);
		}
	}
			 
	
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ s = "server = localhost; port = 3306; database = employees; " +
		"username=root;password=zova;";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(s);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("Update employees.employees set emp_no='" + this->textBox6->Text + "',birth_date='" + this->textBox3->Text + "',first_name='" + this->textBox1->Text + "',last_name='" + this->textBox2->Text + "',gender='" + this->textBox4->Text + "' where emp_no='" + this->textBox1->Text+"');", conDataBase);
	MySqlDataReader^ myReader;
	MySqlConnection^ conDataBase1 = gcnew MySqlConnection(s);
	MySqlCommand^ cmdDataBase1 = gcnew MySqlCommand("update employees.titles inner join view6"+
		"on titles.emp_no = view6.emp_no and titles.to_date = view6.to_date"+
		"set titles.title ='" + this->textBox5->Text + "'  where titles.emp_no ='" + this->textBox6->Text +"');", conDataBase1);
	MySqlDataReader^ myReader1;
	try{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		conDataBase1->Open();
		myReader1 = cmdDataBase1->ExecuteReader();
		MessageBox::Show("Sacuvano");
		while (myReader->Read()){

		}
		while (myReader1->Read()){

		}

	}
	catch (Exception^ex){

		MessageBox::Show(ex->Message);
	}
}
		  private: void Fillcombo(void){

			  String^ s = "server = localhost; port = 3306; database = employees; " +
				  "username=root;password=zova;";
			  MySqlConnection^ conDataBase = gcnew MySqlConnection(s);
			  MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from employees.all_titles ;", conDataBase);
			  MySqlDataReader^ myReader;
			  try{
				  conDataBase->Open();
				  myReader = cmdDataBase->ExecuteReader();

				  while (myReader->Read()){
					  String^ vName;
					  vName = myReader->GetString("title");
				      comboBox1->Items->Add(vName);
				  }

			  }
			  catch (Exception^ex){

				  MessageBox::Show(ex->Message);
			  }
		  }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ comboboxval = comboBox1->Text;


	String^ s = "server = localhost; port = 3306; database = employees; " +
		"username=root;password=zova;";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(s);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from employees.all_titles where title='" + comboboxval + "' ;", conDataBase);
	MySqlDataReader^ myReader;
	try{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		
		while (myReader->Read()){
			
		}
		textBox5->Text = comboboxval;
	}
	catch (Exception^ex){

		MessageBox::Show(ex->Message);
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ s = "server = localhost; port = 3306; database = employees; " +
		"username=root;password=zova;";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(s);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from employees.salaries;", conDataBase);
	MySqlDataReader^ myReader;
	try{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		while (myReader->Read()){

		}
		Forma9^ f9 = gcnew Forma9(textBox6->Text);
		f9->ShowDialog();
	}
	catch (Exception^ex){

		MessageBox::Show(ex->Message);
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView1->Columns[2]->DefaultCellStyle->Format = "yyyy-MM-dd";
	dataGridView1->Columns[3]->DefaultCellStyle->Format = "yyyy-MM-dd";
	int selectedrowindex = dataGridView1->SelectedCells[0]->RowIndex;
	DataGridViewRow^ selectedRow = dataGridView1->Rows[selectedrowindex];
	String^ a = selectedRow->Cells["salary"]->Value->ToString();
	String^ c = selectedRow->Cells["from_date"]->Value->ToString();
	String^ d = selectedRow->Cells["to_date"]->Value->ToString();
	String^ c1 = funk(c);
	String^ d1 = funk(d);
	//textBox7->Text = c1;
	String^ s = "server = localhost; port = 3306; database = employees; " +
		"username=root;password=zova;";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(s);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" delete  from employees.salaries where salary='" + a + "' and from_date='" + c1 + "' and to_date='" + d1 + "' and emp_no='" + textBox6->Text + "';", conDataBase);
	MySqlDataReader^ myReader;
	try{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		while (myReader->Read()){
		}
		int rowIndex = dataGridView1->CurrentCell->RowIndex;
		dataGridView1->Rows->RemoveAt(rowIndex);

	}
	catch (Exception^ex){

		MessageBox::Show(ex->Message);
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ s = "server = localhost; port = 3306; database = employees; " +
		"username=root;password=zova;";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(s);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from employees.salaries;", conDataBase);
	MySqlDataReader^ myReader;
	try{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		while (myReader->Read()){

		}
		Forma12^ f12 = gcnew Forma12(textBox6->Text);
		f12->ShowDialog();
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
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView2->Columns[2]->DefaultCellStyle->Format = "yyyy-MM-dd";
	dataGridView2->Columns[3]->DefaultCellStyle->Format = "yyyy-MM-dd";
	int selectedrowindex = dataGridView2->SelectedCells[0]->RowIndex;
	DataGridViewRow^ selectedRow = dataGridView2->Rows[selectedrowindex];
	String^ a = selectedRow->Cells["dept_no"]->Value->ToString();
	String^ b = selectedRow->Cells["dept_name"]->Value->ToString();
	String^ c = selectedRow->Cells["from_date"]->Value->ToString();
	String^ d = selectedRow->Cells["to_date"]->Value->ToString();
	String^ c1 = funk(c);
	String^ d1 = funk(d);
	//textBox7->Text = c1;
	String^ s = "server = localhost; port = 3306; database = employees; " +
		"username=root;password=zova;";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(s);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" delete  from employees.dept_emp where dept_no='" + a + "' and from_date='" + c1 + "' and to_date='" + d1 + "' and emp_no='" + textBox6->Text + "';", conDataBase);
	MySqlDataReader^ myReader;
	try{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		while (myReader->Read()){
}
		int rowIndex = dataGridView2->CurrentCell->RowIndex;
		dataGridView2->Rows->RemoveAt(rowIndex);
		
	}
	catch (Exception^ex){

		MessageBox::Show(ex->Message);
	}
//int rowIndex = dataGridView2->CurrentCell->RowIndex;
	//dataGridView2->Rows->RemoveAt(rowIndex);
}
};
}
