#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int num;
	cin >> num;

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (i == 0 || i == num - 1 ||
				j == i || j == num - 1 - i)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}


 return 0;
}




