#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

using namespace std;

class Employee {
	int id;
	string name;
public:
	Employee(int id, string name) : id(id), name(name) {}
	void disp() const { cout << "ID: " << id << "\tName: " << name << endl; }
	int getId() const { return id; }
	string getName() const { return name; }
	void setName(string name) { this->name = name; }
	void setId(int id) { this->id = id; }
	void setValues() { cin >> id >> name; }
};

int main()
{
	int id;
	string name;
	
	istream_iterator<Employee> inIt(std::cin);
	istream_iterator<Employee> endIt;
	
	vector<Employee> emp;

	while (inIt != endIt)
	{
		emp.push_back(*inIt);
		++inIt;
	}

	for (auto e : emp)
		e.disp();

	return 0;
}