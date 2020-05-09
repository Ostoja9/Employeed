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
	/// Summary for Forma13
	/// </summary>
	public ref class Forma13 : public System::Windows::Forms::Form
	{
	public:
		Forma13(void)
		{
			InitializeComponent();
			Fillcombo();
			//
			//TODO: Add the constructor code here
			//
		}
		Forma13(String^ s)
		{
			InitializeComponent();
			Fillcombo();
			textBox3->Text = s;
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Forma13()
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
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(255, 24);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Forma13::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(27, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(27, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Datum";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(88, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(88, 69);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 95);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Sacuvaj";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Forma13::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(309, 98);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 6;
			// 
			// Forma13
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(421, 130);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"Forma13";
			this->Text = L"Forma13";
			this->Load += gcnew System::EventHandler(this, &Forma13::Forma13_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Forma13_Load(System::Object^  sender, System::EventArgs^  e) {
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
							String^ id = myReader->GetString("emp_no");
							String^ f_name = myReader->GetString("first_name");
							String^ l_name = myReader->GetString("last_name");
							comboBox1->Items->Add(id + " " + f_name+ " "+l_name);
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
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from employees.employees where emp_no='" + k + "' ;", conDataBase);
	MySqlDataReader^ myReader;
	try{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		while (myReader->Read()){

		}
		String^ id = myReader->GetString("emp_no");
		textBox1->Text = id;
	
	}
	catch (Exception^ex){

		MessageBox::Show(ex->Message);
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ to_date = "9999-01-01";
	String^ s = "server = localhost; port = 3306; database = employees; " +
		"username=root;password=zova;";
	MySqlConnection^ conDataBase2 = gcnew MySqlConnection(s);
	MySqlCommand^ cmdDataBase2 = gcnew MySqlCommand("update employees.dept_emp inner join current_dept_emp on dept_emp.emp_no=current_dept_emp.emp_no and dept_emp.to_date=current_dept_emp.to_date set dept_emp.to_date='" + this->textBox3->Text + "' where dept_emp.emp_no='" + this->textBox1->Text + "' and dept_emp.dept_no='" + this->textBox3->Text + "';", conDataBase2);
	MySqlDataReader^ myReader2;
	MySqlConnection^ conDataBase3 = gcnew MySqlConnection(s);
	MySqlCommand^ cmdDataBase3 = gcnew MySqlCommand("insert into employees.dept_emp (emp_no,dept_no,from_date,to_date) values('" + this->textBox1->Text + "','" + this->textBox3->Text + "','" + this->textBox2->Text + "','" + to_date + "');", conDataBase3);
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
};
}
