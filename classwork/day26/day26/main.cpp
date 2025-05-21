#include <iostream>
#include "Student.h"

using namespace std;

void dispTitleBar() {
	cout << "Name\tRollNo\tM1\tM2\tM3\tM4\tAvg\tGrade\n"<<endl;
}
int main()
{
	/*Student S;
	float marks[] = { 55,56,57,58 };
	S.setName("bhima");
	S.setRollno(101);
	S.setMarks(marks);
	dispTitleBar();
	S.display();

	float grade = S.grading();
	cout << "\t";
	if((grade>=85)&&(grade<=100))
		cout<<" A"<<endl;
	else if((grade >=75)&&(grade<85))
		cout << " B" << endl;
	else if ((grade >= 45) && (grade < 75))
		cout << " C" << endl;
	else if ((grade >= 0) && (grade < 45))
		cout << " Fail" << endl;
	else
		cout<<"Out of range"<<endl;
	*/

	string n;
	int rNo;
	float marks[4];
	Student* S = new Student[3];
	
	for (int i = 0;i < 3;i++)
	{
		cout << "Enter details of " << (i + 1) << " student" << endl;
		cout << "Name: ";cin >> n;
		cout << "Roll No: ";cin >> rNo;
		cout << "Enter 4 subs marks" << endl;
		for (int j = 0;j < 4;j++) {
			cout << "M[" << (j + 1) << "]: ";cin >> marks[j];
		}
		S[i].setName(n.c_str());
		S[i].setRollno(rNo);
		S[i].setMarks(marks);
	}
	dispTitleBar();
	
	for (int i = 0;i < 3;i++)
	{
		S[i].display();
		float grade = S[i].grading();
		cout << "\t";
		if ((grade >= 85) && (grade <= 100))
			cout << " A" << endl;
		else if ((grade >= 75) && (grade < 85))
			cout << " B" << endl;
		else if ((grade >= 45) && (grade < 75))
			cout << " C" << endl;
		else if ((grade >= 0) && (grade < 45))
			cout << " Fail" << endl;
		else
			cout << "Out of range" << endl;
	}
	return 0;
}