#include "head.h"

int G3_main() {
	std::string n = start(); //������, ����� ���

	bool fl = true; //������ ����

	for (int i = 0; i < 3; i++) { //���� ���� ���� (3 ���� �����������, ��� ����������� ������ �������������)
		srand(time(0));
		int x = rand() % 1000, p;
		std::string ans;

		std::cout << "If given number is prime answer 'yes'. Otherwise answer 'no'." << "\n";

		que(); 
		
		std::cout << x << "\n";

		answ(); 
		std::cin >> ans; //������������ ����� ������������

		if (ans == "yes") { //����� ��� �������� ��������
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