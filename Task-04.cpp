#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int balance = 5, button, code;
		do {
			cout << "1. Проверка на баланс.\n" <<
				"2. Зареждане на ваучер - зареждане с ваучер за 10 лв.\n" <<
				"3. Изход.\n";
				cin >> button;
				if (button == 1) {
					cout << "Balance: " << balance << endl;
				}
				else if (button == 2) {
					cout << "Enter code: ";
					cin >> code;
					int numOf5 = 0;
					while (code != 0) {
						if (code % 10 == 5)
							numOf5++;
						code /= 10;
					}
					if (numOf5 == 3)
						balance += 10;
				}
		} while (button != 3);


 return 0;
}




