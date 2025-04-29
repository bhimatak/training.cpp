#include <iostream>
#define MAX 100
using namespace std;

bool isPrime(int);

int main()
{
	int num, count=0;
	cout << "Enter n value: ";
	cin >> num;

	int arr[MAX];
	count = 0;
	for (int i = 1;i <= num;i++)
	{
		if (isPrime(i)) {
			arr[count++] = i;
		}
	}

	
	for (int i = 0;i < count;i++) {
		
		cout << arr[i] << endl;
	}

	for (int i = 0;i < count;i++)
	{
		for (int j = i;j < count;j++)
		{
			if ((arr[i] + arr[j]) == num)
			{
				cout << arr[i] << " + " << arr[j] << " = " << num << endl;
			}
		}
	}

	return 0;
}

bool isPrime(int num)
{
	bool flag = false;
	
	if (num <= 1) {
		return false;
	}
	for (int i = 2;i <= num / 2;i++)
	{
		if (num % i == 0)
		{
			flag = true;
			break;
		}
	}

	if (flag == true)
		return false;
	else
		return true;
}


//find the nth number made up of 1,4,6,9 digits only 