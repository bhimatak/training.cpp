#include "Node.h"
//Definations of Node

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
