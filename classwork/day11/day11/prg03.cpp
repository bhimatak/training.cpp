#include <iostream>
#define CAP 10

using namespace std;

int main()
{
	int arr[CAP];
	int iv;
	int gValue=0;

	cout << "Enter the " << CAP << " element values of array" << endl;
	for (iv = 0;iv < CAP;iv++)
		cin >> arr[iv];

	cout << "Element of array" << endl;
	for (iv = 0;iv < CAP;iv++)
		cout << arr[iv] << endl;

	cout << "Enter value to be searched in the list: ";
	cin >> gValue;

	for (iv = 0;iv < CAP;iv++)
	{
		if (arr[iv] == gValue)
			break;
	}

	if (iv == CAP)
		cout << gValue << " Element not found in the list" << endl;
	else
		cout << gValue << " Element found in the list at index value = "<<iv << endl;

	
}