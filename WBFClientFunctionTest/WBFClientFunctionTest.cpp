// WBFClientFunctionTest.cpp: 主要專案檔。

#include "stdafx.h"
#include "GUI.h"

using namespace WBFClientFunctionTest;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew GUI());

	return 0;
}

