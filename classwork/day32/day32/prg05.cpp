#include <iostream>

using namespace std;


class Animal
{
public:
	void eat() { cout << "Eat" ; }
	void walk() { cout << "Walk" ; }
	void makeasound() { cout << "Make a sound"; }
	virtual void soundlike() { cout << " Animal sound"; }

};


class Test {

};

class cat : public Animal
{
public:
	void dispCat() { cout << "Cat" ; }
	void soundlike() { cout << " Meow!"; } //overridden by base class method
};

class dog : public Animal
{
public:
	void dispDog() { cout << "Dog"; }
	void soundlike() { cout << " bow!"; }
};


int main()
{
	Animal* bcPtr = nullptr;
	cat c;
	dog d;

	c.dispCat();
	cout << " can ";
	c.eat();
	cout << " and can ";
	c.walk();
	cout << " and also ";
	c.makeasound();
	cout << " like: ";
	c.soundlike();
	cout << "\n=================\n\n";
	d.dispDog();
	cout << " can ";
	d.eat();
	cout << " and can ";
	d.walk();
	cout << " and also ";
	d.makeasound();
	cout << " like: ";
	d.soundlike();
	cout << "\n=================\n\n";
	
	
	bcPtr = &c;
	bcPtr->eat();
	bcPtr->walk();
	bcPtr->makeasound();
	bcPtr->soundlike();
	cout << "\n=================\n\n";

	bcPtr = &d;
	bcPtr->eat();
	bcPtr->walk();
	bcPtr->makeasound();
	bcPtr->soundlike();
	cout << "\n=================\n\n";
	
	

	return 0;
}