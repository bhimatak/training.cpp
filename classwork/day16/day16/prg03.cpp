#include <iostream>

using namespace std;


int main()
{
	int a[] = { 10,10,10,10 };
	int n = sizeof(a) / sizeof(a[0]);
	int i, j, k;
	for (i = 0;i < n;i++)
	{
		for (j = i + 1;j < n;)
		{

			if (a[i] == a[j])
			{
				//shifting of elements to the left side
				for (k = j;k < n - 1;k++)
					a[k] = a[k + 1];
				n--; // reduce the size of dup item found after shifting

			}
			else
				j++; //no dup item present in the next element
		}
	}


	for (i = 0;i < n;i++)
		cout << a[i] << " ";
	cout << endl;

}
