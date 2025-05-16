#include <iostream>
#include <cstdlib>
using namespace std;

int* func(int a)
{
	static int sum=0; // use static as a fix to avoid dang. ptr
	sum += a;
	cout << "BA of sum=" << (unsigned long int) & sum << endl;
	return &sum;
}

int main()
{
	int* ptr = func(101); //dangling ptr

	cout << *ptr << "\t Address of sum="<< (unsigned long int)ptr<<endl;
	*ptr = 202;
	ptr = func(303);
	cout << *ptr << endl;

	return 0;

}

