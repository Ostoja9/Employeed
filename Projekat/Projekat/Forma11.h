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
	/// Summary for Forma11
	/// </summary>
	public ref class Forma11 : public System::Windows::Forms::Form
	{
	public:
		Forma11(void)
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
		~Forma11()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	protected:
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;

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
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(26, 37);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Forma11::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(323, 37);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 1;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Forma11::comboBox2_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(54, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Odsjeci";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(341, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Radnici";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(192, 37);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(528, 38);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 5;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(711, 41);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(73, 17);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"Menadzer";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(403, 130);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Sacuvaj";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Forma11::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(529, 91);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(479, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Datum";
			// 
			// Forma11
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(841, 165);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Name = L"Forma11";
			this->Text = L"Forma11";
			this->Load += gcnew System::EventHandler(this, &Forma11::Forma11_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void Forma11_Load(System::Object^  sender, System::EventArgs^  e) {
}
		 private: void Fillcombo(void){

			 String^ s = "server = localhost; port = 3306; database = employees; " +
				 "username=root;password=zova;";
			 MySqlConnection^ conDataBase = gcnew MySqlConnection(s);
			 MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from employees.employees;", conDataBase);
			 MySqlDataReader^ myReader;
			 MySqlConnection^ conDataBase1 = gcnew MySqlConnection(s);
			 MySqlCommand^ cmdDataBase1 = gcnew MySqlCommand(" select * from employees.departments;", conDataBase1);
			 MySqlDataReader^ myReader1;
			 try{
				 conDataBase->Open();
				 myReader = cmdDataBase->ExecuteReader();

				 while (myReader->Read()){
					 String^ vName;
					 vName = myReader->GetString("first_name");
					 String^ vemp_no = myReader->GetInt32("emp_no").ToString();
					 String^ vlast_name = myReader->GetString("last_name");
					 comboBox2->Items->Add(vemp_no + "," + vName + "," + vlast_name);
				 }
				 conDataBase1->Open();
				 myReader1 = cmdDataBase1->ExecuteReader();
				 while (myReader1->Read()){
					 String^ dname;
					 dname = myReader1->GetString("dept_name");
					 String^ dno = myReader1->GetString("dept_no");
					 comboBox1->Items->Add(dno + "," + dname);
				 }
			 }
			 catch (Exception^ex){

				 MessageBox::Show(ex->Message);
			 }
		 }
				  String^ funk(String^ s){
					  String^ rez;
					  int i = 0;
					  while (s[i] != ','){
						  rez += s[i];
						  i++;
					  }
					  return rez;
				  }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ comboval = comboBox1->Text;
	String^ s = "server = localhost; port = 3306; database = employees; " +
		"username=root;password=zova;";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(s);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from employees.departments where dept_no='" + funk(comboval) + "';", conDataBase);
	MySqlDataReader^ myReader;
	try{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		if (myReader->Read()){
			String^ vName;
			vName = myReader->GetString("dept_no");
			textBox1->Text = vName;

		}

	}
	catch (Exception^ex){

		MessageBox::Show(ex->Message);
	}
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ comboval = comboBox2->Text;
	String^ s = "server = localhost; port = 3306; database = employees; " +
		"username=root;password=zova;";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(s);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from employees.employees where emp_no='" + funk(comboval) + "';", conDataBase);
	MySqlDataReader^ myReader;
	try{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		if (myReader->Read()){
			String^ vName;
			vName = myReader->GetString("emp_no");
			textBox2->Text = vName;

		}

	}
	catch (Exception^ex){

		MessageBox::Show(ex->Message);
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox1->Checked){

		String^ to_date = "9999-01-01";
		String^ s = "server = localhost; port = 3306; database = employees; " +
			"username=root;password=zova;";
		MySqlConnection^ conDataBase2 = gcnew MySqlConnection(s);
		MySqlCommand^ cmdDataBase2 = gcnew MySqlCommand("update employees.dept_emp inner join current_dept_emp on dept_emp.emp_no=current_dept_emp.emp_no and dept_emp.to_date=current_dept_emp.to_date set dept_emp.to_date='" + this->textBox3->Text + "' where dept_emp.emp_no='" + this->textBox2->Text + "';", conDataBase2);
		MySqlDataReader^ myReader2;
		MySqlConnection^ conDataBase3 = gcnew MySqlConnection(s);
		MySqlCommand^ cmdDataBase3 = gcnew MySqlCommand("insert into employees.dept_emp (emp_no,dept_no,from_date,to_date) values('" + this->textBox2->Text + "','" + this->textBox1->Text + "','" + this->textBox3->Text + "','" + to_date + "');", conDataBase3);
		MySqlDataReader^ myReader3;
		MySqlConnection^ conDataBase = gcnew MySqlConnection(s);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into employees.dept_manager (emp_no,dept_no,from_date,to_date) values('" + this->textBox2->Text + "','" + this->textBox1->Text + "','" + this->textBox3->Text + "','" + to_date + "');", conDataBase);
		MySqlDataReader^ myReader;
		try{
			conDataBase2->Open();
			myReader2 = cmdDataBase2->ExecuteReader();
			conDataBase3->Open();
			myReader3 = cmdDataBase3->ExecuteReader();
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			MessageBox::Show("Saved");
			while (myReader2->Read()){
			}
			while (myReader3->Read()){
			}
			while (myReader->Read()){
			}
		}
		catch (Exception^ex){

			MessageBox::Show(ex->Message);
		}
	}
	else
	{
		String^ to_date = "9999-01-01";
		String^ s = "server = localhost; port = 3306; database = employees; " +
			"username=root;password=zova;";
		MySqlConnection^ conDataBase2 = gcnew MySqlConnection(s);
		MySqlCommand^ cmdDataBase2 = gcnew MySqlCommand("update employees.dept_emp inner join current_dept_emp on dept_emp.emp_no=current_dept_emp.emp_no and dept_emp.to_date=current_dept_emp.to_date set dept_emp.to_date='" + this->textBox3->Text + "' where dept_emp.emp_no='" + this->textBox2->Text + "';", conDataBase2);
		MySqlDataReader^ myReader2;
		MySqlConnection^ conDataBase3 = gcnew MySqlConnection(s);
		MySqlCommand^ cmdDataBase3 = gcnew MySqlCommand("insert into employees.dept_emp (emp_no,dept_no,from_date,to_date) values('" + this->textBox2->Text + "','" + this->textBox1->Text + "','" + this->textBox3->Text + "','" + to_date + "');", conDataBase3);
		MySqlDataReader^ myReader3;
	
		try{
			conDataBase2->Open();
			myReader2 = cmdDataBase2->ExecuteReader();
			conDataBase3->Open();
			myReader3 = cmdDataBase3->ExecuteReader();
			
			MessageBox::Show("Saved");
			while (myReader2->Read()){
			}
			while (myReader3->Read()){
			}
			
		}
		catch (Exception^ex){

			MessageBox::Show(ex->Message);
		}
	}

}
};
}
