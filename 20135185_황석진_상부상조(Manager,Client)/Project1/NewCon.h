/*
 * 새글쓰기 폼 헤더
*/

#pragma once
namespace Project1 {
	///
	/// 사용되는 namespace 선언
	///
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// NewCon에 대한 요약입니다.
	/// </summary>
	public ref class NewCon : public System::Windows::Forms::Form
	{
	public:
		NewCon(void)
		{
			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}
		NewCon(String^ val)
		{
			InitializeComponent();
			this->index = val;
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~NewCon()
		{
			if (components)
			{
				delete components;
			}
		}

	///
	/// 폼에 사용될 변수 선언
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
	/// 데이터베이스 값을 저장할 변수 선언
	///
	private: String^ index = "-1"; //회원번호
			 String^ post_title = "None"; // 글제목
			 String^ post_name = "None"; // 글쓴이
			 String^ post_addr = "None"; // 글쓴이 주소
			 String^ post_tel = "None"; // 글쓴이 연락처
			 String^ post_point = "0"; // 글쓴이 성사횟수 ( 신뢰도 지표 )

	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다. 
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
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
			this->button1->Text = L"글쓰기";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &NewCon::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(378, 241);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"취소";
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
			this->label1->Text = L"제목(종류)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(42, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 12);
			this->label2->TabIndex = 3;
			this->label2->Text = L"현재주소";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(111, 56);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(213, 21);
			this->textBox1->TabIndex = 6;
			this->textBox1->Text = L"가져가세요^^";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(111, 114);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(213, 21);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"다르시다면 입력해주세요.";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(111, 34);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(48, 16);
			this->checkBox1->TabIndex = 8;
			this->checkBox1->Text = L"빈병";
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
			this->checkBox2->Text = L"폐지";
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
			this->checkBox3->Text = L"정보와같음";
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
			this->checkBox4->Text = L"플라스틱";
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
			this->checkBox5->Text = L"고철(깡통등)";
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
			this->label3->Text = L"전화번호 ";
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
			this->label4->Text = L"* 선택사항";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(332, 171);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 12);
			this->label5->TabIndex = 16;
			this->label5->Text = L"* 비회원 시. 필수사항";
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
			this->Text = L"새 글 쓰기";
			this->Load += gcnew System::EventHandler(this, &NewCon::NewCon_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	///
	/// 폼 로드 이벤트
	///
	private: System::Void NewCon_Load(System::Object^  sender, System::EventArgs^  e) {
		if(this->index != "-1" ){ // 인덱스가 초기값 (비회원)이 아닐 경우
			MySqlConnection^ connection = gcnew MySqlConnection("server=my5008.gabiadb.com;user=edcation; database=education; port=3306; password=q1w2e3r4**");
			//MySql 연결문
			MySqlCommand^ command = gcnew MySqlCommand("select * from education.Member where memberNum = " + this->index + ";", connection);
			//쿼리 실행문 (인덱스에 해당하는 모든 column을 불러옴)
			MySqlDataReader^ reader;
			try {
				connection->Open();
				reader = command->ExecuteReader();
				int count = 0;
				while (reader->Read()) {
					count++;  // 값을 읽으며 count값 증가
				}
				if (count == 1) { // 읽어들인 값이 하나이면
					String^ m_id = (reader->GetString("memberID")); //변수에 ID저장하고
					MessageBox::Show(m_id + "님, 안녕하세요."); // 메세지 출력
					this->post_addr = (reader->GetString("memberAddr")); // 주소
					this->post_name = (reader->GetString("memberName")); // 이름
					this->post_tel = (reader->GetString("memberTel")); // 전화번호
					this->post_point = (reader->GetString("memberPoint")->ToString()); // 성사여부 (신뢰도 지표) 를 저장
				}
			}
			catch (Exception^ e) {
				MessageBox::Show(e->Message);
			}
		}
		else { // 아닐 경우 비회원 메세지 출력
			MessageBox::Show("비회원입니다.");
		}
	}

	///
	/// 등록 버튼 클릭 이벤트
	///
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		post_title = textBox1->Text; // 가져가세요^^ (기본설정)
		MySqlConnection^ connection = gcnew MySqlConnection("server=my5008.gabiadb.com;user=edcation; database=education; port=3306; password=q1w2e3r4**");
		//MySql 연결문
		connection->Open();
		MySqlDataReader^ reader;
		this->post_tel = textBox3->Text; //전화번호 설정
		if ( (this->index == "-1") && (textBox3->Text == "")) { // 비회원이고 전화번호란이 비어있을경우
			MessageBox::Show("비회원은 전화번호를 입력해주셔야 합니다.","비회원");
		}
		else {//그 외의 경우 데이터베이스 쿼리문으로 값을 추가함으로 글을 등록
			MySqlCommand^ command = gcnew MySqlCommand("INSERT INTO Post VALUES(''," + "'" + this->post_title + "', '" + this->post_name + "', '" + this->post_addr + "', '" + this->post_tel + "', '" + this->post_point + "','1');", connection);
			reader = command->ExecuteReader();
			MessageBox::Show("등록 했습니다.");
			this->Close();
		}
	}

	///
	/// 제목 체크박스 체크변경 이벤트 (제목에 체크된 항목 추가)
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
