#include <iostream>
#include "typeConv.h"
using namespace std;

int *func(int);

int main()
{
	/*int* ptr = NULL;
	ptr = func(10);
	cout << *ptr << endl;
	*ptr = 201;
	cout << *ptr << endl;
	*/
	//typeConvImp();
	typeConvExp();
	return 0;
}

int *func(int v)
{
	static int r = 100;
	r = r + v;
	return &r;

}