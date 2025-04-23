#include <iostream>

using namespace std;

int main()
{
	int num = 43;
	int r, prod = 1, sum = 0;

	while (num)
	{
		r = num % 10;
		sum += r;
		if (r != 0)
		{
			prod *= r;
		}
		num /= 10;
	}

	cout << "Sum=" << sum << "\tProd=" << prod << endl;
	return 0;
}