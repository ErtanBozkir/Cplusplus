// while ornek.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;


	int _tmain(int argc, _TCHAR* argv[])
	{
		int x, y,a,b;
		a = 0;
		
		cout << "kucuk sayiyi giriniz:  ";
		cin >> x;
		b = x;
		cout << "buyuk sayiyi giriniz:  ";
		cin >> y;
		while (x <= y){
			a = a + x;
			x = x + 1;
		}
		cout << b << "den " << y << " e kadarki sayilarin toplami= " <<a;
		cin >> a;
	}


