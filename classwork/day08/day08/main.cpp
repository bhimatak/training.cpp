#include <iostream>
#include "primeFunction.h"

using namespace std;
int getDigits(int);

int main()
{
	int num, count;
	cout << "Enter the number: ";
	cin >> num;
	/*
	bool ret = isPrime(num);
	if (ret == true)
		cout << "Given number: " << num << " is a prime number" << endl;
	else
		cout << "Given number: " << num << " is not a prime number" << endl;
	*/
	count = 0;
	int i = 1;
	while (true) {
		if (getDigits(i++)) {
			cout << "Counted" << endl;
			count++;
			if (count == num)
				break;
		}
		else
			cout << "not counted" << endl;
	}
	cout << "I = " << i -1<< endl;
	return 0;
}


int getDigits(int num)
{
	int r;
	int countDigits = 0;
	int countNPrime = 0;
	while (num)
	{
		r = num % 10;
		cout << "r = " << r << endl;
		if (isPrime(r) == true) {
			cout << r << " is prime digit" << endl;
			countNPrime++;
		}
		num /= 10;
		countDigits++;
	}
	cout << "Count Digits " << countDigits << endl;
	cout << "Count Prime Digits " << countNPrime << endl;

	if (countDigits == countNPrime)
		return 1;
	else
		return 0;
}