#include <iostream>

using namespace std;


/*

   *
  ***
 *****
*******


*/

/*

int main()
{
	int n = 6;
	int i, j,k,l,m;
	int half = n / 2;

	for (int row = 0;row < n;row++)
	{
		
		if (row<half) {
			for (j = 0;j < (n / 2);j++)
				cout << "A";
			for (k = j;k < n;k++)
				cout << "B";
		}
		else {
			for (l = 0;l < (n / 2);l++)
				cout << "C";
			for (m = l;m < n;m++)
				cout << "D";
		}
		cout << endl;
		
	}
	cout << endl;

return 0;
}

*/

int main()
{
	int i, j, k, l, m, n = 6;

	for (i = 0;i < n;i++)
	{
		for (j = 0;j < n;j++)
		{
			if ((i < n / 2) && (j<n / 2))
				cout << "A";
		}
		for (k = 0; k < n; k++)
		{
			if ((i < n / 2) && (k >= n / 2))
				cout << "B";
		}

		for (l = 0;l < n;l++)
		{
			if ((i >= n / 2) && (l < n / 2))
				cout << "C";
		}

		for (m = 0;m < n;m++)
		{
			if ((i >= n / 2) && (m >= n / 2))
				cout << "D";
		}

		cout << endl;
	}
}