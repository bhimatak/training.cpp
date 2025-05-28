#include <iostream>

using namespace std;
/*
class Address;
class Person {
	Address addr;
};
*/
//1 Base class
class A {
	int a;
public:
	A(int x) : a(x) { cout << "Contr A got called" << endl; }
	~A() { cout << "Destr A got called" << endl; }
	void dispA() { cout << "a = "<<a << endl; }
};

//2 Base Class
class B {
	int b;
public:
	B(int y) : b(y) { cout << "Contr B got called" << endl; }
	~B() { cout << "Destr B got called" << endl; }
	void dispB() { cout << "b = " << b << endl; }
};


class C : public B, public A
{
	int c;
public:
	C(int x, int y,int z) : A(x), B(y), c(z) { cout << "Contr C got called" << endl; }
	~C() { cout << "Destr C got called" << endl; }
	void dispC() { cout << "c = " << c << endl; }
};



int main()
{
	C cObj(10,20,30);

	return 0;
}