#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int n, k = 0;
	cin >> n;

	do {
		n /= 10;
		k++;
	} while (n != 0);

	cout << k << endl;



 return 0;
}




