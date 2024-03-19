#include <cmath>
#include "head.h"

using namespace std;

int G2_main() {

    std::string n = start(); //начало, пишем имя
    cout << "\nWhat number is missing in the progression?\n";
    bool fl = true;

    for (int i = 0; i < 3; i++) {

        srand(time(0));

        const int length = number() + 5;
        int index = rand() % length;


        que();
        vector<int> p = step(length); //создание прогрессии


        alg(length, p, index); //вывод прогрессии на экран
        cout << "\n";

        answ();
        int answer;
        cin >> answer;

        if (prove(p[index], answer)) { //проверка
            cout << "Correct!\n";
        }
        else {
            cout << "'" << answer << "' is the wrong answer ;(. Correct answer was '" << p[index] << "'.\n";
            cout << "Let's try again, " << n << "!\n";
            fl = false;
            break;
        }

  
    }

    if (fl) {
        cout << "Congratulations, " << n << "!"; //выграли
    }

    

    return 0;
}