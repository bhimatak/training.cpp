#include <iostream>

using namespace std;

class M; //forward declarations or empty class

class T {

private:
	int val;
public:
	T(int v) { val = v;  }
	void disp() { cout << val << endl; }
	friend void func1(T &, M &);
};


class M {
private:
	int j;
public:
	M(int v) { j = v;  }
	void disp() { cout << j << endl; }
	friend void func1(T&, M&);
};

void func1(T& t , M &m)
{
	t.disp();
	m.disp();
	t.val = 1001;
	m.j = 2002;
}

int main() {

		
	T t1(10);
	
	t1.disp();

	M m1(20);
	m1.disp();

	func1(t1, m1);
	t1.disp();
	m1.disp();

	return 0;
}