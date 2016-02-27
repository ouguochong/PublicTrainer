
#include "Functions.h"
#include "Definitions.h"
#include <time.h>

void wait(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

// <-------------- Reading Pointers -------------->
LPCSTR ReadStringPointer(ULONG ulBase, INT iOffset)
{
    __try { return (LPCSTR)(*(ULONG*)ulBase + iOffset); }
    __except (EXCEPTION_EXECUTE_HANDLER) { return "- - - -"; }
}
unsigned long ReadPointer(unsigned long ulBase, int iOffset)
{
   __try { return *(unsigned long*)(*(unsigned long*)ulBase + iOffset); }
   __except (EXCEPTION_EXECUTE_HANDLER) { return 0; }
}
unsigned long ReadMultiPointer(unsigned long ulBase, unsigned long ulLevels, ...)
{
	va_list va;
	va_start(va, ulLevels);

	__try
	{
		ulBase = *(unsigned long*)ulBase;
		for (unsigned long ulIndex = 1; ulIndex <= ulLevels; ulIndex++)
			ulBase = *(unsigned long*)(ulBase + va_arg(va, int));
	}
	__except (EXCEPTION_EXECUTE_HANDLER) { ulBase = 0; }

	va_end(va);

	return ulBase;
}

// <---------------------------------------------->

// <-------------- Writing Pointers -------------->
bool WritePointer(unsigned long ulBase, int iOffset, int iValue)
{
   __try { *(int*)(*(unsigned long*)ulBase + iOffset) = iValue; return true; }
   __except (EXCEPTION_EXECUTE_HANDLER) { return false; }
}
// <---------------------------------------------->


// Read IGN
LPCSTR getIGN()
{
    return (LPCSTR)(*(ULONG*)ulIGNBase + ulIGNOffset);
}
// Read JobID
int getJobID()
{
   return (int)ReadPointer(ulJobIDBase, ulJobIDOffset);
}
// Read Char X coordinate
int getCharX()
{
   return (int)ReadPointer(ulCharBase, ulCharXOffset);
}
// Read Char Y coordinate
int getCharY()
{
   return (int)ReadPointer(ulCharBase, ulCharYOffset);
}
// Read MapID
int getMapID()
{
	return (int)ReadPointer(ulInfoBase, ulMapIDOffset);
}
// Read Channel Number
int getChannel()
{
	return (int)ReadPointer(ulServerBase, ulChannelOffset) + 1; 
}
// Read HP
int getHP()
{
	WritePointer(ulSettingBase, ulHPAlertOffset, 20);
	return (int)ReadPointer(ulStatsBase, ulHPOffset);
}
// Read MP
int getMP()
{
	WritePointer(ulSettingBase, ulMPAlertOffset, 20);
	return (int)ReadPointer(ulStatsBase, ulMPOffset);
}
// Read Mouse X coordinate
int getMouseX()
{
	return (int)ReadMultiPointer(ulMouseBase, 2, ulLocationOffset, ulMouseXOffset);
}
// Read Mouse Y coordinate
int getMouseY()
{
	return (int)ReadMultiPointer(ulMouseBase, 2, ulLocationOffset, ulMouseYOffset);
}
// Read Mob X coordinate
int getMobX()
{
	DWORD Mob1;
	DWORD Mob2;
	DWORD Mob3;
	DWORD Mob4;
	Mob1 = *((DWORD*)ulMobBase) + ulStructure1Offset;
	Mob2 = *((DWORD*)Mob1) + ulStructure2Offset;
	Mob3 = *((DWORD*)Mob2) + ulStructure3Offset;
	Mob4 = *((DWORD*)Mob3) + ulStructure4Offset;
	return (int)ReadPointer(Mob4 , ulMonsterXOffset);
}
// Read Mob Y coordinate
int getMobY()
{
	DWORD Mob1;
	DWORD Mob2;
	DWORD Mob3;
	DWORD Mob4;
	Mob1 = *((DWORD*)ulMobBase) + ulStructure1Offset;
	Mob2 = *((DWORD*)Mob1) + ulStructure2Offset;
	Mob3 = *((DWORD*)Mob2) + ulStructure3Offset;
	Mob4 = *((DWORD*)Mob3) + ulStructure4Offset;
	return (int)ReadPointer(Mob4 , ulMonsterYOffset);
}
// Get No. of People
int getPeople()
{
	return (int)ReadPointer(ulPlayerBase, ulPeopleCountOffset);
}
// <------------------------------------------->

// <----------- Customize Functions ----------->
DWORD GetValue(DWORD ulBase, INT nOffset)
{
    return *(DWORD*)(ulBase + nOffset);
}
// <------------------------------------------->