#include "Applicate.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]


// �۵� �޼ҵ� ���� (����ü ����)
void Applicate::Run() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::FMain form;
	Application::Run(%form);
}