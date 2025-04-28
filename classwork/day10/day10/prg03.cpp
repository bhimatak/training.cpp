/*
functions of different type: calling of functions 

1. call by value
2. call by pointers
3. call by reference

*/

#include <iostream>

int add(int, int);
int updateAdd(int, int);
int updateAdd2(int *, int *);
int updateAdd3(int&, int&);
using namespace std;

int main()
{
	int a = 10, b = 20;
	cout << "Address of a=" << &a << "\tAddress of b=" << &b << endl;
	int res = add(a, b);
	cout << res << endl;
	res = updateAdd(a, b);
	cout << res << endl;
	cout << "a= " << a << "\tb =" << b << endl;
	res = updateAdd2(&a, &b);
	cout << res << endl;
	cout << "a= " << a << "\tb =" << b << endl;

	res = updateAdd3(a, b);
	cout << res << endl;
	cout << "a= " << a << "\tb =" << b << endl;
	return 0;
}

int add(int v1, int v2)
{
	return v1 + v2;
}

int updateAdd(int v1, int v2)
{
	v1 *= 2;
	v2 /= 3;
	cout << "v1 = " << v1 << "\tv2 = " << v2 << endl;
	return v1 + v2;
}

// callby address
int updateAdd2(int *v1, int *v2)
{
	cout << v1 << "\t" << v2 << endl;
	*v1 *= 2;
	*v2 /= 3;
	cout << "v1 = " << *v1 << "\tv2 = " << *v2 << endl;
	return *v1 + *v2;
}

// callby reference
int updateAdd3(int& v1, int& v2)
{
	cout << "In UpdatedAdd3" << endl;
	cout << "v1= " << v1 << "\tv2= " << v2 << endl;
	v1 *= 10;
	v2 = v2 * v1;
	cout << "Changed values" << endl;
	cout << "v1= " << v1 << "\tv2= " << v2 << endl;

	return v1 + v2;

}
