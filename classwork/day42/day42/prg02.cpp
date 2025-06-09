#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

class Employee {
	int id;
	string name;
public:
	Employee(int id, string name) : id(id), name(name) {}
	void setName(string name) { this->name = name; }
	void dispEmp() const { cout << "ID: " << id << "\tName: " << name<<endl; }
};

int main()
{
	vector<int> v = { 1,2,3 };
	vector<int>::iterator it = v.begin();

	for (;it != v.end(); it++)
		cout << *it << endl;

	cout << endl;

	vector<Employee> vEmp;
	vEmp.emplace_back(101, "abc1");
	vEmp.emplace_back(102, "abc2");
	vEmp.emplace_back(103, "abc3");
	vEmp.emplace_back(104, "abc4");

	vector<Employee>::iterator itEmp;
	int i = 0;
	for (itEmp = vEmp.begin();itEmp != vEmp.end();i++,itEmp++)
	{
		cout << "Employee (" << (i + 1) << ") details are\n";
		//itEmp->dispEmp();
		(*itEmp).dispEmp();
		if ((i + 1) == 2)
			(*itEmp).setName("xyz");
		cout << "===================\n";
	}

	i = 0;
	for (itEmp = vEmp.begin();itEmp != vEmp.end();i++, itEmp++)
	{
		cout << "Employee (" << (i + 1) << ") details are\n";
		//itEmp->dispEmp();
		(*itEmp).dispEmp();
		
		cout << "===================\n";
	}
	/*
	i = 0;
	vector<Employee>::const_iterator itEmp1;
	for (itEmp1 = vEmp.cbegin();itEmp1 != vEmp.cend();i++, itEmp1++)
	{
		cout << "Employee (" << (i + 1) << ") details are\n";
		//itEmp->dispEmp();
		(*itEmp1).dispEmp();
		if ((i + 1) == 2)
			(*itEmp1).setName("xyz1");
		cout << "===================\n";
	}


	i = 0;
	for (itEmp1 = vEmp.cbegin();itEmp1 != vEmp.cend();i++, itEmp1++)
	{
		cout << "Employee (" << (i + 1) << ") details are\n";
		//itEmp->dispEmp();
		(*itEmp1).dispEmp();
		
		cout << "===================\n";
	}

	*/
	
	return 0;
}