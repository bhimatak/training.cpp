#include <iostream>

using namespace std;

int main()
{

	int n = 5;
	int i, j,k;

	for (i = 0;i < n;i++)
	{
		for (j = 0;j < i;j++) //this loop prints spaces for each row
		{
			cout << " ";
		}

		for (k = 0;k < n - i;k++) // this loop prints * for each row
			cout << "* ";
		cout << endl;
	}

	for (i = 1;i < n;i++)
	{
		for (j = 0;j < n - i-1;j++)
			cout << " ";
		for (k = 0;k <= i;k++)
			cout << "* ";
		cout << endl;
	}



	return 0;

}