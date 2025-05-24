#include <iostream>

using namespace std;

class Node
{
private:
	int data;
	Node* next;
};

class LList
{
private:
	Node* n;
public:
	LList() {
		n.data = 0;
		n->next = nullptr;
	}
};