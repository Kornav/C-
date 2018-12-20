#ifndef _FMAIN_H
#define _FMAIN_H
#pragma once
#include "Login.h"
#include "NewCon.h"

/*
* 폼 메인 헤더
*/
namespace Project1 {

	///
	/// 사용되는 namespace 선언
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
	/// FMain에 대한 요약입니다.
	/// </summary>
	public ref class FMain : public System::Windows::Forms::Form
	{
	public:
		FMain(void)
		{
			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}
		FMain(String^ val) {
			InitializeComponent();
			this->index = val;
		}
	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~FMain()
		{
			if (components)
			{
				delete components;
			}
		}

	///
	/// 폼에 사용될 변수 선언
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
	/// 데이터베이스 값을 저장할 변수 선언
	///
	private: String^ index = "-1"; // 회원번호 번호 초기화 (정보전달에 사용)
			 String^ post_num =  "-1"; // 글 번호 초기화
			 String^ post_bool = "-1"; // 체결여부 초기화 ( 체결 1, 비체결 0 )
			 String^ post_title = "None"; // 글제목 초기화
			 String^ post_name = "None"; // 글쓴이 초기화
			 String^ post_addr = "None"; // 주소 초기화
			 String^ post_tel = "None"; // 전화번호 초기화
			 int i = 0;

	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다. 
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
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
			this->Title_lbl->Font = (gcnew System::Drawing::Font(L"함초롬돋움", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->Title_lbl->Location = System::Drawing::Point(12, 9);
			this->Title_lbl->Name = L"Title_lbl";
			this->Title_lbl->Size = System::Drawing::Size(124, 27);
			this->Title_lbl->TabIndex = 0;
			this->Title_lbl->Text = L"현재 글 목록";
			// 
			// Post_liview (리스트뷰 이름)
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
			// Post_num (리스트뷰 0번째 columns)
			// 
			this->Post_num->Text = L"번호";
			this->Post_num->Width = 40;
			// 
			// Post_title (리스트뷰 1번째 columns)
			// 
			this->Post_title->Text = L"제목";
			this->Post_title->Width = 156;
			// 
			// Post_maddr (리스트뷰 2번째 columns)
			// 
			this->Post_maddr->Text = L"주소";
			this->Post_maddr->Width = 182;
			// 
			// Post_name (리스트뷰 3번째 columns)
			// 
			this->Post_name->Text = L"이름";
			this->Post_name->Width = 64;
			// 
			// Post_mTel (리스트뷰 4번째 columns)
			// 
			this->Post_mTel->Text = L"전화번호";
			this->Post_mTel->Width = 105;
			// 
			// Post_bool (리스트뷰 5번째 columns)
			// 
			this->Post_bool->Text = L"신청여부";
			// 
			// New_btn (새글쓰기 버튼)
			// 
			this->New_btn->Location = System::Drawing::Point(17, 333);
			this->New_btn->Name = L"New_btn";
			this->New_btn->Size = System::Drawing::Size(290, 82);
			this->New_btn->TabIndex = 2;
			this->New_btn->Text = L"새 글 쓰기";
			this->New_btn->UseVisualStyleBackColor = true;
			this->New_btn->Click += gcnew System::EventHandler(this, &FMain::New_btn_Click);
			// 
			// button4 (종료하기 버튼)
			// 
			this->button4->Location = System::Drawing::Point(332, 333);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(295, 82);
			this->button4->TabIndex = 5;
			this->button4->Text = L"종료하기";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &FMain::button4_Click);
			// 
			// User_lbl (ID있을경우 ID표시라벨)
			// 
			this->User_lbl->AutoSize = true;
			this->User_lbl->Location = System::Drawing::Point(512, 35);
			this->User_lbl->Name = L"User_lbl";
			this->User_lbl->Size = System::Drawing::Size(28, 12);
			this->User_lbl->TabIndex = 6;
			this->User_lbl->Text = L"ID : ";
			// 
			// button1 (로그인 버튼)
			// 
			this->button1->Location = System::Drawing::Point(546, 9);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FMain::button1_Click);
			// 
			// Fix_btn (새로고침 버튼)
			// 
			this->Fix_btn->AutoSize = true;
			this->Fix_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Fix_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Fix_btn->Location = System::Drawing::Point(142, 16);
			this->Fix_btn->Name = L"Fix_btn";
			this->Fix_btn->Size = System::Drawing::Size(65, 24);
			this->Fix_btn->TabIndex = 8;
			this->Fix_btn->Text = L"새로고침";
			this->Fix_btn->UseVisualStyleBackColor = true;
			this->Fix_btn->Click += gcnew System::EventHandler(this, &FMain::Fix_btn_Click);
			// 
			// FMain (메인폼 이름)
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
			this->Text = L"상부상조 v1.0 (Manager)";
			this->ResumeLayout(false);
			this->PerformLayout();

			///
			/// 디자인부분에서 Listview의 내용에 database 연결시켜 모든 post(글)내용 출력
			///
			MySqlConnection^ connection = gcnew MySqlConnection("server=my5008.gabiadb.com;user=edcation; database=education; port=3306; password=q1w2e3r4**");

			//MySql 연결문
			MySqlCommand^ command = gcnew MySqlCommand("select * from education.Post;", connection);
			//쿼리 실행문
			MySqlDataReader^ reader;
			try {
				connection->Open();
				reader = command->ExecuteReader();
				while (reader->Read()) {
					this->post_num = (reader->GetString("Post_num")); // 번호
					this->post_title = (reader->GetString("Post_title")); // 글제목
					this->post_name = (reader->GetString("Post_Name")); // 글쓴이
					this->post_addr = (reader->GetString("Post_Addr")); // 주소
					this->post_tel = (reader->GetString("Post_Tel")); // 전화번호
					this->post_bool = (reader->GetString("Post_bool")); // 회수여부
					this->Post_liview->Items->Add(this->post_num); // 번호 추가
					this->Post_liview->Items[i]->SubItems->AddRange(gcnew cli::array<String ^>(5) {
						post_title, post_addr, post_name, post_tel, post_bool
					}); // 서브아이템으로 제목, 주소, 이름, 회수여부 추가
					i++; // 반복
				}
				connection->Close(); // 반복 후 데이터베이스 연결 종료
			}
			catch (Exception^ e) { // 예외처리
				MessageBox::Show(e->Message); // 메시지상자 출력
				connection->Close();// 데이터베이스 연결종료
			}
		}
#pragma endregion
		///
		/// 다른폼으로 정보 전달에 쓰일 index set,get 메소드
		///
		public:
		void setIndex(String^ val) {
			index = val;
		}
		String^ getIndex() {
			return index;
		}

		///
		/// 새글 쓰기 버튼 클릭 이벤트
		///
		private: System::Void New_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			if (this->index != "-1") { // index(회원번호)가 -1(초기화값)과 같지않으면
				NewCon^ Item = gcnew NewCon(getIndex()); // 회원으로 보고 회원용 새글 폼 생성
				Item->ShowDialog(); // 모달형식으로 띄워줌
			}
			else { // 그외의 경우 (-1)이면
				NewCon^ Item = gcnew NewCon(); // 비회원용 새글 폼 생성
				Item->ShowDialog(); // 모달형식으로 띄워줌
			}
		}

		///
		/// 종료 버튼 클릭 이벤트
		///
		private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {		
			this->Close(); // 현재 폼 닫기
		}

		///
		/// Login 버튼 클릭 이벤트
		///
		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			Login^ login = gcnew Login(); // 로그인 폼 객체 생성
			login->ShowDialog(); // 모달 형식으로 띄워줌
			this->setIndex(login->getIndex()); // login에서 설정된 회원번호(index)로 현재의 회원번호(index) 설정
			if (this->index != "-1") { // 회원번호가 -1이 아니면
				MySqlConnection^ connection = gcnew MySqlConnection("server=my5008.gabiadb.com;user=edcation; database=education; port=3306; password=q1w2e3r4**");
				//MySql 연결문
				MySqlCommand^ command = gcnew MySqlCommand("select * from education.Member where memberNum = " + this->index + ";", connection);
				//쿼리 실행문 (회원번호로 데이터베이스 내용 검색)
				MySqlDataReader^ reader; 
				try {
					connection->Open(); // 데이터베이스 Open
					reader = command->ExecuteReader(); // 쿼리문 실행
					int count = 0; // 확인 변수 초기화
					while (reader->Read()) { // 읽어들이는 값이 있을때 까지 반복
						count++; // 조건에 맞는 쿼리문으로 값을 읽으면 count++
					}
					if (count == 1) { // 읽어온 값이 하나일 경우
						User_lbl->Text = "ID : " + (reader->GetString("memberID")); // 유저 표시 라벨에 id표시
					}
					button1->Hide(); // 로그인 버튼 감추기
				}
				catch (Exception^ e) {
					MessageBox::Show(e->Message);
				}
			}
		}

		///
		/// 새로고침 버튼 클릭 이벤트
		///
		private: System::Void Fix_btn_Click(System::Object^  sender, System::EventArgs^  e) {

			this->Post_liview->Clear(); // 리스트뷰를 지워줌

			this->Post_liview->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->Post_num, this->Post_title,
					this->Post_maddr, this->Post_name, this->Post_mTel, this->Post_bool
			}); // 다시 각 칼럼 설정

			MySqlConnection^ connection = gcnew MySqlConnection("server=my5008.gabiadb.com;user=edcation; database=education; port=3306; password=q1w2e3r4**");
			//MySql 연결문
			MySqlCommand^ command = gcnew MySqlCommand("select * from education.Post;", connection);
			//쿼리 실행문
			MySqlDataReader^ reader;
			try {
				connection->Open();
				reader = command->ExecuteReader();
				i = 0;
				while (reader->Read()) {
					this->post_num = (reader->GetString("Post_num")); // 번호
					this->post_title = (reader->GetString("Post_title")); // 글제목
					this->post_name = (reader->GetString("Post_Name")); // 글쓴이
					this->post_addr = (reader->GetString("Post_Addr")); // 주소
					this->post_tel = (reader->GetString("Post_Tel")); // 전화번호
					this->post_bool = (reader->GetString("Post_bool")); // 체결여부
					this->Post_liview->Items->Add(this->post_num); // 번호 추가
					this->Post_liview->Items[i]->SubItems->AddRange(gcnew cli::array<String ^>(5) {
						post_title, post_addr, post_name, post_tel, post_bool
					}); // 서브아이템으로 제목, 이름, 성사횟수, 체결여부 추가
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