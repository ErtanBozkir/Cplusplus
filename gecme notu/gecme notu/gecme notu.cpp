// vize notu.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{

	int x;

	cout << "Not ortalamanizi giriniz:  ";
	cin >> x;


	if (x > 90) {
		cout << "AA ile gectiniz";
	}
	else if (x > 80) {
		cout << "BA ile gectiniz";
	}
	else if (x > 70) {
		cout << "BB ile gectiniz";
	}
	else if (x >= 60) {
		cout << "CB ile gectiniz";
	}
	else{
		cout << "Kaldiniz.";
	}


	cin >> x;


	return 0;
}

