#ifndef _FMAIN_H
#define _FMAIN_H
#pragma once
#include "Login.h"
#include "NewCon.h"

/*
* �� ���� ���
*/
namespace Project1 {

	///
	/// ���Ǵ� namespace ����
	///
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;	
	using namespace System::Drawing;
	using namespace System::Data;
	using namespace MySql::Data::Common;
	using namespace MySql::Data::MySqlClient;
	using namespace std;


	/// <summary>
	/// FMain�� ���� ����Դϴ�.
	/// </summary>
	public ref class FMain : public System::Windows::Forms::Form
	{
	public:
		FMain(void)
		{
			InitializeComponent();
			//
			//TODO: ������ �ڵ带 ���⿡ �߰��մϴ�.
			//
		}
		FMain(String^ val) {
			InitializeComponent();
			this->index = val;
		}
	protected:
		/// <summary>
		/// ��� ���� ��� ���ҽ��� �����մϴ�.
		/// </summary>
		~FMain()
		{
			if (components)
			{
				delete components;
			}
		}

	///
	/// ���� ���� ���� ����
	///
	private: System::Windows::Forms::Label^  Title_lbl;
	private: System::Windows::Forms::ListView^  Post_liview;
	private: System::Windows::Forms::ColumnHeader^  Post_num;
	private: System::Windows::Forms::ColumnHeader^  Post_title;
	private: System::Windows::Forms::ColumnHeader^  Post_name;
	private: System::Windows::Forms::ColumnHeader^  Post_mTel;
	private: System::Windows::Forms::ColumnHeader^  Post_bool;
	private: System::Windows::Forms::Button^  New_btn;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  User_lbl;
	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ColumnHeader^  Post_maddr;
	private: System::Windows::Forms::Button^  Fix_btn;
	///
	/// �����ͺ��̽� ���� ������ ���� ����
	///
	private: String^ index = "-1"; // ȸ����ȣ ��ȣ �ʱ�ȭ (�������޿� ���)
			 String^ post_num =  "-1"; // �� ��ȣ �ʱ�ȭ
			 String^ post_bool = "-1"; // ü�Ῡ�� �ʱ�ȭ ( ü�� 1, ��ü�� 0 )
			 String^ post_title = "None"; // ������ �ʱ�ȭ
			 String^ post_name = "None"; // �۾��� �ʱ�ȭ
			 String^ post_addr = "None"; // �ּ� �ʱ�ȭ
			 String^ post_tel = "None"; // ��ȭ��ȣ �ʱ�ȭ
			 int i = 0;

	private:
		/// <summary>
		/// �ʼ� �����̳� �����Դϴ�.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����̳� ������ �ʿ��� �޼����Դϴ�. 
		/// �� �޼����� ������ �ڵ� ������� �������� ������.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Title_lbl = (gcnew System::Windows::Forms::Label());
			this->Post_liview = (gcnew System::Windows::Forms::ListView());
			this->Post_num = (gcnew System::Windows::Forms::ColumnHeader());
			this->Post_title = (gcnew System::Windows::Forms::ColumnHeader());
			this->Post_maddr = (gcnew System::Windows::Forms::ColumnHeader());
			this->Post_name = (gcnew System::Windows::Forms::ColumnHeader());
			this->Post_mTel = (gcnew System::Windows::Forms::ColumnHeader());
			this->Post_bool = (gcnew System::Windows::Forms::ColumnHeader());
			this->New_btn = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->User_lbl = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Fix_btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Title_lbl
			// 
			this->Title_lbl->AutoSize = true;
			this->Title_lbl->Font = (gcnew System::Drawing::Font(L"���ʷҵ���", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->Title_lbl->Location = System::Drawing::Point(12, 9);
			this->Title_lbl->Name = L"Title_lbl";
			this->Title_lbl->Size = System::Drawing::Size(124, 27);
			this->Title_lbl->TabIndex = 0;
			this->Title_lbl->Text = L"���� �� ���";
			// 
			// Post_liview (����Ʈ�� �̸�)
			// 
			this->Post_liview->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->Post_num, this->Post_title,
					this->Post_maddr, this->Post_name, this->Post_mTel, this->Post_bool
			});
			this->Post_liview->GridLines = true;
			this->Post_liview->Location = System::Drawing::Point(17, 51);
			this->Post_liview->Name = L"Post_liview";
			this->Post_liview->Scrollable = false;
			this->Post_liview->Size = System::Drawing::Size(610, 276);
			this->Post_liview->TabIndex = 1;
			this->Post_liview->UseCompatibleStateImageBehavior = false;
			this->Post_liview->View = System::Windows::Forms::View::Details;
			// 
			// Post_num (����Ʈ�� 0��° columns)
			// 
			this->Post_num->Text = L"��ȣ";
			this->Post_num->Width = 40;
			// 
			// Post_title (����Ʈ�� 1��° columns)
			// 
			this->Post_title->Text = L"����";
			this->Post_title->Width = 156;
			// 
			// Post_maddr (����Ʈ�� 2��° columns)
			// 
			this->Post_maddr->Text = L"�ּ�";
			this->Post_maddr->Width = 182;
			// 
			// Post_name (����Ʈ�� 3��° columns)
			// 
			this->Post_name->Text = L"�̸�";
			this->Post_name->Width = 64;
			// 
			// Post_mTel (����Ʈ�� 4��° columns)
			// 
			this->Post_mTel->Text = L"��ȭ��ȣ";
			this->Post_mTel->Width = 105;
			// 
			// Post_bool (����Ʈ�� 5��° columns)
			// 
			this->Post_bool->Text = L"��û����";
			// 
			// New_btn (���۾��� ��ư)
			// 
			this->New_btn->Location = System::Drawing::Point(17, 333);
			this->New_btn->Name = L"New_btn";
			this->New_btn->Size = System::Drawing::Size(290, 82);
			this->New_btn->TabIndex = 2;
			this->New_btn->Text = L"�� �� ����";
			this->New_btn->UseVisualStyleBackColor = true;
			this->New_btn->Click += gcnew System::EventHandler(this, &FMain::New_btn_Click);
			// 
			// button4 (�����ϱ� ��ư)
			// 
			this->button4->Location = System::Drawing::Point(332, 333);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(295, 82);
			this->button4->TabIndex = 5;
			this->button4->Text = L"�����ϱ�";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &FMain::button4_Click);
			// 
			// User_lbl (ID������� IDǥ�ö�)
			// 
			this->User_lbl->AutoSize = true;
			this->User_lbl->Location = System::Drawing::Point(512, 35);
			this->User_lbl->Name = L"User_lbl";
			this->User_lbl->Size = System::Drawing::Size(28, 12);
			this->User_lbl->TabIndex = 6;
			this->User_lbl->Text = L"ID : ";
			// 
			// button1 (�α��� ��ư)
			// 
			this->button1->Location = System::Drawing::Point(546, 9);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FMain::button1_Click);
			// 
			// Fix_btn (���ΰ�ħ ��ư)
			// 
			this->Fix_btn->AutoSize = true;
			this->Fix_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Fix_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Fix_btn->Location = System::Drawing::Point(142, 16);
			this->Fix_btn->Name = L"Fix_btn";
			this->Fix_btn->Size = System::Drawing::Size(65, 24);
			this->Fix_btn->TabIndex = 8;
			this->Fix_btn->Text = L"���ΰ�ħ";
			this->Fix_btn->UseVisualStyleBackColor = true;
			this->Fix_btn->Click += gcnew System::EventHandler(this, &FMain::Fix_btn_Click);
			// 
			// FMain (������ �̸�)
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(633, 425);
			this->Controls->Add(this->Fix_btn);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->User_lbl);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->New_btn);
			this->Controls->Add(this->Post_liview);
			this->Controls->Add(this->Title_lbl);
			this->Name = L"FMain";
			this->Text = L"��λ��� v1.0 (Manager)";
			this->ResumeLayout(false);
			this->PerformLayout();

			///
			/// �����κκп��� Listview�� ���뿡 database ������� ��� post(��)���� ���
			///
			MySqlConnection^ connection = gcnew MySqlConnection("server=my5008.gabiadb.com;user=edcation; database=education; port=3306; password=q1w2e3r4**");

			//MySql ���Ṯ
			MySqlCommand^ command = gcnew MySqlCommand("select * from education.Post;", connection);
			//���� ���๮
			MySqlDataReader^ reader;
			try {
				connection->Open();
				reader = command->ExecuteReader();
				while (reader->Read()) {
					this->post_num = (reader->GetString("Post_num")); // ��ȣ
					this->post_title = (reader->GetString("Post_title")); // ������
					this->post_name = (reader->GetString("Post_Name")); // �۾���
					this->post_addr = (reader->GetString("Post_Addr")); // �ּ�
					this->post_tel = (reader->GetString("Post_Tel")); // ��ȭ��ȣ
					this->post_bool = (reader->GetString("Post_bool")); // ȸ������
					this->Post_liview->Items->Add(this->post_num); // ��ȣ �߰�
					this->Post_liview->Items[i]->SubItems->AddRange(gcnew cli::array<String ^>(5) {
						post_title, post_addr, post_name, post_tel, post_bool
					}); // ������������� ����, �ּ�, �̸�, ȸ������ �߰�
					i++; // �ݺ�
				}
				connection->Close(); // �ݺ� �� �����ͺ��̽� ���� ����
			}
			catch (Exception^ e) { // ����ó��
				MessageBox::Show(e->Message); // �޽������� ���
				connection->Close();// �����ͺ��̽� ��������
			}
		}
#pragma endregion
		///
		/// �ٸ������� ���� ���޿� ���� index set,get �޼ҵ�
		///
		public:
		void setIndex(String^ val) {
			index = val;
		}
		String^ getIndex() {
			return index;
		}

		///
		/// ���� ���� ��ư Ŭ�� �̺�Ʈ
		///
		private: System::Void New_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			if (this->index != "-1") { // index(ȸ����ȣ)�� -1(�ʱ�ȭ��)�� ����������
				NewCon^ Item = gcnew NewCon(getIndex()); // ȸ������ ���� ȸ���� ���� �� ����
				Item->ShowDialog(); // ����������� �����
			}
			else { // �׿��� ��� (-1)�̸�
				NewCon^ Item = gcnew NewCon(); // ��ȸ���� ���� �� ����
				Item->ShowDialog(); // ����������� �����
			}
		}

		///
		/// ���� ��ư Ŭ�� �̺�Ʈ
		///
		private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {		
			this->Close(); // ���� �� �ݱ�
		}

		///
		/// Login ��ư Ŭ�� �̺�Ʈ
		///
		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			Login^ login = gcnew Login(); // �α��� �� ��ü ����
			login->ShowDialog(); // ��� �������� �����
			this->setIndex(login->getIndex()); // login���� ������ ȸ����ȣ(index)�� ������ ȸ����ȣ(index) ����
			if (this->index != "-1") { // ȸ����ȣ�� -1�� �ƴϸ�
				MySqlConnection^ connection = gcnew MySqlConnection("server=my5008.gabiadb.com;user=edcation; database=education; port=3306; password=q1w2e3r4**");
				//MySql ���Ṯ
				MySqlCommand^ command = gcnew MySqlCommand("select * from education.Member where memberNum = " + this->index + ";", connection);
				//���� ���๮ (ȸ����ȣ�� �����ͺ��̽� ���� �˻�)
				MySqlDataReader^ reader; 
				try {
					connection->Open(); // �����ͺ��̽� Open
					reader = command->ExecuteReader(); // ������ ����
					int count = 0; // Ȯ�� ���� �ʱ�ȭ
					while (reader->Read()) { // �о���̴� ���� ������ ���� �ݺ�
						count++; // ���ǿ� �´� ���������� ���� ������ count++
					}
					if (count == 1) { // �о�� ���� �ϳ��� ���
						User_lbl->Text = "ID : " + (reader->GetString("memberID")); // ���� ǥ�� �󺧿� idǥ��
					}
					button1->Hide(); // �α��� ��ư ���߱�
				}
				catch (Exception^ e) {
					MessageBox::Show(e->Message);
				}
			}
		}

		///
		/// ���ΰ�ħ ��ư Ŭ�� �̺�Ʈ
		///
		private: System::Void Fix_btn_Click(System::Object^  sender, System::EventArgs^  e) {

			this->Post_liview->Clear(); // ����Ʈ�並 ������

			this->Post_liview->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->Post_num, this->Post_title,
					this->Post_maddr, this->Post_name, this->Post_mTel, this->Post_bool
			}); // �ٽ� �� Į�� ����

			MySqlConnection^ connection = gcnew MySqlConnection("server=my5008.gabiadb.com;user=edcation; database=education; port=3306; password=q1w2e3r4**");
			//MySql ���Ṯ
			MySqlCommand^ command = gcnew MySqlCommand("select * from education.Post;", connection);
			//���� ���๮
			MySqlDataReader^ reader;
			try {
				connection->Open();
				reader = command->ExecuteReader();
				i = 0;
				while (reader->Read()) {
					this->post_num = (reader->GetString("Post_num")); // ��ȣ
					this->post_title = (reader->GetString("Post_title")); // ������
					this->post_name = (reader->GetString("Post_Name")); // �۾���
					this->post_addr = (reader->GetString("Post_Addr")); // �ּ�
					this->post_tel = (reader->GetString("Post_Tel")); // ��ȭ��ȣ
					this->post_bool = (reader->GetString("Post_bool")); // ü�Ῡ��
					this->Post_liview->Items->Add(this->post_num); // ��ȣ �߰�
					this->Post_liview->Items[i]->SubItems->AddRange(gcnew cli::array<String ^>(5) {
						post_title, post_addr, post_name, post_tel, post_bool
					}); // ������������� ����, �̸�, ����Ƚ��, ü�Ῡ�� �߰�
					i++;
				}
				connection->Close();
			}
			catch (Exception^ e) {
				MessageBox::Show(e->Message);
				connection->Close();
			}
		}
	};
}
#endif