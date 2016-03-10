// ConsoleApplication8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int i, sonuc = 1, sayi;
	cout << "faktoriyelini almak istediginiz sayiyi giriniz:  ";
	cin >> sayi;
	for (i = 1; i <= sayi; i++)
	{
		sonuc = i*sonuc;

	}
	cout << "sonuc =  " << sonuc;
	cin >> sonuc;
	return 0;
}

