#include <iostream>
#include "typeConv.h"
using namespace std;
void typeConvImp()
{
	int a = 5;
	float b = 10.2;
	float res = a + b;

	cout << res << endl;

}


void typeConvExp()
{
	int a = 10;
	int b = 3;
	float res = a/b;
	cout << res << endl;
	res = (float)a/b;

	cout << res << endl;
	b = (float)a;
	cout << b << endl;
}