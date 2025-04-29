#include <iostream>

using namespace std;

int main()
{
	int arr[3] = { 101,201,333 }; //dec. with init of array

	cout << "arr[0] = " << arr[0] << endl;
	cout << "arr[1] = " << arr[1] << endl;
	cout << "arr[2] = " << arr[2] << endl;
	cout << "arr[3] = " << arr[3] << endl; //garbage value as arr out of bound

	for(int iv=0;iv<3;iv++)
		cout << "arr["<<iv<<"] = " << arr[iv] << endl;

	arr[0] = 222;
	arr[1] = arr[0] * 10;

	for (int iv = 0;iv < 3;iv++)
		cout << "arr[" << iv << "] = " << arr[iv] << endl;



	return 0;
}