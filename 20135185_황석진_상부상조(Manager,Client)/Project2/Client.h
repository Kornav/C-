/*
 * 클라이언트 폼 헤더
*/

#pragma once

namespace Project2 {
	///
	/// 사용되는 namespace 선언
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
	/// MyForm에 대한 요약입니다.
	/// </summary>
	public ref class Client : public System::Windows::Forms::Form
	{
	public:
		Client(void)
		{
			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}
	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~Client()
		{
			if (components)
			{
				delete components;
			}
		}
	///
	/// 폼에 사용될 변수 선언
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
	/// 데이터베이스 값을 저장할 변수 선언
	///
	private: String^ post_num = "-1"; // 글번호
			 String^ post_title = "None"; // 글제목
			 String^ post_name = "None"; // 글쓴이
			 String^ post_addr = "None"; // 글쓴이 주소
			 String^ post_tel = "None"; // 글쓴이 연락처
			 String^ post_bool = "-1"; // 회수 여부
			 int i = 0; // 반복문의 사용될 변수
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
			this->label1->Font = (gcnew System::Drawing::Font(L"함초롬바탕", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(189, 45);
			this->label1->TabIndex = 0;
			this->label1->Text = L"상 부 상 조";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->num, this->title,
					this->addr, this->name, this->tel, this->p_bool
			});
			this->listView1->Font = (gcnew System::Drawing::Font(L"굴림", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
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
			this->num->Text = L"글번호";
			this->num->Width = 75;
			// 
			// title
			// 
			this->title->Text = L"제목";
			this->title->Width = 300;
			// 
			// addr
			// 
			this->addr->Text = L"주소";
			this->addr->Width = 300;
			// 
			// name
			// 
			this->name->Text = L"이름";
			this->name->Width = 100;
			// 
			// tel
			// 
			this->tel->Text = L"전화번호";
			this->tel->Width = 200;
			// 
			// p_bool
			// 
			this->p_bool->Text = L"체결여부";
			this->p_bool->Width = 98;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"굴림", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button1->Location = System::Drawing::Point(12, 691);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(499, 59);
			this->button1->TabIndex = 2;
			this->button1->Text = L"신청";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Client::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"굴림", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button2->Location = System::Drawing::Point(590, 691);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(499, 59);
			this->button2->TabIndex = 3;
			this->button2->Text = L"종료";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Client::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1101, 762); // 폼의 사이즈를 크게함
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"상부상조 1.0 (Client)";
			this->ResumeLayout(false);
			this->PerformLayout();
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
					this->post_bool = (reader->GetString("Post_bool")); // 체결여부
					this->listView1->Items->Add(this->post_num); // 번호 추가
					this->listView1->Items[i]->SubItems->AddRange(gcnew cli::array<String ^>(5) {
						post_title, post_addr, post_name, post_tel, post_bool
					}); // 서브아이템으로 제목, 이름, 성사횟수, 체결여부 추가
					i++; // 반복
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
		ListViewItem^ lvi; // listview의 아이템을 담을 변수 선언
		try {
			lvi = listView1->SelectedItems[0]; // 선택된 아이템을 lvi에 넣음
			if (MessageBox::Show("선택하신 것을 회수 하셨습니까?", "회수여부", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) { // 확인창 띄우고 답이 Yes이면
				MySqlConnection^ connection = gcnew MySqlConnection("server=my5008.gabiadb.com;user=edcation; database=education; port=3306; password=q1w2e3r4**");
				//MySql 연결문
				MySqlCommand^ command = gcnew MySqlCommand("update education.Post set Post_bool = '0' Where Post_num = '" + lvi->Text + "';", connection);
				//쿼리 실행문 ( 업데이트 문을 써서 회수여부의 데이터베이스 내용을 바꿔줌 )
				MySqlDataReader^ reader;
				connection->Open();
				reader = command->ExecuteReader();
				MessageBox::Show(lvi->Text + "를 회수하셨습니다."); //확인 메세지 출력
				connection->Close();
			}
		}
		catch (Exception^ e) {// 값을 선택을 안하고 눌렀을시 오류발생, 그에 대한 예외처리
			// 모든 예외에 대해 값을 선택해달라는 메세지 출력 (수정필요)
			MessageBox::Show("회수하실 값 ( 글번호 ) 을 선택해주세요.\r"+e->Message); 
		}
		// 위 작업 후 , 새로고침 작업
		this->listView1->Clear(); // listview를 비우고
		this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
			this->num, this->title,
				this->addr, this->name, this->tel, this->p_bool
		}); // column을 다시 설정
		MySqlConnection^ connection = gcnew MySqlConnection("server=my5008.gabiadb.com;user=edcation; database=education; port=3306; password=q1w2e3r4**");
		//MySql 연결문
		MySqlCommand^ command = gcnew MySqlCommand("select * from education.Post;", connection);
		//쿼리 실행문
		MySqlDataReader^ reader;
		try {
			connection->Open();
			reader = command->ExecuteReader();
			int i = 0;
			while (reader->Read()) {
				this->post_num = (reader->GetString("Post_num")); // 번호
				this->post_title = (reader->GetString("Post_title")); // 글제목
				this->post_name = (reader->GetString("Post_Name")); // 글쓴이
				this->post_addr = (reader->GetString("Post_Addr")); // 주소
				this->post_tel = (reader->GetString("Post_Tel")); // 전화번호
				this->post_bool = (reader->GetString("Post_bool")); // 체결여부
				this->listView1->Items->Add(this->post_num); // 번호 추가
				this->listView1->Items[i]->SubItems->AddRange(gcnew cli::array<String ^>(5) {
					post_title, post_addr, post_name, post_tel, post_bool
				}); // 서브아이템으로 제목, 이름, 성사횟수, 체결여부 추가
				i++; // 반복
			}
			connection->Close(); // 데이터베이스 연결 종료
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
			connection->Close();
		}
	}

	///
	/// 종료 버튼 클릭 이벤트
	///
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
};
}
