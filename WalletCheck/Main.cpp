/*
* Referenced source code
* Copyright (c) 2016 DOBON! <http://dobon.net>
* Released under the MIT license
* MIT Licence : https://dobon.net/license/index.html
*/

/*
	Main.cpp
	Mainです。
*/

#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace WalletCheck;

[STAThreadAttribute]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MainForm());	//MainFormを起動

	return 0;
}