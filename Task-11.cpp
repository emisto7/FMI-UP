#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int num, sum = 0, count = 0;

	while (sum < 234 && count < 5) {
		cin >> num;
		if (num <= 99 && num >= 10) {
			count++;
			sum += num;
		}
	}




 return 0;
}




