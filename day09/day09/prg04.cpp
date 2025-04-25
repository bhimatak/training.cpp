#include <iostream>

using namespace std;

int main()
{
	int i, j,l,k,n;
	cin >> n;
	cout << endl;
	for (i = 0;i <=n;i++)
	{
		for (l = i;l <= i;l++)
			cout << "*";
		
		for (j = 1;j <= i;j++)
		{
			cout << j;
		}
		for (k = i-1;k > 0;k--)
		{
			cout << k;
		}
		for (int m = n;m>=n-k;m--)
			cout << "*";
		cout << endl;
	}
	//cout << "second" << endl;
	//second half
	for (i = 0;i < n;i++)
	{
		for (l = i;l <= i;l++)
			cout << "*";
		for (k = 1;k < n-i;k++)
		{
			cout << k;
		}
		k--;
		for (j = k-1;j >= 1;j--)
		{
			cout << j;
		}
		for (l = i-j;l <= i;l++)
			cout << "*";
		
		cout << endl;
	}

	return 0
}