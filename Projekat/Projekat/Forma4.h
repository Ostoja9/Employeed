#pragma once
#include "Forma10.h"

namespace Projekat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for Forma4
	/// </summary>
	public ref class Forma4 : public System::Windows::Forms::Form
	{
	public:
		Forma4(void)
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
		~Forma4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;

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
			this->dataGridView1->Location = System::Drawing::Point(12, 42);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(195, 170);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Forma4::dataGridView1_CellContentClick);
			// 
			// Forma4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(219, 262);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Forma4";
			this->Text = L"Forma4";
			this->Load += gcnew System::EventHandler(this, &Forma4::Forma4_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Forma4_Load(System::Object^  sender, System::EventArgs^  e) {
		String^ s = "server = localhost; port = 3306; database = employees; " +
			"username=root;password=zova;";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(s);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from broj_zz", conDataBase);
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
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select  * from employees.broj_zz ;", conDataBase);
		MySqlDataReader^ myReader;
		String^ id;
		String^ fn;
		String^ idd;
		if (e->RowIndex >= 0){
			DataGridViewRow^ row = this->dataGridView1->Rows[e->RowIndex];
			id = row->Cells["dept_name"]->Value->ToString();
			fn = row->Cells["count(v_full_employees.emp_no)"]->Value->ToString();
			idd = row->Cells["dept_no"]->Value->ToString();
		}
		
		try{
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			
			while (myReader->Read()){}
			Forma10^ f10 = gcnew Forma10(id,fn,idd);
			f10->ShowDialog();




		}
		catch (Exception^ex){

			MessageBox::Show(ex->Message);
		}
	}
	};
}
