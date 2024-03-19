#include "i.h"


int F_main() {
	std::string n = start(); //начало, пишем имя

	bool fl = true; //создаём флаг

	for (int i = 0; i < 3; i++) { //само тело игры (3 раза повторяется, при неправиьном ответе заканчивается)
		srand(time(0));
		int x = rand() % 20 + 1, y = rand() % 20 + 1, z = rand() % 20 + 1, ans;
		std::cout << "Find the smallest common multiple of given numbers." << "\n";
		que(x, y, z);
		answ();
		std::cin >> ans;

		if (prove(NOK(x, y, z), ans)) {
			std::cout << "Correct!" << "\n";
		}

		else {
			std::cout << "'" << ans << "' is wrong answer ;(. Correct answer was '" << NOK(x, y, z) << "'." << "\n" << "Let's try again, " << n << "!" << "\n";
			fl = false;
			break;
		}

	}

	if (fl) {
		std::cout << "Congratulations, " << n << "!";
	}

	return 0;

}