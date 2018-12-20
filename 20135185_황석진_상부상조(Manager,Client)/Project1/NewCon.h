/*
 * ���۾��� �� ���
*/

#pragma once
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
	/// NewCon�� ���� ����Դϴ�.
	/// </summary>
	public ref class NewCon : public System::Windows::Forms::Form
	{
	public:
		NewCon(void)
		{
			InitializeComponent();
			//
			//TODO: ������ �ڵ带 ���⿡ �߰��մϴ�.
			//
		}
		NewCon(String^ val)
		{
			InitializeComponent();
			this->index = val;
			//
			//TODO: ������ �ڵ带 ���⿡ �߰��մϴ�.
			//
		}

	protected:
		/// <summary>
		/// ��� ���� ��� ���ҽ��� �����մϴ�.
		/// </summary>
		~NewCon()
		{
			if (components)
			{
				delete components;
			}
		}

	///
	/// ���� ���� ���� ����
	///	
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;

	///
	/// �����ͺ��̽� ���� ������ ���� ����
	///
	private: String^ index = "-1"; //ȸ����ȣ
			 String^ post_title = "None"; // ������
			 String^ post_name = "None"; // �۾���
			 String^ post_addr = "None"; // �۾��� �ּ�
			 String^ post_tel = "None"; // �۾��� ����ó
			 String^ post_point = "0"; // �۾��� ����Ƚ�� ( �ŷڵ� ��ǥ )

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(297, 241);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"�۾���";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &NewCon::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(378, 241);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"���";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &NewCon::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(42, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 12);
			this->label1->TabIndex = 2;
			this->label1->Text = L"����(����)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(42, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 12);
			this->label2->TabIndex = 3;
			this->label2->Text = L"�����ּ�";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(111, 56);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(213, 21);
			this->textBox1->TabIndex = 6;
			this->textBox1->Text = L"����������^^";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(111, 114);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(213, 21);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"�ٸ��ôٸ� �Է����ּ���.";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(111, 34);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(48, 16);
			this->checkBox1->TabIndex = 8;
			this->checkBox1->Text = L"��";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &NewCon::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(165, 33);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(48, 16);
			this->checkBox2->TabIndex = 9;
			this->checkBox2->Text = L"����";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &NewCon::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Checked = true;
			this->checkBox3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox3->Location = System::Drawing::Point(111, 92);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(84, 16);
			this->checkBox3->TabIndex = 10;
			this->checkBox3->Text = L"�����Ͱ���";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &NewCon::checkBox3_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(219, 33);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(72, 16);
			this->checkBox4->TabIndex = 11;
			this->checkBox4->Text = L"�ö�ƽ";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &NewCon::checkBox4_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(297, 33);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(94, 16);
			this->checkBox5->TabIndex = 12;
			this->checkBox5->Text = L"��ö(�����)";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &NewCon::checkBox5_CheckedChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(42, 165);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 12);
			this->label3->TabIndex = 13;
			this->label3->Text = L"��ȭ��ȣ ";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(111, 162);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(213, 21);
			this->textBox3->TabIndex = 14;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Blue;
			this->label4->Location = System::Drawing::Point(331, 122);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 12);
			this->label4->TabIndex = 15;
			this->label4->Text = L"* ���û���";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(332, 171);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 12);
			this->label5->TabIndex = 16;
			this->label5->Text = L"* ��ȸ�� ��. �ʼ�����";
			// 
			// NewCon
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(467, 276);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"NewCon";
			this->Text = L"�� �� ����";
			this->Load += gcnew System::EventHandler(this, &NewCon::NewCon_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	///
	/// �� �ε� �̺�Ʈ
	///
	private: System::Void NewCon_Load(System::Object^  sender, System::EventArgs^  e) {
		if(this->index != "-1" ){ // �ε����� �ʱⰪ (��ȸ��)�� �ƴ� ���
			MySqlConnection^ connection = gcnew MySqlConnection("server=my5008.gabiadb.com;user=edcation; database=education; port=3306; password=q1w2e3r4**");
			//MySql ���Ṯ
			MySqlCommand^ command = gcnew MySqlCommand("select * from education.Member where memberNum = " + this->index + ";", connection);
			//���� ���๮ (�ε����� �ش��ϴ� ��� column�� �ҷ���)
			MySqlDataReader^ reader;
			try {
				connection->Open();
				reader = command->ExecuteReader();
				int count = 0;
				while (reader->Read()) {
					count++;  // ���� ������ count�� ����
				}
				if (count == 1) { // �о���� ���� �ϳ��̸�
					String^ m_id = (reader->GetString("memberID")); //������ ID�����ϰ�
					MessageBox::Show(m_id + "��, �ȳ��ϼ���."); // �޼��� ���
					this->post_addr = (reader->GetString("memberAddr")); // �ּ�
					this->post_name = (reader->GetString("memberName")); // �̸�
					this->post_tel = (reader->GetString("memberTel")); // ��ȭ��ȣ
					this->post_point = (reader->GetString("memberPoint")->ToString()); // ���翩�� (�ŷڵ� ��ǥ) �� ����
				}
			}
			catch (Exception^ e) {
				MessageBox::Show(e->Message);
			}
		}
		else { // �ƴ� ��� ��ȸ�� �޼��� ���
			MessageBox::Show("��ȸ���Դϴ�.");
		}
	}

	///
	/// ��� ��ư Ŭ�� �̺�Ʈ
	///
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		post_title = textBox1->Text; // ����������^^ (�⺻����)
		MySqlConnection^ connection = gcnew MySqlConnection("server=my5008.gabiadb.com;user=edcation; database=education; port=3306; password=q1w2e3r4**");
		//MySql ���Ṯ
		connection->Open();
		MySqlDataReader^ reader;
		this->post_tel = textBox3->Text; //��ȭ��ȣ ����
		if ( (this->index == "-1") && (textBox3->Text == "")) { // ��ȸ���̰� ��ȭ��ȣ���� ����������
			MessageBox::Show("��ȸ���� ��ȭ��ȣ�� �Է����ּž� �մϴ�.","��ȸ��");
		}
		else {//�� ���� ��� �����ͺ��̽� ���������� ���� �߰������� ���� ���
			MySqlCommand^ command = gcnew MySqlCommand("INSERT INTO Post VALUES(''," + "'" + this->post_title + "', '" + this->post_name + "', '" + this->post_addr + "', '" + this->post_tel + "', '" + this->post_point + "','1');", connection);
			reader = command->ExecuteReader();
			MessageBox::Show("��� �߽��ϴ�.");
			this->Close();
		}
	}

	///
	/// ���� üũ�ڽ� üũ���� �̺�Ʈ (���� üũ�� �׸� �߰�)
	///
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Text = checkBox1->Text + textBox1->Text;
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Text = checkBox2->Text + ", " + textBox1->Text;
	}
	private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Text = checkBox4->Text + ", " + textBox1->Text;
	}
	private: System::Void checkBox5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Text = checkBox5->Text + ", " + textBox1->Text;
	}
	private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		this->post_addr = textBox2->Text;
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
};
}
