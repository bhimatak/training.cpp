/*
MAX of 2 numbers using pointers and function
*/

#include <iostream>

using namespace std;

int max2Nos(int *, int *);
void dispEq(int);
void dispAppName(char*);

int main()
{
	int v1 = 20, v2 = -10;
	char appName[50] = "MAX of two numbers";
	dispEq(50);
	dispAppName(appName);
	dispEq(50);

	cout << "\t"<<max2Nos(&v1, &v2) << endl;
	dispEq(50);
}

int max2Nos(int* x, int* y)
{
	//int retValue = 0;

	//logic to find max of 2 numbers and assign it to retValue

	/*if (*x < *y)
		retValue = *y;
	else
		retValue = *x;*/
	
	/*retValue = (*x > *y) ? (*x) : (*y);
	return retValue;*/

	return((*x > *y) ? *x : *y);
}

void dispEq(int n)
{
	for (int i = 0;i < n;i++)
		cout << "=";
	cout << endl;
}


void dispAppName(char* appName)
{
	cout << "\t" << appName << "\t" << endl;

}
/*
========================================

*/