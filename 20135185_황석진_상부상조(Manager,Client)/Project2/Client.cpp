#include "Client.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

// Æû ¼±¾ð ÈÄ Æû ¶ç¿ì±â
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project2::Client form;
	Application::Run(%form);
}