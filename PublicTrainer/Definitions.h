#include <Windows.h>
// <-------------- Pointers & Offsets -------------->

#define ulIGNBase 0x011751f0 
#define ulIGNOffset 0x04 // string

#define ulJobIDBase 0x011698E8
#define ulJobIDOffset 0x045E

#define ulCharBase 0x011698E8
#define ulCharXOffset 0x4D6C
#define ulCharYOffset 0x4D70
#define ulTeleOffset 0x4048
#define ulTeleXOffset 0x4050
#define ulTeleYOffset ulTeleXOffset + 4
#define unknown 0x05EC

#define ulInfoBase 0x01169FBC
#define ulMapIDOffset 0x0D28

#define ulMouseBase 0x01169D68
#define ulLocationOffset 0x0978
#define ulAnimationOffset 0x09C4
#define ulMouseXOffset 0x08C
#define ulMouseYOffset ulMouseXOffset + 4

#define ulStatsBase 0x01169BC4
#define ulHPOffset 0x1848
#define ulMPOffset ulHPOffset + 4

#define ulSettingBase 0x011698DC
#define ulHPAlertOffset 0x98
#define ulMPAlertOffset ulHPAlertOffset + 4

#define ulServerBase 0x01165358
#define ulWorldOffset 0x2070
#define ulChannelOffset ulWorldOffset + 0x04
#define ulTubiOffset ulWorldOffset + 0x40

#define ulMobBase 0x011698E4
#define ulMobCountOffset 0x10 
#define ulStructure1Offset 0x28
#define ulStructure2Offset 0x04
#define ulStructure3Offset 0x10C
#define ulStructure4Offset 0x24
#define ulMonsterXOffset 0x58
#define ulMonsterYOffset 0x5C 

#define ulPlayerBase 0x011698E0
#define ulPeopleCountOffset 0x18

#define SendKey(KeyPress) PostMessage(FindWindowA("MapleStoryClass", 0), WM_KEYDOWN, KeyPress, (MapVirtualKey(KeyPress, 0) << 16) + 1);