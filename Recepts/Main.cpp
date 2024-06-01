#include "Main.h"
#include "Registration.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;


//[STAThreadAttribute]
//int main(array<String^>^ args) {
//	Application::SetCompatibleTextRenderingDefault(false);
//	Application::EnableVisualStyles();
//	Recepts:: Main form;
//	Application::Run(% form);
//}


System::Void Recepts::Main::backToRegistration_Click(System::Object^ sender, System::EventArgs^ e) {
	Registration^ registerForm = gcnew Registration();
	this->Hide();
	registerForm->Show();
}