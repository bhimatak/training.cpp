#include <iostream>

using namespace std;


class Employee {

private:
	int e_id;
	string e_name;
public:
	Employee();
	Employee(int, string);
	
public:
	void disp();
	//destructor used to clean up mem
	~Employee() {
		cout << "Destructor getting called" << endl;
	}
};

Employee::Employee() {
	cout << "Default Construct got called" << endl;
	e_id = 0;
	e_name = "";
}

Employee::Employee(int id, string name)
{
	cout << "Parameterized Construct got called" << endl;
	e_id = id;
	e_name = name;
}

void Employee::disp() {
	cout << "disp function got called" << endl;
	cout << e_id << "\t" << e_name << endl;
}

int main()
{
	//default const is getting called
	Employee e;
	cout << "e" << endl;
	e.disp();

	//para const is getting called
	Employee e1(101, "abc1");
	cout << "e1" << endl;
	e1.disp();

	//default copy const is getting called
	Employee e2(e1);
	cout << "e2" << endl;
	e2.disp();

	//default copy const is getting called
	Employee e3 = e1;
	cout << "e3" << endl;
	e3.disp();

	return 0;
}