#include <iostream>

bool isPrime(int);

using namespace std;


int main()
{
	int num;
	cout << "Enter the number: ";
	cin >> num;
	bool ret = isPrime(num);
	if (ret == true)
		cout << "Given number: " << num << " is a prime number" << endl;
	else
		cout << "Given number: " << num << " is not a prime number" << endl;
	return 0;
}


bool isPrime(int num)
{
	bool flag = false;
	if (num <= 1)
		return false;
	for (int itr1 = 2;itr1 <= num/2;itr1++)
	{
		if (num % itr1 == 0)
		{
			flag = true;
			break;
		}
	}
	if (flag == false)
		return true;
	else
		return false;
}

