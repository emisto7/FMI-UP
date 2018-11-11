#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int n, k = 0, temp;
	cin >> n;
	temp = n;

	do {
		n /= 10;
		k++;
	} while (n != 0);

	int result = 0;
	n = temp;
	do {
		result += pow(n % 10, k);
		n /= 10;
	} while (n != 0);

	if (result == temp)
		cout << "narcissistic\n";
	else
		cout << "not narcissistic\n";


 return 0;
}




