#include <iostream>

using namespace std;
/*
struct <tagName>
{
	members;
};

*/



typedef struct Employee
{
	int empID;
	int empPhno;
	string empName;
	string empAddress;
	char empGender;
}EMP;

void disp(EMP);


int main()
{
	EMP e1;
	e1.empID = 101;
	e1.empName = "Bhima";
	e1.empAddress = "Chennai";
	e1.empGender = 'M';
	e1.empPhno = 889900;

	cout << "Size of EMP : " << sizeof(EMP) << "\t size=" << sizeof(e1) << endl;
	disp(e1);

	EMP e[3];
	for (int i = 0;i < 3;i++) {
		cout << "Name: ";cin >> e[i].empName;
		cout << "ID: "; cin >> e[i].empID;
		cout << "Gender: "; cin >> e[i].empGender;
		cout << "Phone: "; cin >> e[i].empPhno;
		cout << "Address: "; cin >> e[i].empAddress;

	}
	


	for (int i = 0;i < 3;i++)
	{
		disp(e[i]);
	}

	cout << endl;

	return 0;
}

void disp(EMP e)
{
	cout << "===========================================" << endl;
	cout << "Name: " << e.empName << endl;
	cout << "ID: " << e.empID << endl;
	cout << "Gender: " << e.empGender << endl;
	cout << "Phone: " << e.empPhno << endl;
	cout << "Address: " << e.empAddress << endl;
	cout << "===========================================" << endl;
}