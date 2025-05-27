#include <iostream>
using namespace std;

class Person {
private:
	string ssn;
protected:
	string name;
	char gender;
	int age;
public:
	Person(string s, string n, char g, int a) : ssn(s), name(n),gender(g),age(a) {
		cout << "Person Constr got called" << endl;
	}

	void dispPerson() {
		
		cout << "Person Details are" << endl;
		cout << "======================" << endl;
		cout << "Name: " << name << endl;
		cout << "ssn: " << ssn << endl;
		cout << "Gender: " << gender << endl;
		cout << "Age: " << age << endl;
		cout << "======================" << endl;
	}

	~Person() {
		cout << "Person Destr got called" << endl;
	}
protected:
	void setSSN(string s) { ssn = s; }
	// generate getters and setters
public:
	void setPerson(string s, string n, char g, int a) {
		this->ssn = s; this->name = n; this->gender = g; this->age = a;
	}
};

class Employee : public Person
{
private:
	int e_id;
	float e_sal;
	string e_desg;
public:
	Employee(string ssn, string n, char g, int age, int id, float sal, string desg) : Person(ssn, n, g, age), e_id(id), e_sal(sal), e_desg(desg) {
		cout << "Employee Constr got called" << endl;
	}
	~Employee()
	{
		cout << "Employee Destr got called" << endl;
	}
	void dispEmp() const
	{
		cout << "Employee Details are" << endl;
		cout << "======================" << endl;
		cout << "ID: " << e_id << endl;
		cout << "Salary: " << e_sal << endl;
		cout << "Designation: " << e_desg << endl;
		cout << "======================" << endl;

	}
	void updateName(string n) { name = n; }
	void updateSSN(string s) { setSSN(s); }
};

int main()
{
	Employee eObj("ADH","Bhima",'m',45,101,10000,"SSE");
	eObj.dispPerson();
	eObj.dispEmp();
	eObj.updateName("shankar");
	eObj.dispPerson();
	eObj.dispEmp();
	eObj.updateSSN("XYZ");
	eObj.dispPerson();
	//eObj.setSSN("JKL"); //calling protected method will create cmpl error
	eObj.dispPerson();
	eObj.setPerson("RRR", "Amit", 'M', 25);
	eObj.dispPerson();
	eObj.dispEmp();
	return 0;

}