#include "primeFunction.h"

bool isPrime(int num)
{
	bool flag = false;
	if (num <= 1)
		return false;
	for (int itr1 = 2;itr1 <= num / 2;itr1++)
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
