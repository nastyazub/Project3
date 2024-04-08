#include "head.h"

int G3_main() {
	std::string n = start(); //начало, пишем им€

	bool fl = true; //создаЄм флаг

	for (int i = 0; i < 3; i++) { //само тело игры (3 раза повтор€етс€, при неправиьном ответе заканчиваетс€)
		srand(time(0));
		int x = rand() % 1000, p;
		std::string ans;

		std::cout << "If given number is prime answer 'yes'. Otherwise answer 'no'." << "\n";

		que(); 
		
		std::cout << x << "\n";

		answ(); 
		std::cin >> ans; //записываетс€ ответ пользовател€

		if (ans == "yes") { //циклы дл€ удобства проверки
			p = 1;
		}
		else if (ans == "no") {
			p = 0;
		}
		
		else {
			std::cout << "'" << ans << "' is wrong answer ;(." << "\n" << "Let's try again, " << n << "!" << "\n";
			fl = false;
			break;
		}
		int k = is_simple(x);

		if (prove(k, p)) {
			std::cout << "Correct!" << "\n";
		}

		else {
			std::cout << "'" << ans << "' is wrong answer ;(." << "\n" << "Let's try again, " << n << "!" << "\n";
			fl = false;
			break;
		}


	}

	if (fl) {
		std::cout << "Congratulations, " << n << "!";
	}

	return 0;
}