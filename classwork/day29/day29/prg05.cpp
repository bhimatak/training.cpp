#include <iostream>

using namespace std;

class Node
{
private:
	int data;
	Node* next;
public:
	Node(int v = 0) { data = v; next = nullptr; }
};

class LList
{
private:
	Node* head;
public:
	LList() {
		head = nullptr;
	}
	int begin();
	int append();
	void display();
};