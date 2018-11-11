#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int n, m, numPrimary = 0;
	cin >> n >> m;


	for (int i = n; i <= m; i++) {
		int result = 0;
		for (int j = 1; j <= i / 2; j++) {
			if (i % j == 0)
				result += j;
		}

		bool isPrimary = true;
		for (int j = 2; j <= result / 2; j++) {
			if (result % j == 0)
				isPrimary = false;
		}
		if (isPrimary)
			numPrimary++;
	}

	cout << numPrimary << endl;


 return 0;
}




