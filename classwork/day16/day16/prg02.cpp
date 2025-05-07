//GCD
#include <iostream>

using namespace std;

int main()
{
	int n1 = 12, n2 = 30, r;
	int d,n;
	if (n1 < n2) {
		d = n1;
		n = n2;
	}
	else
	{
		d = n2;
		n = n1;
	}
	while (true)
	{
		r = n % d;
		if (r == 0) {
			n = d;
			break;
		}
		d = r;
		n = d;
	}
	cout << "GCD: " << n<<endl;

	return 0;
}