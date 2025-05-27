#include <iostream>
using namespace std;
/*
class Vechicle {

protected:
	int wheels;
	int seats;
	string material;
	string color;
	string modeOfCrtl;
public:
	Vechicle(int wheels, int seats, string material, string color, string modeOfCtrl)
	{
		this->wheels = wheels;
		this->seats = seats;
		this->material = material;
		this->color = color;
		this->modeOfCrtl = modeOfCrtl;
	}
	
	void display() {
		cout << "Vechicle Details\n";
		cout << wheels << "\t" << seats << "\t" << material<<"\t";
		cout << color << "\t" << modeOfCrtl << endl;
	}
};

class Car :public Vechicle
{
private:
	string brand;
	string fuelType;
	int doors;
	float price;
	string variantType;
	string model;
public:
	Car(string brand, string fuelType, int doors, float price, string variantType, string model)
	{

	}
};

*/

class A
{
protected:
	int x, y;
public:
	//A() { this->x = 0; this->y = 0; }
	A(int x, int y) { this->x = x; this->y = y; }

	void dispA() { cout << "x: " << x << "\t y: " << y << endl; }
};

class B : public A
{
protected:
	int a, b;
public:
	B(int x, int y, int a, int b) : A(x, y) { this->a = a; this->b = b; }

	void dispB() { cout << "a: " << a << "\t b: " << b << endl; }
};


int main()
{
	B objB(10, 20, 30,40);
	
	objB.dispA();

	objB.dispB();

}