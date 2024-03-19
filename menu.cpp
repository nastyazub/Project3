#include <iostream>
#include "head.h"

int main() {

	std::cout << "Please, choose 1st game or 2nd: ";
	int n;
	std::cin >> n;
	if (n == 1) {
		G1_main();
	}
	if (n == 2) {
		G2_main();
	}
	return 0;
}