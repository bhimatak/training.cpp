#include <iostream>

using namespace std;

class Student
{
private:
	int rollno;
	char name[20];
public:
	void setName(char* s)
	{
		strcpy(name, s);
	}
	char* getName() {
		return name;
	}

	void setRollno(int r) {
		rollno = r;
	}
	int getRollno() {
		return rollno;
	}
	void display()
	{
		cout << "Name: " << name << endl;
		cout << "Roll No: " << rollno << endl;
	}

};

int main()
{
	char n[] = "abc";
	char str2[1024] = "xyz";
	int r = 1011;
	Student s1;
	s1.setRollno(r);
	s1.setName(n);
	s1.display();
	cout << s1.getName() << endl;
	cout << s1.getRollno() << endl;
	strcat(str2, s1.getName());
	cout << str2 << endl;
	return 0;
}

