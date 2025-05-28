#include <iostream>

using namespace std;

class A {
protected:
	int a;
	void dispAPrt() { cout << "A: Method of protected" << endl; }
public:
	A() { a = 10; }
	void dispA() { cout << "A: a = " << a<<endl; }
};

class B : protected A
{
public:
	void dispB() {
		a = 20;
		dispAPrt();
		dispA();
	}
};

class C : protected B
{
public:
	void dispC() {
		dispB();
	}
};

int main()
{
	C objC;
	objC.dispC();
	
}