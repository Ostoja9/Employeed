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
	/// Summary for Forma9
	/// </summary>
	public ref class Forma9 : public System::Windows::Forms::Form
	{
	public:
		Forma9(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Forma9(String^ s)
		{
			InitializeComponent();
			textBox4->Text = s;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Forma9()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox4;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(68, 78);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Plata";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(68, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Datum";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(194, 78);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(194, 124);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(149, 231);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Sacuvaj";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Forma9::button1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(71, 31);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 7;
			// 
			// Forma9
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(362, 295);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Forma9";
			this->Text = L"Forma9";
			this->Load += gcnew System::EventHandler(this, &Forma9::Forma9_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Forma9_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ to_date = "9999-01-01";
	String^ s = "server = localhost; port = 3306; database = employees; " +
		"username=root;password=zova;";
	MySqlConnection^ conDataBase2 = gcnew MySqlConnection(s);
	MySqlCommand^ cmdDataBase2 = gcnew MySqlCommand("update employees.salaries inner join view4 on salaries.emp_no=view4.emp_no and salaries.to_date=view4.max_date set salaries.to_date='" + this->textBox2->Text + "' where salaries.emp_no='" + this->textBox4->Text + "';", conDataBase2);
	MySqlDataReader^ myReader2;
	MySqlConnection^ conDataBase3 = gcnew MySqlConnection(s);
	MySqlCommand^ cmdDataBase3 = gcnew MySqlCommand("insert into employees.salaries (emp_no,salary,from_date,to_date) values('" + this->textBox4->Text + "','" + this->textBox1->Text + "','" + this->textBox2->Text + "','" + to_date + "');", conDataBase3);
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
