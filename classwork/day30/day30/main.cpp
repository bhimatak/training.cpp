#include <iostream>

#include "linkedlist.h"

using namespace std;

int main()
{
	//LinkedList l1(10);
	LinkedList l2;
	l2.addEnd(10);
	l2.addEnd(11);
	l2.addEnd(12);

	l2.display();
	int target = 12;
	int val = 50;
	l2.addAfter(target, val);
	l2.display();

	return 0;
}
