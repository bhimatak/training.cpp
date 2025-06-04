#pragma once
#include <iostream>


using namespace std;
class Student
{
	int id;
	string name;
public:
	Student(int id, string name): id(id), name(name){}
	int getId() { return id; }
	void setId(int id) { this->id = id; }
	string getName() { return name; }
	void setName(string name) { this->name = name; }
	void display() { cout << "ID: " << name << " | Name: " << name << endl; }
	bool operator==(const Student& other) const {
		return id == other.id;
	}

};
