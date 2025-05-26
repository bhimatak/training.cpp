#pragma once
#include <iostream>
using namespace std;

class Node
{
private:
	int data;
	Node* next;
public:
	Node(int d = 0) {
		data = d;
		next = nullptr;
		cout << "Constr of Node got called: data=" << data << endl;
	}
	int getData();
	int setData(int);
	Node* getNext();
	void setNext(Node*);

};
