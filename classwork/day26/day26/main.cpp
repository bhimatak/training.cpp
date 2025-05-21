#include <iostream>
#include "Student.h"

using namespace std;

int main()
{
	Student S;
	float marks[] = { 55,56,57,58 };
	S.setName("bhima");
	S.setRollno(101);
	S.setMarks(marks);

	S.display();


	return 0;
}