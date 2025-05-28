/*

			Derived Class	Derived Class	Derived Class
Base class	Public Mode		Private Mode	Protected Mode =>visibility mode
Private		Not Inherited	Not Inherited	Not Inherited
Protected	Protected		Private			Protected
Public		Public			Private			Protected

*/

#include <iostream>

using namespace std;

class BC
{
private:
	int a = 1;
	void print_a() { cout << "\na=" << a << endl; }
protected:
	int b = 2;
	void print_b() { cout << "\nb=" << b << endl; }
public:
	int c = 3;
	void print_c() { cout << "\nc=" << c << endl; }
	void print_ab() { cout << "\na=" << a << " b=" << b << endl; }
	void printab_Func() { print_a(); print_b(); }

};

class DC : public BC
{
protected:
	int b = 2;
	void print_b() { cout << "\nb=" << b << endl; }
public:
	int c = 3;
	void print_c() { cout << "\nc=" << c << endl; }
	void print_ab() { cout << "\na=" << a << " b=" << b << endl; }
	void printab_Func() { print_a(); print_b(); }
public:
	void disp() {
		print_b();
	}
	//void print_aD() { print_a(); } //=> error as privte memb are not inherited
	void print_bD() { print_b(); }

};


class DC1 : private BC
{
private:
	int b = 2;
	void print_b() { cout << "\nb=" << b << endl; }
private:
	int c = 3;
	void print_c() { cout << "\nc=" << c << endl; }
	void print_ab() { cout << "\na=" << a << " b=" << b << endl; }
	void printab_Func() { print_a(); print_b(); }

public:
	//void print_aD1() { print_a(); } //=> error as privte memb are not inherited
	void print_bD1() { print_b(); }
	void print_cD1() { print_c(); }


};


class DC2 : protected BC
{
protected:
	int b = 2;
	void print_b() { cout << "\nb=" << b << endl; }
protected:
	int c = 3;
	void print_c() { cout << "\nc=" << c << endl; }
	void print_ab() { cout << "\na=" << a << " b=" << b << endl; }
	void printab_Func() { print_a(); print_b(); }
public:
	//void print_aD2() { print_a(); } //=>is private within this context
	void print_funcBC_pb() { printab_Func(); print_c(); }
	void print_bD2() { print_b(); }
	//void print_aD2() { print_a(); } //=> error as privte memb are not inherited
};


int main()
{
	// BC B;
	// B.printab_Func();
	// //B.print_ab();
	// cout<<"\nB.c="<<B.c<<endl;

	// DC D;

	// //cout<<"\nD.c="<<D.c<<endl;
	// D.print_ab();
	// D.printab_Func();
	// D.print_c();

	// D.print_bD();
	// //D.print_aD(); => error as private member is not inherited

	// DC1 D1;

	// D1.print_bD1();
	// D1.print_cD1();

	DC2 D2;

	//D2.print_ab();
	D2.print_funcBC_pb();
	D2.print_bD2();
	//D2.print_aD2(); //=> error as privte memb are not inherited





	return 0;
}