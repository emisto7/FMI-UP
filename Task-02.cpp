#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	double zaem, meseci, procent, kredit=0;
	cin >> zaem >> meseci >> procent;

	kredit += zaem + zaem*(procent/100);
	double monthlyInterest = procent / meseci;
	cout << monthlyInterest << "\n" <<
		monthlyInterest/100 + 1 << "\n" <<
		kredit / meseci << "\n" << kredit << "\n";


 return 0;
}




