#include <iostream>

using namespace std;


int main()
{
	int a = 10;
	int b = 20;
	int c = 30;

	int* ptr = nullptr;

	ptr = &a;
	//accessing value of a using ptr
	cout << *ptr << endl;

	//update the value of a using ptr
	*ptr = 101;
	
	//accessing value of a using ptr
	cout << *ptr << endl;
	cout << a << endl;

	ptr = &b;
	//accessing value of a using ptr
	cout << *ptr << endl;

	ptr = &c;
	//accessing value of a using ptr
	cout << *ptr << endl;



	return 0;
}