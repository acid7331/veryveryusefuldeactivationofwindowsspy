#include "Main.h"

void nUtils::DoNothing() {
	return;
}

void nUtils::beepnbisschen() {
	for (int i = 0; i < 4; i++)
	{
		Beep(200, 100);
		Sleep(40);
	}
}