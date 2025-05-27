#include <iostream>

using namespace std;

class Test
{
public:
	int a;
public:
	void display() { cout << "\ta= " << a << endl; }
};

int main()
{
	Test t, t2;
	int a = 20;
	t.a=10;
	t.display();
	
	Test* ptr = &t;
	t.a = 20;
	ptr->a = 30;
	ptr->display();

	int Test::*ptrM = &Test::a;

	int *ptrdM = &a;
	
	t.display();
	ptr->display();
	ptr->a = 103;
	t.display();
	ptr->display();

	ptr->*ptrM = 104;
	t.display();
	ptr->display();

	t2.a = 202;
	ptr = &t2;
	t2.display();
	ptr->display();
	ptr->*ptrM = 303;
	t2.display();
	ptr->display();


	//cout << *ptr << endl;
	return 0;
}