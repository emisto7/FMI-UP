#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int n, i, sum = 1;
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		sum = sum * i;
	}

	cout << sum << endl;


 return 0;
}




