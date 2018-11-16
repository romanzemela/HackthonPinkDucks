#include "MyForm.h"
#include "MyForm2.h"
#include "MyForm3.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array <String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MyForm form;
	Application::Run(%form);

	Project1::MyForm2 form2;
	Application::Run(%form2);
}