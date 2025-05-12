#include <iostream>

using namespace std;


void swap1(int, int); // call by value
void swap2(int*, int*); // call by pointers
void swap3(int&, int&); // catch by ref.


int main()
{
	int a = 10, b = 20;
	cout << "In Main (before swap)\n" << a << "\t" << b << endl;

	/*swap1(a, b);
	cout << "In Main (after swap)\n" << a << "\t" << b << endl;*/

	/*swap2(&a, &b);
	cout << "In Main (after swap)\n" << a << "\t" << b << endl;*/

	swap3(a, b);
	cout << "In Main (after swap)\n" << a << "\t" << b << endl;

	return EXIT_SUCCESS;
}

void swap1(int a, int b)
{
	int t;
	t = a;
	a = b;
	b = t;
	cout << "In swap1 function \n" << a << "\t" << b << endl;

}

void swap2(int* a, int* b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
	cout << "In swap2 function \n" << *a << "\t" << *b << endl;
}


void swap3(int &a, int &b)
{
	int t;
	t = a;
	a = b;
	b = t;
	cout << "In swap3 function \n" << a << "\t" << b << endl;
}


/*

for(i=0 to N)
{
	for(j=0 to N)
	{
		if(a[i] < a[j])
			swap(a[i], a[j])
	}
}

*/