/*
 * Ŭ���̾�Ʈ �� ���
*/

#pragma once

namespace Project2 {
	///
	/// ���Ǵ� namespace ����
	///
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::Common;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// MyForm�� ���� ����Դϴ�.
	/// </summary>
	public ref class Client : public System::Windows::Forms::Form
	{
	public:
		Client(void)
		{
			InitializeComponent();
			//
			//TODO: ������ �ڵ带 ���⿡ �߰��մϴ�.
			//
		}
	protected:
		/// <summary>
		/// ��� ���� ��� ���ҽ��� �����մϴ�.
		/// </summary>
		~Client()
		{
			if (components)
			{
				delete components;
			}
		}
	///
	/// ���� ���� ���� ����
	///	
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  num;
	private: System::Windows::Forms::ColumnHeader^  title;
	private: System::Windows::Forms::ColumnHeader^  addr;
	private: System::Windows::Forms::ColumnHeader^  name;
	private: System::Windows::Forms::ColumnHeader^  tel;
	private: System::Windows::Forms::ColumnHeader^  p_bool;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	///
	/// �����ͺ��̽� ���� ������ ���� ����
	///
	private: String^ post_num = "-1"; // �۹�ȣ
			 String^ post_title = "None"; // ������
			 String^ post_name = "None"; // �۾���
			 String^ post_addr = "None"; // �۾��� �ּ�
			 String^ post_tel = "None"; // �۾��� ����ó
			 String^ post_bool = "-1"; // ȸ�� ����
			 int i = 0; // �ݺ����� ���� ����
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->num = (gcnew System::Windows::Forms::ColumnHeader());
			this->title = (gcnew System::Windows::Forms::ColumnHeader());
			this->addr = (gcnew System::Windows::Forms::ColumnHeader());
			this->name = (gcnew System::Windows::Forms::ColumnHeader());
			this->tel = (gcnew System::Windows::Forms::ColumnHeader());
			this->p_bool = (gcnew System::Windows::Forms::ColumnHeader());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"���ʷҹ���", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(189, 45);
			this->label1->TabIndex = 0;
			this->label1->Text = L"�� �� �� ��";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->num, this->title,
					this->addr, this->name, this->tel, this->p_bool
			});
			this->listView1->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->listView1->GridLines = true;
			this->listView1->Location = System::Drawing::Point(12, 57);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(1077, 628);
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// num
			// 
			this->num->Text = L"�۹�ȣ";
			this->num->Width = 75;
			// 
			// title
			// 
			this->title->Text = L"����";
			this->title->Width = 300;
			// 
			// addr
			// 
			this->addr->Text = L"�ּ�";
			this->addr->Width = 300;
			// 
			// name
			// 
			this->name->Text = L"�̸�";
			this->name->Width = 100;
			// 
			// tel
			// 
			this->tel->Text = L"��ȭ��ȣ";
			this->tel->Width = 200;
			// 
			// p_bool
			// 
			this->p_bool->Text = L"ü�Ῡ��";
			this->p_bool->Width = 98;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"����", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button1->Location = System::Drawing::Point(12, 691);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(499, 59);
			this->button1->TabIndex = 2;
			this->button1->Text = L"��û";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Client::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"����", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button2->Location = System::Drawing::Point(590, 691);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(499, 59);
			this->button2->TabIndex = 3;
			this->button2->Text = L"����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Client::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1101, 762); // ���� ����� ũ����
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"��λ��� 1.0 (Client)";
			this->ResumeLayout(false);
			this->PerformLayout();
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
					this->post_bool = (reader->GetString("Post_bool")); // ü�Ῡ��
					this->listView1->Items->Add(this->post_num); // ��ȣ �߰�
					this->listView1->Items[i]->SubItems->AddRange(gcnew cli::array<String ^>(5) {
						post_title, post_addr, post_name, post_tel, post_bool
					}); // ������������� ����, �̸�, ����Ƚ��, ü�Ῡ�� �߰�
					i++; // �ݺ�
				}
				connection->Close();
			}
			catch (Exception^ e) {
				MessageBox::Show(e->Message);
				connection->Close();
			}
		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		ListViewItem^ lvi; // listview�� �������� ���� ���� ����
		try {
			lvi = listView1->SelectedItems[0]; // ���õ� �������� lvi�� ����
			if (MessageBox::Show("�����Ͻ� ���� ȸ�� �ϼ̽��ϱ�?", "ȸ������", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) { // Ȯ��â ���� ���� Yes�̸�
				MySqlConnection^ connection = gcnew MySqlConnection("server=my5008.gabiadb.com;user=edcation; database=education; port=3306; password=q1w2e3r4**");
				//MySql ���Ṯ
				MySqlCommand^ command = gcnew MySqlCommand("update education.Post set Post_bool = '0' Where Post_num = '" + lvi->Text + "';", connection);
				//���� ���๮ ( ������Ʈ ���� �Ἥ ȸ�������� �����ͺ��̽� ������ �ٲ��� )
				MySqlDataReader^ reader;
				connection->Open();
				reader = command->ExecuteReader();
				MessageBox::Show(lvi->Text + "�� ȸ���ϼ̽��ϴ�."); //Ȯ�� �޼��� ���
				connection->Close();
			}
		}
		catch (Exception^ e) {// ���� ������ ���ϰ� �������� �����߻�, �׿� ���� ����ó��
			// ��� ���ܿ� ���� ���� �����ش޶�� �޼��� ��� (�����ʿ�)
			MessageBox::Show("ȸ���Ͻ� �� ( �۹�ȣ ) �� �������ּ���.\r"+e->Message); 
		}
		// �� �۾� �� , ���ΰ�ħ �۾�
		this->listView1->Clear(); // listview�� ����
		this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
			this->num, this->title,
				this->addr, this->name, this->tel, this->p_bool
		}); // column�� �ٽ� ����
		MySqlConnection^ connection = gcnew MySqlConnection("server=my5008.gabiadb.com;user=edcation; database=education; port=3306; password=q1w2e3r4**");
		//MySql ���Ṯ
		MySqlCommand^ command = gcnew MySqlCommand("select * from education.Post;", connection);
		//���� ���๮
		MySqlDataReader^ reader;
		try {
			connection->Open();
			reader = command->ExecuteReader();
			int i = 0;
			while (reader->Read()) {
				this->post_num = (reader->GetString("Post_num")); // ��ȣ
				this->post_title = (reader->GetString("Post_title")); // ������
				this->post_name = (reader->GetString("Post_Name")); // �۾���
				this->post_addr = (reader->GetString("Post_Addr")); // �ּ�
				this->post_tel = (reader->GetString("Post_Tel")); // ��ȭ��ȣ
				this->post_bool = (reader->GetString("Post_bool")); // ü�Ῡ��
				this->listView1->Items->Add(this->post_num); // ��ȣ �߰�
				this->listView1->Items[i]->SubItems->AddRange(gcnew cli::array<String ^>(5) {
					post_title, post_addr, post_name, post_tel, post_bool
				}); // ������������� ����, �̸�, ����Ƚ��, ü�Ῡ�� �߰�
				i++; // �ݺ�
			}
			connection->Close(); // �����ͺ��̽� ���� ����
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
			connection->Close();
		}
	}

	///
	/// ���� ��ư Ŭ�� �̺�Ʈ
	///
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
};
}
