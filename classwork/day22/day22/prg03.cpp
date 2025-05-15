#include <iostream>

using namespace std;


void arrRev(int[], int);
void arrRevPtr(int  *, int);

void dispArr(int[], int);

int main()
{
	int list[] = { 1,2,3,4,5 };
	int cap = sizeof(list) / sizeof(list[0]);
	cout << "\tBefore" << endl;
	dispArr(list, cap);
	arrRev(list, cap);
	cout << "\tAfter" << endl;
	dispArr(list, cap);

	cout << "\tAfter" << endl;
	arrRevPtr(list, cap);
	dispArr(list, cap);


	return 0;
}


void dispArr(int a[], int n)
{
	for (int i = 0;i < n;i++)
		cout << "\t" << a[i];
	cout << endl;
}

void arrRev(int a[], int n)
{
	int t;
	for (int i = 0;i <= n / 2;i++)
	{
		t = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = t;
	}


}


void arrRevPtr(int* ptr, int n)
{
	int t;
	int* start = nullptr;
	int* end = nullptr;

	start = ptr;
	end = ptr + (n - 1); //BA + n - 1;
	
	while (start < end) {

		//logic to change the values
		t = *start;
		*start = *end;
		*end = t;
		//counter
		start++;
		end--;
	}
	/*

	for (start = ptr, end = ptr + (n - 1);start < end;start++, end--)
	{
		t = *start;
		*start = *end;
		*end = t;
	}

	*/
}
