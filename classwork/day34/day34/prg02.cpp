#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;
struct Employee
{
	int id;
	char name[20];
};

class Student
{
private:
	int id;
	char name[20];
public:
	Student() { id = 0; strcpy(name, ""); }
	Student(int id, const char* name) { this->id = id; strcpy(this->name, name); }
	void setValues(int id, char* name)
	{
		this->id = id;
		strcpy(this->name, name);
	}
	void display() {
		cout << "ID: " << id << endl;
		cout << "Name: " << name << endl;
	}

};

int main()
{
	fstream fIO;
	struct Employee e = { 101,"Amit" };
	Student s(111, "Abhijit");

	fIO.open("Test1.txt", ios::in|ios::out|ios::binary);

	if (!fIO.is_open())
	{
		cerr << "Error: opening the file" << endl;
	}

	//fIO.write((char*)&e, sizeof(e));
	fIO.write((char*)&s, sizeof(s));
	fIO.close();

	fIO.open("Test1.txt", ios::in | ios::out | ios::binary);

	if (!fIO.is_open())
	{
		cerr << "Error: opening the file" << endl;
	}
	//struct Employee e1;
	Student s1;
	fIO.read((char*)&s1, sizeof(s1));
	//cout << e1.id << "\t" << e1.name << endl;
	s1.display();
	fIO.close();
	
	return 0;
}