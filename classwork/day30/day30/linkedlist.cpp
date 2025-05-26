#include <iostream>
#include "Node.h"
#include "linkedlist.h"


using namespace std;
//Definations of Linked List

void LinkedList::addAfter(int target, int val)
{
	bool found = false;
	Node* temp = head;

	while (temp != nullptr)
	{
		if (temp->getData() == target)
		{
			found = true;
			break;
		}
		temp = temp->getNext();
	}

	if (found == true)
	{
		Node* nn = new Node;
		nn->setData(val);
		nn->setNext(temp->getNext());
		temp->setNext(nn);
	}
	else {
		cout << "Target " << target << " not found in the list" << endl;
		// if req. is to add new elem man. it could be added
		// at the end of the list if target not found
	}
}


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
		while (temp->getNext() != nullptr)
			temp = temp->getNext();
		temp->setNext(nn);
		//cout << "new node added with value: " << temp->getData() <<nn->getData() <<endl;
	}

	return 0;
}

void LinkedList::display()
{
	Node* temp = head;
	while (temp != nullptr) {
		cout << temp->getData() << "->";
		temp = temp->getNext();
	}
	cout << "NULL" << endl;
}