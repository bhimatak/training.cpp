#include <iostream>

using namespace std;


//Base class
class A
{
private:
	int x;
protected:
	int y;
protected:
	void proMethod() { cout << "A: protected method called" << endl; }
public:
	A() { cout << "A constr got called" << endl;
	x = 10;y = 20; 
	}
	void dispA() {
		cout << "\tHello from A" << endl;
		cout << "x = " << x << "\ty = " << y << endl;
	}
};

//derived class
class B : public A
{
private:
	int a;
protected:
	int b;
public:
	B() { cout << "B constr got called" << endl;
	a = 11;b = 22; 
	}
	void dispB() {
		cout << "\tHello from B" << endl;
		cout << "a = " << a << "\tb = " << b << endl;
	}
	void protectB() {
		//proMethod();
		y = 10;
	}
};


int main()
{
	A objA;
	B objB;

	objA.dispA();

	objB.dispB();
	objB.dispA();
	//objB.proMethod(); //compile error: accessing outside the class
	objB.protectB();
	return 0;
}