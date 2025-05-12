#include <iostream>

using namespace std;

int main()
{
	int a[3] = { 10,20,30 };

	int* ptr = a;

	cout << *ptr++ << endl;
	cout << *++ptr << endl; // this points to the next location // ++*ptr => increment the value by 1
	cout << *ptr++ << endl;
	ptr = a; // reassign to the BA
	int prod = *ptr * *ptr;

	cout << "prod: " << prod << endl;

	cout << sizeof(ptr) << " " << sizeof(void*) << endl;

	return 0;
}