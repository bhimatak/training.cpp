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


int main()
{
	EMP e1;
	e1.empID = 101;
	e1.empName = "Bhima";
	e1.empAddress = "Chennai";
	e1.empGender = 'M';
	e1.empPhno = 889900;

	cout << "Size of EMP : " << sizeof(EMP) << "\t size=" << sizeof(e1) << endl;

	cout << "Name: " << e1.empName << endl;
	cout << "ID: " << e1.empID << endl;
	cout << "Gender: " << e1.empGender << endl;
	cout << "Phone: " << e1.empPhno << endl;
	cout << "Address: " << e1.empAddress << endl;

	EMP e[3];
	for (int i = 0;i < 3;i++) {
		cout << "Name: ";cin >> e[i].empName;
		cout << "ID: "; cin >> e[i].empID;
		cout << "Gender: "; cin >> e[i].empGender;
		cout << "Phone: "; cin >> e[i].empPhno;
		cout << "Address: "; cin >> e[i].empAddress;

	}
	for (int i = 0;i < 3;i++){
		cout << "Name: " << e[i].empName << endl;
		cout << "ID: " << e[i].empID << endl;
		cout << "Gender: " << e[i].empGender << endl;
		cout << "Phone: " << e[i].empPhno << endl;
		cout << "Address: " << e[i].empAddress << endl;
		cout << "===========================================" << endl;
	}
	cout << endl;

	return 0;
}