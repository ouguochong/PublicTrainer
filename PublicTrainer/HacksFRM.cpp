#include <Windows.h>
#include "HacksFRM.h"
#include "Functions.h"
#include "Definitions.h"

using namespace PublicTrainer;

extern void WINAPI msSendPacketA(__in LPCSTR lpPacketStr);
void SendPacket(String^ dataString)
{
	int Random = rand()%16;	
	String^ Packet = dataString;
	String^ Packet2 = Packet->Replace(L" ", String::Empty);
	String^ Packet3 = Packet2->Replace(L"*", Random.ToString("X"));
	LPCSTR StringA = (LPCSTR)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(Packet3).ToPointer());
	msSendPacketA(StringA);
}

Void HacksFRM::MainTMR_Tick(System::Object^  sender, System::EventArgs^  e)
{
	// SuperTubi 
	if (cbSuperTubi->Checked)
	{
		WritePointer(ulServerBase, ulTubiOffset, 0);
	}

	// Mouse Hack
	if (cbFlyHack->Checked)
	{
		// Mouse Fly
		if (radioMouseFly->Checked)
		{
			if (comboMouseHK->SelectedIndex == 0)
			{
				if(GetAsyncKeyState(VK_F9)&1)
				{
					MouseFlyTMR->Enabled = true;
				}
			}
			else if (comboMouseHK->SelectedIndex == 1)
			{
				if(GetAsyncKeyState(VK_F10)&1)
				{
					MouseFlyTMR->Enabled = true;
				}
			}
		}
		// Mouse Click
		else if (radioMouseClick->Checked)
		{
			if (comboMouseHK->SelectedIndex == 0)
			{
				if(GetAsyncKeyState(VK_F9)&1)
				{
					MouseClickTMR->Enabled = true;
				}
			}
			else if (comboMouseHK->SelectedIndex == 1)
			{
				if(GetAsyncKeyState(VK_F10)&1)
				{
					MouseClickTMR->Enabled = true;
				}
			}
		}
	}
	else
	{
		MouseFlyTMR->Enabled = false;
		MouseClickTMR->Enabled = false;
	}
    
	// Disable Mouse Fly
	if (MouseFlyTMR->Enabled == true)
	{
		if(GetAsyncKeyState(VK_F9)&1)
		{
			MouseFlyTMR->Enabled = false;
		}
		else if(GetAsyncKeyState(VK_F10)&1)
		{
			MouseFlyTMR->Enabled = false;
		}
	}

	// Disable Mouse Click
	if (MouseClickTMR->Enabled == true)
	{
		if(GetAsyncKeyState(VK_F9)&1)
		{
			MouseClickTMR->Enabled = false;
		}
		else if(GetAsyncKeyState(VK_F10)&1)
		{
			MouseClickTMR->Enabled = false;
		}	
	}

	// Kami 
	if (cbKami->Checked)
	{
		if (comboKamiHK->SelectedIndex == 0)
		{
			if(GetAsyncKeyState(VK_F11)&1)
			{
				KamiTMR->Enabled = true;
			}
		}
		if (comboKamiHK->SelectedIndex == 1)
		{
			if(GetAsyncKeyState(VK_F12)&1)
			{
				KamiTMR->Enabled = true;
			}
		}
	}
	else
	{
		KamiTMR->Enabled = false;
	}

	// Disable Kami
	if (KamiTMR->Enabled == true)
	{
		if(GetAsyncKeyState(VK_F11)&1)
		{
			KamiTMR->Enabled = false;
		}
		else if(GetAsyncKeyState(VK_F12)&1)
		{
			KamiTMR->Enabled = false;
		}	
	}
}

Void HacksFRM::MouseFlyTMR_Tick(System::Object^  sender, System::EventArgs^  e)
{
	WritePointer(ulCharBase, ulTeleOffset, 1);
	WritePointer(ulCharBase, ulTeleXOffset, getMouseX());
	WritePointer(ulCharBase, ulTeleYOffset, getMouseY());
}

Void HacksFRM::MouseClickTMR_Tick(System::Object^  sender, System::EventArgs^  e)
{
	if(GetAsyncKeyState(VK_LBUTTON)&1)
	{
		WritePointer(ulCharBase, ulTeleOffset, 1);
	    WritePointer(ulCharBase, ulTeleXOffset, getMouseX());
	    WritePointer(ulCharBase, ulTeleYOffset, getMouseY());
	}
}

Void HacksFRM::KamiTMR_Tick(System::Object^  sender, System::EventArgs^  e)
{
	WritePointer(ulCharBase, ulTeleOffset, 1);
	WritePointer(ulCharBase, ulTeleXOffset, getMobX() + trackbKamiX->Value);
    WritePointer(ulCharBase, ulTeleYOffset, getMobY() + trackbKamiY->Value);
}