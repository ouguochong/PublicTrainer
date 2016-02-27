#include <Windows.h>

#include "mainFRM.h"
#include "Functions.h"
#include "Definitions.h"

using namespace PublicTrainer;

void Main(void)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew mainFRM());
    Application::Exit();
}

Void mainFRM::mainFRM_Load(System::Object^  sender, System::EventArgs^  e)
{}

Void mainFRM::MainTMR_Tick(System::Object^  sender, System::EventArgs^  e)
{
	// Check if char is on9
	if (ReadPointer(ulInfoBase, ulMapIDOffset) == 0)
	{
		if (getHP() == 0)
		{
		    charStatus->Text = "Character is not logged In.";
		    charStatus->ForeColor = System::Drawing::Color::Red;
		}
	}

	if (ReadPointer(ulInfoBase, ulMapIDOffset) != 0)
	{
		if (getHP() != 0)
		{
		    charStatus->Text = "Character is logged In. (" + System::Runtime::InteropServices::Marshal::PtrToStringAnsi((IntPtr)(void*)getIGN()) + ", " + getJobID() + ")";
		    charStatus->ForeColor = System::Drawing::Color::Green;
		}
	}

	// Retrieve Stats
	lbCharStats->Text = "HP : " + System::Convert::ToString(getHP()) + "            MP : " + System::Convert::ToString(getMP());

	// Retrieve Current Map ID
	lbMapID->Text = "Map ID : " + System::Convert::ToString(getMapID());

	// Retrieve X/Y coordinates
	lbCharCoord->Text = "Character Coordinates : (" + System::Convert::ToString(getCharX()) + ", " + System::Convert::ToString(getCharY()) + ")";
	lbMouseCoord->Text = "Mouse Coordinates : (" + System::Convert::ToString(getMouseX()) + ", " + System::Convert::ToString(getMouseY()) + ")";
}

Void mainFRM::btnHack_Click(System::Object^  sender, System::EventArgs^  e)
{
	if(!hacksform->Visible)
	{
		hacksform->Visible = true;
	}
	else
	{
		hacksform->Visible = false;
	}
}

Void mainFRM::btnBots_Click(System::Object^  sender, System::EventArgs^  e)
{
	if(!botsform->Visible)
	{
		botsform->Visible = true;
	}
	else
	{
		botsform->Visible = false;
	}
}