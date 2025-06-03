#include <iostream>
#include <vector>

using namespace std;

class Student
{
	int id;
	string name;
public:
	Student(int id, string name): id(id), name(name){}
	void display() {
		cout << "ID: " << id << endl;
		cout << "Name: " << name << endl;
	}

};
/*
void updateID(Student* ptr)
{
	ptr->setID( 101);
	ptr++
}
*/


int main()
{
	try {
		Student s[3] = { {101,"abc1"},{102,"abc2"},{103,"abc3"} };
		Student s1 = { 104,"abc4" };
		Student s2 = { 105,"abc5" };
		Student s3 = { 106,"abc6" };
		Student s4 = { 107,"abc7" };
		Student s5 = { 108,"abc8" };
		Student s6 = { 109,"abc9" };


		for (auto e : s)
			e.display();


		vector<Student> emp;

		emp.push_back(s1);
		emp.push_back(s2);
		emp.push_back(s3);

		for (auto e : emp)
			e.display();


		cout << emp.capacity() << endl;
		cout << emp.size() << endl;
		emp.front().display();
		emp.back().display();
		//emp[10].display(); //error not caught by try catch: seg Failure
		//emp.at(10).display();// error is caught by try catch
		emp.pop_back();
		emp.back().display();

		emp.insert(emp.end(), s4);

		emp.front().display();
		emp.back().display();

		for (auto e : emp)
			e.display();

		emp.emplace(emp.begin(), s5);
		emp.front().display();
		emp.back().display();

		for (auto e : emp)
			e.display();

		cout << emp.capacity() << endl;
		cout << emp.size() << endl;
		emp.emplace_back(s3);
		cout << emp.capacity() << endl;
		cout << emp.size() << endl;
		emp.shrink_to_fit();
		cout << emp.capacity() << endl;
		cout << emp.size() << endl;
		emp.emplace_back(s6);
		cout << emp.capacity() << endl;
		cout << emp.size() << endl;
		Student* ptr = emp.data();
	
		ptr->display();
		ptr++;
		ptr->display();



	}
	catch (exception& e)
	{
		cout << "Error: " << e.what() << endl;
	}
	return 0;
}