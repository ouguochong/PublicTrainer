#include <Windows.h>
#include <time.h>

void wait(unsigned int mseconds);

// <-------------- Reading Pointers -------------->
LPCSTR ReadStringPointer(ULONG ulBase, INT iOffset);
unsigned long ReadPointer(unsigned long ulBase, int iOffset);
unsigned long ReadMultiPointer(unsigned long ulBase, unsigned long ulLevels, ...);
// <---------------------------------------------->

// <-------------- Writing Pointers -------------->
bool WritePointer(unsigned long ulBase, int iOffset, int iValue);
// <---------------------------------------------->

LPCSTR getIGN();
int getJobID();
int getCharX();
int getCharY();
int getMapID();
int getChannel();
int getHP();
int getMP();
int getMouseX();
int getMouseY();
int getMobX();
int getMobY();
int getPeople();

// <------------- Customize Functions ------------>
DWORD GetValue(DWORD ulBase, INT nOffset);
// <---------------------------------------------->