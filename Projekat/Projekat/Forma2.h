#pragma once
#include "Forma3.h"
#include "F.h"

namespace Projekat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Forma2
	/// </summary>
	public ref class Forma2 : public System::Windows::Forms::Form
	{
	public:
		Forma2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Forma2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;

	protected:







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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(14, 14);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(529, 182);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Forma2::dataGridView1_CellContentClick);
			// 
			// Forma2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(562, 210);
			this->Controls->Add(this->dataGridView1);
			this->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"Forma2";
			this->Text = L"Forma2";
			this->Load += gcnew System::EventHandler(this, &Forma2::Forma2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Forma2_Load(System::Object^  sender, System::EventArgs^  e) {
		String^value= "9999-01-01";
		String^ s = "server = localhost; port = 3306; database = employees; " +
			"username=root;password=zova;";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(s);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from employees.view8;", conDataBase);
		MySqlDataReader^ myReader;
		try{
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDataBase;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource = gcnew BindingSource();
			bSource->DataSource = dbdataset;
			dataGridView1->DataSource = bSource;
			sda->Update(dbdataset);
		}
		catch (Exception^ex){
			MessageBox::Show(ex->Message);
		}
	}
	
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		String^ s = "server = localhost; port = 3306; database = employees; " +
			"username=root;password=zova;";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(s);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select  * from employees.employees ;", conDataBase);
		MySqlDataReader^ myReader;
		String^ id;
		String^ fn;
		String^ ln;
		String^ bd;
		String^ dp;
		String^ idd;
		if (e->RowIndex >= 0){
			DataGridViewRow^ row = this->dataGridView1->Rows[e->RowIndex];
			id = row->Cells["gender"]->Value->ToString();
			fn = row->Cells["first_name"]->Value->ToString();
			ln = row->Cells["last_name"]->Value->ToString();
			bd = row->Cells["birth_date"]->Value->ToString();
			dp = row->Cells["title"]->Value->ToString();
			idd = row->Cells["emp_no"]->Value->ToString();
		}
		try{
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			
			while (myReader->Read()){}
			Forma3^ f3 = gcnew Forma3(id,fn,ln,bd,dp,idd);
			f3->ShowDialog();
			
			
			

		}
		catch (Exception^ex){

			MessageBox::Show(ex->Message);
		}

	}
	};
}
