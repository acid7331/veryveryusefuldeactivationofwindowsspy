#include "Main.h"

void disable() {

	std::cout << "disabling spy!!!!\n\n";
	for (int i = 0; i < 20; i++)
	{
		static int percent;
		percent += 5;
		nUtils::DoNothing();
		nUtils::beepnbisschen();
		std::cout << percent << "% !!!!\n";

	}
}

int	main() {
	system("color a");
	disable();
	std::cout << "\n\n done!\n\n";
	system("pause");
	return EXIT_SUCCESS;
}