#include "Applicate.h"
#pragma once

/*
* 회원가입 폼 헤더
*/
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
	/// Signup에 대한 요약입니다.
	/// </summary>
	public ref class Signup : public System::Windows::Forms::Form
	{
	public:
		Signup(void)
		{
			InitializeComponent();
			Password_txt->PasswordChar = '*';
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~Signup()
		{
			if (components)
			{
				delete components;
			}
		}

	///
	/// 폼에 사용될 변수 선언
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
	private: int check = -1; // 중복확인 검사

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
			this->Name_lbl->Text = L"이름";
			// 
			// Id_lbl
			// 
			this->Id_lbl->AutoSize = true;
			this->Id_lbl->Location = System::Drawing::Point(34, 46);
			this->Id_lbl->Name = L"Id_lbl";
			this->Id_lbl->Size = System::Drawing::Size(41, 12);
			this->Id_lbl->TabIndex = 1;
			this->Id_lbl->Text = L"아이디";
			// 
			// Password_lbl
			// 
			this->Password_lbl->AutoSize = true;
			this->Password_lbl->Location = System::Drawing::Point(34, 77);
			this->Password_lbl->Name = L"Password_lbl";
			this->Password_lbl->Size = System::Drawing::Size(53, 12);
			this->Password_lbl->TabIndex = 2;
			this->Password_lbl->Text = L"비밀번호";
			// 
			// Addr_lbl
			// 
			this->Addr_lbl->AutoSize = true;
			this->Addr_lbl->Location = System::Drawing::Point(34, 104);
			this->Addr_lbl->Name = L"Addr_lbl";
			this->Addr_lbl->Size = System::Drawing::Size(29, 12);
			this->Addr_lbl->TabIndex = 3;
			this->Addr_lbl->Text = L"주소";
			// 
			// Tel_lbl
			// 
			this->Tel_lbl->AutoSize = true;
			this->Tel_lbl->Location = System::Drawing::Point(34, 131);
			this->Tel_lbl->Name = L"Tel_lbl";
			this->Tel_lbl->Size = System::Drawing::Size(53, 12);
			this->Tel_lbl->TabIndex = 4;
			this->Tel_lbl->Text = L"전화번호";
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
			this->Overlap_btn->Text = L"중복확인";
			this->Overlap_btn->UseVisualStyleBackColor = true;
			this->Overlap_btn->Click += gcnew System::EventHandler(this, &Signup::Overlap_btn_Click);
			// 
			// Sign_btn
			// 
			this->Sign_btn->Location = System::Drawing::Point(117, 155);
			this->Sign_btn->Name = L"Sign_btn";
			this->Sign_btn->Size = System::Drawing::Size(75, 23);
			this->Sign_btn->TabIndex = 11;
			this->Sign_btn->Text = L"가입";
			this->Sign_btn->UseVisualStyleBackColor = true;
			this->Sign_btn->Click += gcnew System::EventHandler(this, &Signup::Sign_btn_Click);
			// 
			// Cancle_btn
			// 
			this->Cancle_btn->Location = System::Drawing::Point(198, 155);
			this->Cancle_btn->Name = L"Cancle_btn";
			this->Cancle_btn->Size = System::Drawing::Size(75, 23);
			this->Cancle_btn->TabIndex = 12;
			this->Cancle_btn->Text = L"취소";
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
			this->Text = L"회원가입";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	///
	/// 중복확인 버튼 클릭 메소드
	///
	private: System::Void Overlap_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		check = -1; // 확인값 초기화 -1
		MySqlConnection^ connection = gcnew MySqlConnection("server=my5008.gabiadb.com;user=edcation; database=education; port=3306; password=q1w2e3r4**");
		//MySql 연결문
		if (!(Id_txt->Text == "")) { // ID_txt에 값이 입력되어있으면
			MySqlCommand^ command = gcnew MySqlCommand("select * from education.Member where  memberID= '" + Id_txt->Text + "';", connection);
			//쿼리 실행문
			MySqlDataReader^ reader;
			connection->Open();
			reader = command->ExecuteReader();
			while (reader->Read()) {
				check++; // 데이터베이스에서 연결하고 확인해서 check 증가
			}
			if (check == 0 && !(Id_txt->Text == "")) { // ID에 값이 입력되어있고 check가 증가되었으면
				MessageBox::Show("중복된 아이디입니다.\n다시 입력해주세요."); // 아이디 중복 메세지 출력
			}
			else {// 그 외의 경우 (중복이 아닐 경우)
				check = 1; //check는 1로 설정
				MessageBox::Show("사용 가능한 아이디입니다."); // 사용가능 메세지 출력
			}
			connection->Close();
		}
		else {// ID_txt에 값이 입력안되있는 경우
			MessageBox::Show("아이디를 입력해주세요."); // 아이디 입력 요구 메세지 출력
		}
	}

	///
	/// 가입 버튼 클릭 이벤트
	///
	private: System::Void Sign_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		MySqlConnection^ connection = gcnew MySqlConnection("server=my5008.gabiadb.com;user=edcation; database=education; port=3306; password=q1w2e3r4**");
		//MySql 연결문
		connection->Open();
		MySqlDataReader^ reader;

		if (check == 1){ // 아이디 중복체크를 하고 중복이아닌 상태
			if (Name_txt->Text=="") { // 이름이 공백
				MessageBox::Show("이름을 입력해주세요.");
			}
			else if (Id_txt->Text == "") { // 아이디가 공백
				MessageBox::Show("아이디를 입력해주세요.");
			}
			else if (Password_txt->Text == "") { // 비밀번호가 공백
				MessageBox::Show("비밀번호를 입력해주세요.");
			}
			else if (Addr_txt->Text == "") { // 주소가 공백
				MessageBox::Show("주소를 입력해주세요.");
			}
			else if (Tel_txt->Text == "") { // 전화번호가 공백
				MessageBox::Show("전화번호를 입력해주세요.");
			}
			else { // 그외에는 DB에 값을 추가하고 환영 메세지 출력
				MySqlCommand^ command = gcnew MySqlCommand("INSERT INTO Member VALUES(''," + "'" + Name_txt->Text + "', '" + Id_txt->Text + "', '" + Password_txt->Text + "', '" + Tel_txt->Text + "', '" + Addr_txt->Text + "' , 0);", connection);
				reader = command->ExecuteReader();
				MessageBox::Show(Name_txt->Text + "(" + Id_txt->Text + ") 님\n회원가입이 완료되었습니다.");
				connection->Close();
				this->Close();
			}
		}
		else if (check == 0) { // 중복확인에서 중복일 경우
			MessageBox::Show("아이디를 확인해주세요.");
		}
		else { // 중복확인을 안눌렀을 경우
			MessageBox::Show("중복확인을 눌러주세요.");
		}
		connection->Close();
	}
	///
	/// 종료 버튼 클릭 이벤트
	///
	private: System::Void Cancle_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
};
}
