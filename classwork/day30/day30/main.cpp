#include <iostream>

#include "linkedlist.h"

using namespace std;

int main()
{
	//LinkedList l1(10);
	LinkedList l2;
	if (l2.delNode(10) != true)
		cout << "Target not found" << endl;
	l2.addEnd(10);
	l2.addEnd(11);
	l2.addEnd(12);

	l2.display();
	int target = 11;
	int val = 50;
	l2.addAfter(target, val);
	l2.display();

	if (l2.delNode(10) != true)
		cout << "Target not found" << endl;
	else
		cout << "Target " << 10 << " got delelted" << endl;
	l2.display();

	return 0;
}
