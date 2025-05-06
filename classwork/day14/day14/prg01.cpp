#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cout << "Enter the values of a "<<endl;
	cin >> a;
	cout << "Enter the values of b " << endl;
	cin >> b;
	cout << "Enter the values of c " << endl;
	cin >> c;

	if (a > b)
	{
		if (a > c)
		{
			cout << "A is biggest" << endl;
		}
		else
		{
			cout << "C is Biggest" << endl;
		}
	}
	else
	{
		if (b > c)
		{
			cout << "B is Biggest" << endl;
		}
		else
		{
			cout << "C is Biggest" << endl;
		}
	}

	return 0;
}