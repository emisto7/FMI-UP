#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int height, day = 0;
	cin >> height;

	while (true) {
		day++;
		height -= 2;
		if (height <= 0)
			break;
		height += 1;
	}

	cout << day << endl;




 return 0;
}




