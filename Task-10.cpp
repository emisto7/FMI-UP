#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int number, k = 0, sum = 0;
	cin >> number;
	while (number >= 1)
	{
		sum += number;
		cin >> number;
		k++;

	}
	double average = sum / k;
	cout << k <<" "<< sum <<" "<< average << endl;




 return 0;
}




