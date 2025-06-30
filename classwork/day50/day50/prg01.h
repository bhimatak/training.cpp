#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person
{
protected:
	string name;
	string address;
	int phno;
public:
	Person(string name, string address, int phno) :
		name(name), address(address), phno(phno) {}
	int getPhno();
	string getName();
	string getAddress();
	void setAddress(string);
	void setName(string);
	void setPhno(int);
};

class Employee: public Person
{
protected:
	int e_id;
	float e_sal;
	int p_id;
public:
	Employee(string name, string address, int phno,int eid, float sal, int pid) :
		Person(name, address, phno),e_id(eid), e_sal(sal), p_id(pid) {}
	void set_e_id(int);
	void set_e_sal(float);
	void set_p_id(int);
};

class Manager : public Employee
{
protected:
	string role;
	float DA;
public:
	Manager(string name, string address, int phno, int eid, 
		float sal, int pid,string role, float DA) :
		Employee(name,address,phno, eid,sal,pid),
		role(role), DA(DA) {}

};

class Engineer : public Employee
{
protected:
	string role;
	float vpay;
public:
	Engineer(string name, string address, int phno, int eid,
		float sal, int pid, string role, float vpay) :
		Employee(name, address, phno, eid, sal, pid),
		role(role), vpay(vpay) {}
	
};


class Admin : public Employee
{
protected:
	string role;
	bool privilages;
public:
	Admin(string name, string address, int phno, int eid,
		float sal, int pid, string role, bool prv) :
		Employee(name, address, phno, eid, sal, pid),
		role(role), privilages(prv) {}

};

class Users : public Employee
{
	string uid;
	string passwd;
public:
	Users() = default;
	void setDetails(string id, string pwd) { this->uid = id, this->passwd = pwd; }
	string getUid() { return uid; }
	string getPasswd() { return passwd; }
	
};