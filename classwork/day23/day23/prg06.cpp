#include <iostream>
#define NOEMPS 3

using namespace std;

typedef struct Employee
{
	int emp_id;
	string emp_name;
}EMP;


typedef struct Period
{
	int p_emp_id;
	int p_nDays;
}PERIOD;

typedef struct Salary
{
	int s_emp_id;
	int s_basic;
	int s_allo;
	int s_vp;
}SAL;


int getDetails(EMP*, PERIOD*, SAL*);
int printDetails(EMP*, PERIOD*, SAL*, int, int);
float calcTax(int);
int calcGross(SAL*, PERIOD*);


//driver code to test

int main()
{
	EMP e[NOEMPS];
	SAL s[NOEMPS];
	PERIOD p[NOEMPS];

	for (int i = 0;i < 2;i++) {
		getDetails(&e[i], &p[i], &s[i]);
		int gs = calcGross(&s[i], &p[i]);
		int tax = calcTax(gs);

		printDetails(&e[i], &p[i], &s[i], gs, tax);
	}
	return 0;
}




int getDetails(EMP* e, PERIOD* p, SAL* s)
{
	static int empCount = 1;
	cout << "\nEnter following details of an employee" << endl;
	
	e->emp_id = empCount++;
	p->p_emp_id = e->emp_id;
	s->s_emp_id = e->emp_id;

	cout << "Name: ";cin >> e->emp_name;
	cout << "Basic Pay: ";cin >> s->s_basic;
	cout << "Allowance: ";cin >> s->s_allo;
	cout << "Variable Pay: ";cin >> s->s_vp;
	cout << "No of Days worked for month: ";cin >> p->p_nDays;

	return EXIT_SUCCESS;
}

int printDetails(EMP* e, PERIOD* p, SAL* s, int gs, int tax)
{
	cout << "=====================================================" << endl;
	cout << "\tID: " << e->emp_id<<endl;
	cout << "\tName: "<<e->emp_name<<endl;
	cout << "\tNo of Days worked for month: "<< p->p_nDays<<endl;
	cout << "\tBasic Pay: " << s->s_basic<<endl;
	cout << "\tGross Salary: " << gs << endl;
	cout << "\tTDS: " << tax << endl;
	cout << "\tNet Amount: " << (gs - tax) << endl;
	cout << "=====================================================" << endl;
	return EXIT_SUCCESS;
}

int calcGross(SAL*s, PERIOD *p)
{
	float temp=0.0;
	float b =  s->s_basic/ 30.0;
	temp = (b * p->p_nDays + s->s_allo + s->s_vp);
	return temp;
}

float calcTax(int gs)
{
	return (gs * 0.1);
}

