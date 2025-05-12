#include <iostream>

using namespace std;

int main()
{
	int a[3] = { 10,20,30 };
	cout << a[0] << "\t" << a[1] << "\t" << a[2] << endl;

	int* ptr = nullptr;

	//ptr = &a[0];
	ptr = a;  // assign ptr to the BA of array
	cout << *ptr << endl;

	//ptr = (ptr+1); //ptr+=1
	ptr++;
	cout << *ptr << endl;

	//ptr = ptr + 1;
	ptr++;
	cout << "last ele: " << *ptr << endl;

	//ptr = ptr + 1;
	ptr++;
	cout << *ptr << endl;

	//ptr = ptr - 1;
	ptr--;
	cout << *ptr << endl;

	//ptr = ptr - 1;
	ptr--;
	cout << *ptr << endl;
	ptr--;
	cout << *ptr << endl;

	/*ptr = a + 2;
	cout << *ptr << endl;*/


	return 0;

}