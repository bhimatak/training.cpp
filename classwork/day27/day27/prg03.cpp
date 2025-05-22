#include <iostream>

using namespace std;

class T {

public:
	static int val;
public:
	T() {
		val++;
	}
	static int getVal() { return val; }
	void disp() {
		cout << "Value of val: " << val<<endl;
	}
};

int T::val;

int main()
{
	T* t = new T[10];
	t[0].disp();

}