#include "skychanger.h"

bool Settings::SkyChanger::enabled = false;
char Settings::SkyChanger::skyName[127] = "vertigoblue_hdr";

void Skychanger::SetSky(const char* skyname)
{
	if (Settings::SkyChanger::enabled) {
		strncpy(Settings::SkyChanger::skyName, skyname, 127);
		Settings::SkyChanger::skyName[126] = '\0';
		LoadSky(Settings::SkyChanger::skyName);
	}

}
