/*
Sum of arrays using pointers and functions

*/

#include <iostream>

using namespace std;

int sumArr(int *, int);


int main()
{
	int list[] = { 1,2,3,4,5 };
	int cap = sizeof(list) / sizeof(list[0]);
	cout << "\t"<<sumArr(list, cap) << endl;

	return 0;
}

int sumArr(int* ptr, int n)
{
	int sum = 0;

	//logic to calculate sum of the list
	//ptr converted to array notation
	
	/*for (int i = 0;i < n;i++)
		sum += ptr[i];*/

	//pointer notation
	for (int i = 0;i < n;i++,ptr++)
		sum += *ptr;


	return sum;
}