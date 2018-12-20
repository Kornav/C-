#include "Applicate.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]


// 작동 메소드 구현 (폼객체 생성)
void Applicate::Run() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::FMain form;
	Application::Run(%form);
}