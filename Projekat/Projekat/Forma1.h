#pragma once
#include <limits>
#include <string>
#include "Forma2.h"
#include "Forma4.h"
#include "Forma5.h"
#include "Forma6.h"
#include "Forma7.h"
#include "Forma8.h"
#include "Forma11.h";
namespace Projekat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Forma1
	/// </summary>
	public ref class Forma1 : public System::Windows::Forms::Form
	{
	public:
		Forma1(void)
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
		~Forma1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox2;

	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;




	


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(45, 37);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Broj radnika je";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(165, 37);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(45, 80);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 19);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Broj odsjeka je";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(168, 80);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 19);
			this->label4->TabIndex = 3;
			this->label4->Text = L"label4";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(579, 37);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(180, 27);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Forma1::comboBox1_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(45, 183);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(175, 19);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Najmanja plata radnika";
			this->label5->Click += gcnew System::EventHandler(this, &Forma1::label5_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(243, 183);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(148, 26);
			this->textBox1->TabIndex = 6;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(45, 240);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(163, 19);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Najveća plata radnika";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(243, 240);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(148, 26);
			this->textBox2->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(243, 294);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(148, 26);
			this->textBox3->TabIndex = 10;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(960, 123);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(258, 69);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Radnici";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Forma1::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(960, 240);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(258, 63);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Odsjek";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Forma1::button3_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(45, 298);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(173, 19);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Prosječna plata radnika";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(452, 41);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(121, 19);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Izaberi radnika:";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(49, 425);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(239, 51);
			this->button4->TabIndex = 16;
			this->button4->Text = L"Unos novih struka";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Forma1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(304, 426);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(205, 50);
			this->button5->TabIndex = 17;
			this->button5->Text = L"Unos novog radnika";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Forma1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(534, 426);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(225, 49);
			this->button6->TabIndex = 18;
			this->button6->Text = L"Dodavanje primanja radnika";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Forma1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(780, 426);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(214, 51);
			this->button7->TabIndex = 19;
			this->button7->Text = L"Dodavanje novog odsjeka";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Forma1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(1019, 426);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(199, 49);
			this->button8->TabIndex = 20;
			this->button8->Text = L"Dodavanje novog radnika na odsjeku";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Forma1::button8_Click);
			// 
			// Forma1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(1284, 520);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Forma1";
			this->Text = L"Projekat";
			this->Load += gcnew System::EventHandler(this, &Forma1::Forma1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Forma1_Load(System::Object^  sender, System::EventArgs^  e) {
		String^ s = "server = localhost; port = 3306; database = employees; " +
			"username=root;password=zova;";
		MySqlConnection^ conDataBase1 = gcnew MySqlConnection(s);
		MySqlConnection^ conDataBase2 = gcnew MySqlConnection(s);
		MySqlCommand^ cmdDataBase1 = gcnew MySqlCommand("select  * from employees.employees;", conDataBase1);
		MySqlCommand^ cmdDataBase2 = gcnew MySqlCommand("select  * from employees.departments;", conDataBase2);
		MySqlDataReader^ myReader1;
		MySqlDataReader^ myReader2;
		try{
			conDataBase1->Open();
			conDataBase2->Open();
			myReader1 = cmdDataBase1->ExecuteReader();
			myReader2 = cmdDataBase2->ExecuteReader();
			int count1 = 0;
			int count = 0;
			while (myReader1->Read()){
				count = count + 1;
			
			}
			while (myReader2->Read()){

				count1 = count1 + 1;
			}
			this->label2->Text = "" + count + "";
			this->label4->Text = "" + count1 + "";
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
			int min = INT_MAX;
			int max = 0;
			int count = 0;
			int suma = 0;
			while (myReader->Read()){
				count++;
				int plata = myReader->GetInt32("salary");
				if (plata < min)
					min = plata;
				if (plata > max)
					max = plata;
				suma += plata;
}
			int rez;
			if (suma == 0)
				rez = 0;
			else
            rez = suma / count;
			String^ min_plata = min.ToString();
			textBox1->Text = min_plata;
			String^ max_plata = max.ToString();
			textBox2->Text = max_plata;
			String^ pros_plata = rez.ToString();
			textBox3->Text = pros_plata;
		}
		catch (Exception^ex){

			MessageBox::Show(ex->Message);
		}
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
					 comboBox1->Items->Add(vemp_no+","+vName+","+vlast_name);
				 }

			 }
			 catch (Exception^ex){

				 MessageBox::Show(ex->Message);
			 }
		 }
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ s = "server = localhost; port = 3306; database = employees; " +
		"username=root;password=zova;";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(s);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select  * from employees.employees ;", conDataBase);
	MySqlDataReader^ myReader;
	try{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		
		while (myReader->Read()){}
		Forma2^ f2 = gcnew Forma2();
		f2->ShowDialog();
	}
	catch (Exception^ex){

		MessageBox::Show(ex->Message);
	}

}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ s = "server = localhost; port = 3306; database = employees; " +
		"username=root;password=zova;";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(s);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select  * from employees.employees ;", conDataBase);
	MySqlDataReader^ myReader;
	try{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		while (myReader->Read()){}
		Forma4^ f4 = gcnew Forma4();
		f4->ShowDialog();
	}
	catch (Exception^ex){

		MessageBox::Show(ex->Message);
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ s = "server = localhost; port = 3306; database = employees; " +
		"username=root;password=zova;";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(s);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select  * from employees.employees ;", conDataBase);
	MySqlDataReader^ myReader;
	try{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		while (myReader->Read()){}
		Forma5^ f5 = gcnew Forma5();
		f5->ShowDialog();
	}
	catch (Exception^ex){

		MessageBox::Show(ex->Message);
	}
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ s = "server = localhost; port = 3306; database = employees; " +
		"username=root;password=zova;";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(s);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select  * from employees.employees ;", conDataBase);
	MySqlDataReader^ myReader;
	try{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		while (myReader->Read()){}
		Forma6^ f6 = gcnew Forma6();
		f6->ShowDialog();
	}
	catch (Exception^ex){

		MessageBox::Show(ex->Message);
	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ s = "server = localhost; port = 3306; database = employees; " +
		"username=root;password=zova;";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(s);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select  * from employees.employees ;", conDataBase);
	MySqlDataReader^ myReader;
	try{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		while (myReader->Read()){}
		Forma7^ f7 = gcnew Forma7();
		f7->ShowDialog();
	}
	catch (Exception^ex){

		MessageBox::Show(ex->Message);
	}
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ s = "server = localhost; port = 3306; database = employees; " +
		"username=root;password=zova;";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(s);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select  * from employees.employees ;", conDataBase);
	MySqlDataReader^ myReader;
	try{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		while (myReader->Read()){}
		Forma8^ f8 = gcnew Forma8();
		f8->ShowDialog();
	}
	catch (Exception^ex){

		MessageBox::Show(ex->Message);
	}
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ s = "server = localhost; port = 3306; database = employees; " +
		"username=root;password=zova;";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(s);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select  * from employees.employees ;", conDataBase);
	MySqlDataReader^ myReader;
	try{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		while (myReader->Read()){}
		Forma11^ f11 = gcnew Forma11();
		f11->ShowDialog();
	}
	catch (Exception^ex){

		MessageBox::Show(ex->Message);
	}
}
};
}
