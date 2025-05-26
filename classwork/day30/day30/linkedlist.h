#pragma once
#include <iostream>
using namespace std;

class Node
{
private:
	int data;
	Node* next;
public:
	Node(int d=0) {
		data = d;
		next = nullptr;
		cout << "Constr of Node got called: data=" << data << endl;
	}
	int getData();
	int setData(int);
	Node* getNext();
	void setNext(Node*);
	
};

int Node::setData(int v) {
	data = v;
	return 0;
}

int Node::getData()
{
	return data;
}

Node* Node::getNext()
{
	return next;
}

void Node::setNext(Node* nn)
{
	next = nn;
}


class LinkedList {
private:
	Node* head;
public:
	LinkedList() {
		
		head = nullptr;
	}
	//LinkedList(int) {}

	int addBeg(int);
	int addEnd(int);
	void display();
};


int LinkedList::addEnd(int v) {
	
	//create new node
	Node* nn = new Node;
	nn->setData(v);
	
	if (head == nullptr)
	{
		//empty list and first node
		head = nn;
	}
	else
	{
		Node* temp = head;
		while(temp->getNext()!=nullptr)
			temp = temp->getNext();
		temp->setNext(nn);
		//cout << "new node added with value: " << temp->getData() <<nn->getData() <<endl;
	}

	return 0;
}

void LinkedList::display()
{
	Node* temp = head;
	while (temp!= nullptr) {
		cout << temp->getData() << endl;
		temp = temp->getNext();
	}
}