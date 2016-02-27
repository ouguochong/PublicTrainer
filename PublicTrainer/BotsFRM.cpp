#include <Windows.h>
#include "BotsFRM.h"
#include "Functions.h"
#include "Definitions.h"

using namespace PublicTrainer;

extern void WINAPI msSendPacketA(__in LPCSTR lpPacketStr);
void SendPacketB(String^ dataString)
{
	int Random = rand()%16;	
	String^ Packet = dataString;
	String^ Packet2 = Packet->Replace(L" ", String::Empty);
	String^ Packet3 = Packet2->Replace(L"*", Random.ToString("X"));
	LPCSTR StringA = (LPCSTR)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(Packet3).ToPointer());
	msSendPacketA(StringA);
}

Void BotsFRM::MainTMR_Tick(System::Object^  sender, System::EventArgs^  e)
{
	// Auto Attack
	if (cbAutoAttack->Checked)
	{
		if (comboAttackK->SelectedIndex == 0)
		{
			SendKey(0x43);
		}
		if (comboAttackK->SelectedIndex == 1)
		{
			SendKey(0x56);
		}
		if (comboAttackK->SelectedIndex == 2)
		{
			SendKey(0x42);
		}
		if (comboAttackK->SelectedIndex == 3)
		{
			SendKey(0x4E);
		}
		if (comboAttackK->SelectedIndex == 4)
		{
			SendKey(VK_CONTROL);
		}
		if (comboAttackK->SelectedIndex == 5)
		{
			SendKey(VK_MENU);
		}
		if (comboAttackK->SelectedIndex == 6)
		{
			SendKey(VK_SHIFT);
		}
	}

	// Auto Loot
	if (cbAutoLoot->Checked)
	{
		if (comboLootK->SelectedIndex == 0)
		{
			SendKey(0x5A);
		}
		if (comboLootK->SelectedIndex == 1)
		{
			SendKey(VK_NUMPAD0);
		}
	}

	// Auto CC
	if (cbAutoCC->Checked)
	{
		if (radioCCRandom->Checked)
		{
			if (getPeople() > System::Convert::ToInt32(numericCC->Text))
			{
				SendPacketB("24 00 0* ** ** ** **");
			}
		}
		else if (radioCCNext->Checked)
		{
			if (getPeople() > System::Convert::ToInt32(numericCC->Text))
			{
				if(getChannel() == 1)
		        {
			        SendPacketB("24 00 01 ** ** ** **");
		        }
			    if(getChannel() == 2)
		        {
			        SendPacketB("24 00 02 ** ** ** **");
		        }
			    if(getChannel() == 3)
		        {
			        SendPacketB("24 00 03 ** ** ** **");
		        }
			    if(getChannel() == 4)
		        {
			        SendPacketB("24 00 04 ** ** ** **");
		        }
			    if(getChannel() == 5)
		        {
			        SendPacketB("24 00 05 ** ** ** **");
		        }
			    if(getChannel() == 6)
		        {
			        SendPacketB("24 00 06 ** ** ** **");
		        }
			    if(getChannel() == 7)
		        {
			        SendPacketB("24 00 07 ** ** ** **");
		        }
			    if(getChannel() == 8)
		        {
			        SendPacketB("24 00 08 ** ** ** **");
		        }
			    if(getChannel() == 9)
		        {
			        SendPacketB("24 00 09 ** ** ** **");
		        }
			    if(getChannel() == 10)
		        {
			        SendPacketB("24 00 0A ** ** ** **");
		        }
			    if(getChannel() == 11)
		        {
			        SendPacketB("24 00 0B ** ** ** **");
		        }
			    if(getChannel() == 12)
		        {
			        SendPacketB("24 00 0C ** ** ** **");
		        }
			    if(getChannel() == 13)
		        {
			        SendPacketB("24 00 0D ** ** ** **");
		        }
			    if(getChannel() == 14)
		        {
			        SendPacketB("24 00 0E ** ** ** **");
		        }
			    if(getChannel() == 15)
		        {
			        SendPacketB("24 00 0F ** ** ** **");
		        }
			    if(getChannel() == 16)
		        {
			        SendPacketB("24 00 10 ** ** ** **");
		        }
			    if(getChannel() == 17)
		        {
			        SendPacketB("24 00 11 ** ** ** **");
		        }
			    if(getChannel() == 18)
		        {
			        SendPacketB("24 00 12 ** ** ** **");
		        }
			    if(getChannel() == 19)
		        {
			        SendPacketB("24 00 13 ** ** ** **");
		        }
			    if(getChannel() == 20)
		        {
			        SendPacketB("24 00 00 ** ** ** **");
		        }
			}
		}
	}

	// Auto Pot
	if (cbAutoPot->Checked)
	{
		// Auto HP
		if (getHP() < System::Convert::ToInt32(tbAPHP->Text))
		{
			if (comboAPHPK->SelectedIndex == 0)
			{
				SendKey(VK_PRIOR);
			}
			else if (comboAPHPK->SelectedIndex == 1)
			{
				SendKey(VK_NEXT);
			}
		}
        // Auto MP
		if (getMP() < System::Convert::ToInt32(tbAPMP->Text))
		{
			if (comboAPMPK->SelectedIndex == 0)
			{
				SendKey(VK_PRIOR);
			}
			else if (comboAPMPK->SelectedIndex == 1)
			{
				SendKey(VK_NEXT);
			}
		}
	}
}