#include <iostream>

using namespace std;

class Test
{
	int x;
	int y;
public:
	Test(int x, int y) { this->x = x; this->y = y; }

	Test& setX(int val) { x = val; return *this; }
	Test& setY(int val) { y = val; return *this; }
	void display() {
		cout << "X= " << x << "\tY=" << y << endl;
	}
};


int main()
{
	Test objT(5,6);

	objT.display();
	
	//Test &obj2 = objT.setX(101);  //obj2
	//obj2.setY(102);
	//objT.setY(102);
	//objT.display();
	//obj2.display();
	objT.setX(101).setY(102);
	objT.display();
	cout << "Address of ObjT: " << &objT << endl;
	//cout << "Address of obj2: " << &obj2 << endl;


	return 0;

}