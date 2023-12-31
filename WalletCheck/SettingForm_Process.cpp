/*
	SettingForm_Process.cpp
	SettingFormの定義処理です。
*/

#define TRUE "True"
#define FALSE "False"
#include "SettingForm.h"
#include "app_config.h"

using namespace app_config;

System::Void WalletCheck::SettingForm::_load_settings()
{
	if (config::Get("OpenLastFile") == TRUE)
		open_lastbook_check->Checked = true;

	if (config::Get("CheckUpdate") == TRUE)
		check_update_check->Checked = true;
}

System::Void WalletCheck::SettingForm::_set_settings()
{
	config::Set("OpenLastFile", open_lastbook_check->Checked.ToString());
	config::Set("CheckUpdate", check_update_check->Checked.ToString());
}