#include <iostream>
#include "head.h"

int main() {

	std::cout << "Please, choose 1st game, 2nd or 3rd: ";
	int n;
	std::cin >> n;
	if (n == 1) {
		G1_main();
	}
	if (n == 2) {
		G2_main();
	}
	if (n == 3) {
		G3_main();
	}
	else {
		std::cout << "We haven't this game";
	}
	return 0;
}