#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int n, k = 0, temp1, temp2 = 0;
	cin >> n;
	temp1 = n;

	do {
		n /= 10;
		k++;
	} while (n != 0);
	n = temp1;

	do {
		k--;
		temp2 +=(n % 10) * pow(10, k);
		n /= 10;
	} while (n != 0);

	if (temp2 != temp1)
		cout << "Not";
	cout << "Palindrome.";



 return 0;
}




