#include "Applicate.h"
#pragma once

/*
* ȸ������ �� ���
*/
namespace Project1 {
	///
	/// ���Ǵ� namespace ����
	///
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Signup�� ���� ����Դϴ�.
	/// </summary>
	public ref class Signup : public System::Windows::Forms::Form
	{
	public:
		Signup(void)
		{
			InitializeComponent();
			Password_txt->PasswordChar = '*';
			//
			//TODO: ������ �ڵ带 ���⿡ �߰��մϴ�.
			//
		}

	protected:
		/// <summary>
		/// ��� ���� ��� ���ҽ��� �����մϴ�.
		/// </summary>
		~Signup()
		{
			if (components)
			{
				delete components;
			}
		}

	///
	/// ���� ���� ���� ����
	///	
	private: System::Windows::Forms::Label^  Name_lbl;
	private: System::Windows::Forms::Label^  Id_lbl;
	private: System::Windows::Forms::Label^  Password_lbl;
	private: System::Windows::Forms::Label^  Addr_lbl;
	private: System::Windows::Forms::Label^  Tel_lbl;
	private: System::Windows::Forms::TextBox^  Name_txt;
	private: System::Windows::Forms::TextBox^  Id_txt;
	private: System::Windows::Forms::TextBox^  Password_txt;
	private: System::Windows::Forms::TextBox^  Addr_txt;
	private: System::Windows::Forms::TextBox^  Tel_txt;
	private: System::Windows::Forms::Button^  Overlap_btn;
	private: System::Windows::Forms::Button^  Sign_btn;
	private: System::Windows::Forms::Button^  Cancle_btn;
	private: int check = -1; // �ߺ�Ȯ�� �˻�

	private:
		/// <summary>
		/// �ʼ� �����̳� �����Դϴ�.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����̳� ������ �ʿ��� �޼����Դϴ�. 
		/// �� �޼����� ������ �ڵ� ������� �������� ������.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Name_lbl = (gcnew System::Windows::Forms::Label());
			this->Id_lbl = (gcnew System::Windows::Forms::Label());
			this->Password_lbl = (gcnew System::Windows::Forms::Label());
			this->Addr_lbl = (gcnew System::Windows::Forms::Label());
			this->Tel_lbl = (gcnew System::Windows::Forms::Label());
			this->Name_txt = (gcnew System::Windows::Forms::TextBox());
			this->Id_txt = (gcnew System::Windows::Forms::TextBox());
			this->Password_txt = (gcnew System::Windows::Forms::TextBox());
			this->Addr_txt = (gcnew System::Windows::Forms::TextBox());
			this->Tel_txt = (gcnew System::Windows::Forms::TextBox());
			this->Overlap_btn = (gcnew System::Windows::Forms::Button());
			this->Sign_btn = (gcnew System::Windows::Forms::Button());
			this->Cancle_btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Name_lbl
			// 
			this->Name_lbl->AutoSize = true;
			this->Name_lbl->Location = System::Drawing::Point(34, 18);
			this->Name_lbl->Name = L"Name_lbl";
			this->Name_lbl->Size = System::Drawing::Size(29, 12);
			this->Name_lbl->TabIndex = 0;
			this->Name_lbl->Text = L"�̸�";
			// 
			// Id_lbl
			// 
			this->Id_lbl->AutoSize = true;
			this->Id_lbl->Location = System::Drawing::Point(34, 46);
			this->Id_lbl->Name = L"Id_lbl";
			this->Id_lbl->Size = System::Drawing::Size(41, 12);
			this->Id_lbl->TabIndex = 1;
			this->Id_lbl->Text = L"���̵�";
			// 
			// Password_lbl
			// 
			this->Password_lbl->AutoSize = true;
			this->Password_lbl->Location = System::Drawing::Point(34, 77);
			this->Password_lbl->Name = L"Password_lbl";
			this->Password_lbl->Size = System::Drawing::Size(53, 12);
			this->Password_lbl->TabIndex = 2;
			this->Password_lbl->Text = L"��й�ȣ";
			// 
			// Addr_lbl
			// 
			this->Addr_lbl->AutoSize = true;
			this->Addr_lbl->Location = System::Drawing::Point(34, 104);
			this->Addr_lbl->Name = L"Addr_lbl";
			this->Addr_lbl->Size = System::Drawing::Size(29, 12);
			this->Addr_lbl->TabIndex = 3;
			this->Addr_lbl->Text = L"�ּ�";
			// 
			// Tel_lbl
			// 
			this->Tel_lbl->AutoSize = true;
			this->Tel_lbl->Location = System::Drawing::Point(34, 131);
			this->Tel_lbl->Name = L"Tel_lbl";
			this->Tel_lbl->Size = System::Drawing::Size(53, 12);
			this->Tel_lbl->TabIndex = 4;
			this->Tel_lbl->Text = L"��ȭ��ȣ";
			// 
			// Name_txt
			// 
			this->Name_txt->Location = System::Drawing::Point(92, 15);
			this->Name_txt->Name = L"Name_txt";
			this->Name_txt->Size = System::Drawing::Size(100, 21);
			this->Name_txt->TabIndex = 5;
			// 
			// Id_txt
			// 
			this->Id_txt->Location = System::Drawing::Point(92, 43);
			this->Id_txt->Name = L"Id_txt";
			this->Id_txt->Size = System::Drawing::Size(100, 21);
			this->Id_txt->TabIndex = 6;
			// 
			// Password_txt
			// 
			this->Password_txt->Location = System::Drawing::Point(92, 74);
			this->Password_txt->Name = L"Password_txt";
			this->Password_txt->Size = System::Drawing::Size(100, 21);
			this->Password_txt->TabIndex = 7;
			// 
			// Addr_txt
			// 
			this->Addr_txt->Location = System::Drawing::Point(92, 101);
			this->Addr_txt->Name = L"Addr_txt";
			this->Addr_txt->Size = System::Drawing::Size(100, 21);
			this->Addr_txt->TabIndex = 8;
			// 
			// Tel_txt
			// 
			this->Tel_txt->Location = System::Drawing::Point(92, 128);
			this->Tel_txt->Name = L"Tel_txt";
			this->Tel_txt->Size = System::Drawing::Size(100, 21);
			this->Tel_txt->TabIndex = 9;
			// 
			// Overlap_btn
			// 
			this->Overlap_btn->Location = System::Drawing::Point(198, 43);
			this->Overlap_btn->Name = L"Overlap_btn";
			this->Overlap_btn->Size = System::Drawing::Size(75, 23);
			this->Overlap_btn->TabIndex = 10;
			this->Overlap_btn->Text = L"�ߺ�Ȯ��";
			this->Overlap_btn->UseVisualStyleBackColor = true;
			this->Overlap_btn->Click += gcnew System::EventHandler(this, &Signup::Overlap_btn_Click);
			// 
			// Sign_btn
			// 
			this->Sign_btn->Location = System::Drawing::Point(117, 155);
			this->Sign_btn->Name = L"Sign_btn";
			this->Sign_btn->Size = System::Drawing::Size(75, 23);
			this->Sign_btn->TabIndex = 11;
			this->Sign_btn->Text = L"����";
			this->Sign_btn->UseVisualStyleBackColor = true;
			this->Sign_btn->Click += gcnew System::EventHandler(this, &Signup::Sign_btn_Click);
			// 
			// Cancle_btn
			// 
			this->Cancle_btn->Location = System::Drawing::Point(198, 155);
			this->Cancle_btn->Name = L"Cancle_btn";
			this->Cancle_btn->Size = System::Drawing::Size(75, 23);
			this->Cancle_btn->TabIndex = 12;
			this->Cancle_btn->Text = L"���";
			this->Cancle_btn->UseVisualStyleBackColor = true;
			this->Cancle_btn->Click += gcnew System::EventHandler(this, &Signup::Cancle_btn_Click);
			// 
			// Signup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(296, 196);
			this->Controls->Add(this->Cancle_btn);
			this->Controls->Add(this->Sign_btn);
			this->Controls->Add(this->Overlap_btn);
			this->Controls->Add(this->Tel_txt);
			this->Controls->Add(this->Addr_txt);
			this->Controls->Add(this->Password_txt);
			this->Controls->Add(this->Id_txt);
			this->Controls->Add(this->Name_txt);
			this->Controls->Add(this->Tel_lbl);
			this->Controls->Add(this->Addr_lbl);
			this->Controls->Add(this->Password_lbl);
			this->Controls->Add(this->Id_lbl);
			this->Controls->Add(this->Name_lbl);
			this->Name = L"Signup";
			this->Text = L"ȸ������";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	///
	/// �ߺ�Ȯ�� ��ư Ŭ�� �޼ҵ�
	///
	private: System::Void Overlap_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		check = -1; // Ȯ�ΰ� �ʱ�ȭ -1
		MySqlConnection^ connection = gcnew MySqlConnection("server=my5008.gabiadb.com;user=edcation; database=education; port=3306; password=q1w2e3r4**");
		//MySql ���Ṯ
		if (!(Id_txt->Text == "")) { // ID_txt�� ���� �ԷµǾ�������
			MySqlCommand^ command = gcnew MySqlCommand("select * from education.Member where  memberID= '" + Id_txt->Text + "';", connection);
			//���� ���๮
			MySqlDataReader^ reader;
			connection->Open();
			reader = command->ExecuteReader();
			while (reader->Read()) {
				check++; // �����ͺ��̽����� �����ϰ� Ȯ���ؼ� check ����
			}
			if (check == 0 && !(Id_txt->Text == "")) { // ID�� ���� �ԷµǾ��ְ� check�� �����Ǿ�����
				MessageBox::Show("�ߺ��� ���̵��Դϴ�.\n�ٽ� �Է����ּ���."); // ���̵� �ߺ� �޼��� ���
			}
			else {// �� ���� ��� (�ߺ��� �ƴ� ���)
				check = 1; //check�� 1�� ����
				MessageBox::Show("��� ������ ���̵��Դϴ�."); // ��밡�� �޼��� ���
			}
			connection->Close();
		}
		else {// ID_txt�� ���� �Է¾ȵ��ִ� ���
			MessageBox::Show("���̵� �Է����ּ���."); // ���̵� �Է� �䱸 �޼��� ���
		}
	}

	///
	/// ���� ��ư Ŭ�� �̺�Ʈ
	///
	private: System::Void Sign_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		MySqlConnection^ connection = gcnew MySqlConnection("server=my5008.gabiadb.com;user=edcation; database=education; port=3306; password=q1w2e3r4**");
		//MySql ���Ṯ
		connection->Open();
		MySqlDataReader^ reader;

		if (check == 1){ // ���̵� �ߺ�üũ�� �ϰ� �ߺ��̾ƴ� ����
			if (Name_txt->Text=="") { // �̸��� ����
				MessageBox::Show("�̸��� �Է����ּ���.");
			}
			else if (Id_txt->Text == "") { // ���̵� ����
				MessageBox::Show("���̵� �Է����ּ���.");
			}
			else if (Password_txt->Text == "") { // ��й�ȣ�� ����
				MessageBox::Show("��й�ȣ�� �Է����ּ���.");
			}
			else if (Addr_txt->Text == "") { // �ּҰ� ����
				MessageBox::Show("�ּҸ� �Է����ּ���.");
			}
			else if (Tel_txt->Text == "") { // ��ȭ��ȣ�� ����
				MessageBox::Show("��ȭ��ȣ�� �Է����ּ���.");
			}
			else { // �׿ܿ��� DB�� ���� �߰��ϰ� ȯ�� �޼��� ���
				MySqlCommand^ command = gcnew MySqlCommand("INSERT INTO Member VALUES(''," + "'" + Name_txt->Text + "', '" + Id_txt->Text + "', '" + Password_txt->Text + "', '" + Tel_txt->Text + "', '" + Addr_txt->Text + "' , 0);", connection);
				reader = command->ExecuteReader();
				MessageBox::Show(Name_txt->Text + "(" + Id_txt->Text + ") ��\nȸ�������� �Ϸ�Ǿ����ϴ�.");
				connection->Close();
				this->Close();
			}
		}
		else if (check == 0) { // �ߺ�Ȯ�ο��� �ߺ��� ���
			MessageBox::Show("���̵� Ȯ�����ּ���.");
		}
		else { // �ߺ�Ȯ���� �ȴ����� ���
			MessageBox::Show("�ߺ�Ȯ���� �����ּ���.");
		}
		connection->Close();
	}
	///
	/// ���� ��ư Ŭ�� �̺�Ʈ
	///
	private: System::Void Cancle_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
};
}
