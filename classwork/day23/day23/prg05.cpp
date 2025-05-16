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

int getEmpDetails(EMP *);


int main()
{
	EMP e1;
	
	/*e1.empID = 101;
	e1.empName = "Bhima";
	e1.empAddress = "Chennai";
	e1.empGender = 'M';
	e1.empPhno = 889900;*/

	getEmpDetails(&e1);

	cout << "Size of EMP : " << sizeof(EMP) << "\t size=" << sizeof(e1) << endl;
	disp(e1);

	EMP e[3];
	for (int i = 0;i < 3;i++) {
		getEmpDetails(&e[i]);

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


int getEmpDetails(EMP *e)
{
	cout << "Name: ";cin >> e->empName;
	cout << "ID: "; cin >> e->empID;
	cout << "Gender: "; cin >> e->empGender;
	cout << "Phone: "; cin >> e->empPhno;
	cout << "Address: "; cin >> e->empAddress;

	return EXIT_SUCCESS;
}