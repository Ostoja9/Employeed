#pragma once

namespace Projekat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Forma7
	/// </summary>
	public ref class Forma7 : public System::Windows::Forms::Form
	{
	public:
		Forma7(void)
		{
			InitializeComponent();
			Fillcombo();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Forma7()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(111, 6);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(128, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Forma7::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Izaberi radnika";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nova plata";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(98, 82);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(142, 20);
			this->textBox1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(54, 143);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(172, 41);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Sačuvaj";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Forma7::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Datum";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(99, 114);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(140, 20);
			this->textBox2->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(21, 47);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(18, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"ID";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(99, 44);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(140, 20);
			this->textBox3->TabIndex = 8;
			// 
			// Forma7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"Forma7";
			this->Text = L"Forma7";
			this->Load += gcnew System::EventHandler(this, &Forma7::Forma7_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Forma7_Load(System::Object^  sender, System::EventArgs^  e) {
	}
				 private: void Fillcombo(void){

					 String^ s = "server = localhost; port = 3306; database = employees; " +
						 "username=root;password=zova;";
					 MySqlConnection^ conDataBase = gcnew MySqlConnection(s);
					 MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from employees.employees ;", conDataBase);
					 MySqlDataReader^ myReader;
					 try{
						 conDataBase->Open();
						 myReader = cmdDataBase->ExecuteReader();

						 while (myReader->Read()){
							 String^ vName;
							 vName = myReader->GetString("first_name");
							 String^ vemp_no = myReader->GetInt32("emp_no").ToString();
							 String^ vlast_name = myReader->GetString("last_name");
							 comboBox1->Items->Add(vemp_no + " " + vName + " " + vlast_name);
						 }

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

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		String^ comboboxval = comboBox1->Text;

		String^ k = funk(comboboxval);

		String^ s = "server = localhost; port = 3306; database = employees; " +
			"username=root;password=zova;";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(s);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from employees.salaries where emp_no='" + k + "' ;", conDataBase);
		MySqlDataReader^ myReader;
		try{
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			while (myReader->Read()){
				
				
			}
			String^ v = myReader->GetInt32("emp_no").ToString();
			textBox3->Text = v;
			
			
		}
		catch (Exception^ex){

			MessageBox::Show(ex->Message);
		}
	
	}
			 String^ funk1(String^ s){
				 String^ rez;
				 int i = 0;
				 while (s[i] != ' '){
					 rez += s[i];
					 i++;
				 }
				 return rez;
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ comboBoxVal = comboBox1->Text;
	String^ to_date = "9999-01-01";
	String^ s = "server = localhost; port = 3306; database = employees; " +
		"username=root;password=zova;";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(s);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from employees.view1 where emp_no='" + funk1(comboBoxVal) + "' ;", conDataBase);
	MySqlDataReader^ myReader;
	MySqlConnection^ conDataBase2 = gcnew MySqlConnection(s);
	MySqlCommand^ cmdDataBase2 = gcnew MySqlCommand("update employees.salaries inner join view4 on salaries.emp_no=view4.emp_no and salaries.to_date=view4.max_date set salaries.to_date='" + this->textBox2->Text + "' where salaries.emp_no='" + this->textBox3->Text + "';", conDataBase2);
	MySqlDataReader^ myReader2;
	MySqlConnection^ conDataBase3 = gcnew MySqlConnection(s);
	MySqlCommand^ cmdDataBase3 = gcnew MySqlCommand("insert into employees.salaries (emp_no,salary,from_date,to_date) values('" + this->textBox3->Text + "','" + this->textBox1->Text + "','" + this->textBox2->Text + "','" + to_date + "');", conDataBase3);
	MySqlDataReader^ myReader3;
	try{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
	    conDataBase2->Open();
		myReader2 = cmdDataBase2->ExecuteReader();
		conDataBase3->Open();
		myReader3 = cmdDataBase3->ExecuteReader();
		MessageBox::Show("Saved");
		while(myReader->Read()){
		}
		while (myReader2->Read()){
		}
		while (myReader3->Read()){
		}
	}
	catch (Exception^ex){

		MessageBox::Show(ex->Message);
	}
}

};
}
