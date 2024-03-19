#include <iostream>
#include "i.h"

int main() {

	std::cout << "Please, choose 1st game or 2nd: ";
	int n;
	std::cin >> n;
	if (n == 1) {
		F_main();
	}
	if (n == 2) {
		F2_main();
	}
	return 0;
}