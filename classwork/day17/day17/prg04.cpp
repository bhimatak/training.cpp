/*#include <iostream>

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

	for (i = n-1;i >0;i--) // rows
	{
		for (j = 0;j <= i;j++)
			cout << "* ";
		for (k = 0;k < ((2 * n) - (2 * i));k++)
			cout << "  ";
		for (j = 0;j <= i;j++)
			cout << "* ";
		cout << endl;
	}

}

*/

// C++ program to print
// Pascal’s Triangle
#include <iostream>
#define MAX 20
using namespace std;

void printPascal(int n)
{

	int arr[MAX][MAX];

	for (int line = 0; line < n; line++) {
		// Every line has number of integers
		// equal to line number
		for (int i = 0; i <= line; i++) {
			// First and last values in every row are 1
			if (line == i || i == 0)
				arr[line][i] = 1;
			else
				arr[line][i] = arr[line - 1][i - 1]
				+ arr[line - 1][i];
			cout << arr[line][i] << " ";
		}
		cout << "\n";
	}
}

int main()
{
	int n = 6;
	printPascal(n);
	return 0;
}