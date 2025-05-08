#include <iostream>

using namespace std;

int main()
{
	int n = 5;
	int i, j, k;

	for (i = 0;i <= n;i++) // rows
	{
		for (j = 0;j <= i;j++)
			cout << "* ";
		for (k = 0;k < ((2*n) - (2*i));k++)
			cout << "  ";
		for (j = 0;j <= i;j++)
			cout << "* ";
		cout << endl;
	}

}