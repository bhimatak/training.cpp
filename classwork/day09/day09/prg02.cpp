#include <iostream>

using namespace std;

int fact(int);

int main()
{
	int n = 5;

	int ret = fact(n);

	cout << "factorial of " << n << " = " << ret << endl;

	return 0;
}

int fact(int n)
{
	int retValue = 1;
	cout << n << endl;
	if (n == 0 || n == 1)
		return 1;
	retValue = n * fact(n-1);
	return retValue;
}
