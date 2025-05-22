#include <iostream>

using namespace std;

class Employee {

protected:
	int e_id;
	string e_name;
public:
	void init(int id, string n)
	{
		e_id = id;
		e_name = n;
	}
	void printDetails() {
		cout << e_id << "\t" << e_name << endl;
	}

};

int main()
{
	Employee e;
	/*e.e_id = 101;
	e.e_name = "bhima";
	Employee* ptr = &e;

	cout << e.e_id << "\t" << e.e_name << endl;
	//cout << Employee::e_id << "\t" << Employee::e_name << endl;
	ptr->e_id = 201;
	cout << e.e_id << "\t" << e.e_name << endl;*/

	e.init(101, "abc1");
	e.printDetails();

	return 0;
}