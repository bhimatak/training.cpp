/*
DMA => Dynamic memory Allocation

*/

#include <iostream>

using namespace std;

int main()
{

	int a;
	a = 10;
	/*
	int* ptr = &a; 
	// store a value in an address and make the address 
	// pointed by the pointer
	*ptr = 101;
	cout << *ptr << endl;
	*/

	int *ptr = (int *)malloc(sizeof(int)*3);
	int* temp = ptr;
	cout << "Address of ptr= " << (unsigned long int)ptr << endl;
	*ptr = 202;
	ptr++;
	cout << "Address of ptr= " << (unsigned long int)ptr << endl;
	*ptr = 203;
	ptr++;
	cout << "Address of ptr= " << (unsigned long int)ptr << endl;


	*ptr = 301;


	ptr = temp; // reassign back to the BA of the list

	cout << *ptr++<<endl;
	cout << *ptr++ << endl;
	cout << *ptr++ << endl;

	return 0;
}