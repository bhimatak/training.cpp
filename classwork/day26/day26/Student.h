#ifndef __STUDENT__
#define __STUDENT__

class Student
{
private:
	int rollno;
	char name[20];
	float marks[4];
public:
	void setName(const char*);
	char* getName();
	void setRollno(int);
	int getRollno();
	void setMarks(float[]);
	void display();
	float grading();

private:
	float calcAvg();

};


#endif

