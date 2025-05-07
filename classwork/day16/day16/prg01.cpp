#include <iostream>

using namespace std;

/*
//1st method consider arrays are unique
int main()
{
	int a[] = { 3,-20,30,5,-20 };
	int n = sizeof(a) / sizeof(a[0]);
	int t;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++) {
			if (a[j] < a[j + 1])
			{
				t = a[j + 1];
				a[j + 1] = a[j];
				a[j] = t;
			}
		}
	}

	for (int i = 0;i < n;i++)
		cout << a[i] << ",";

	
	cout << endl;
	cout << a[n - 2] << endl;
}

*/

int main()
{
	int a[] = { 3,-20,30,5,3 };
	int n = sizeof(a) / sizeof(a[0]);

	int f = INT_MAX, s = INT_MAX;

	for (int i = 0;i < n;i++)
	{
		if (a[i] < f)
		{
			s = f;
			f = a[i];
		}

		else if ((a[i] < s) && (a[i] != f))
			s = a[i];
	}

	cout << "First Lowest: "<<f << "\tSecond Lowest: " << s << endl;
}