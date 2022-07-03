#include "MainCode.h"

using namespace System;
using namespace System::Windows::Forms;
void harrisbasra(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TickCross::MainCode form;
	Application::Run(% form);
}