#include<iostream>
#include <vector>



std::string start() {
	std::cout << "Welcome to the Brain Games!" << "\n" << "May I have your name? ";
	std::string k = "";
	std::cin >> k;
	std::cout << "Hello, " << k << "!" << "\n";
	return k;
}

void que(int a, int b, int c) {
	std::cout << "Question: " << a << " " << b << " " << c << "\n";
}

void que() {
	std::cout << "Question: ";
}

void answ() {
	std::cout << "Your answer: ";
}

bool prove(int nok, int a) {
	if (a == nok) {
		return true;
	}
	else {
		return false;
	}
}

int NOK(int a, int b, int c) {
	for (int i = 1; i < a * b * c; i++) {
		if (i % a == 0 && i % b == 0 && i % c == 0) {
			return i;
		}
	}
}

int number() {
	return rand() % 5 + 1; 
}

std::vector<int> step(int length) {
	std::vector<int> p;
	int fir = number(), q = number();

	for (int i = 0; i < length; ++i) {
		p.push_back(fir * pow(q, (i + 1)));
	}

	return p;
}


void alg(int length, std::vector<int> p, int ind) {
	for (int i = 0; i < length; ++i) {
		if (i == ind) {
			std::cout << ".. ";
		}
		else {
			std::cout << p[i] << " ";
		}
	}
}