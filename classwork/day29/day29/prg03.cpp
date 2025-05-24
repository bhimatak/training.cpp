#include <iostream>
#include <cstdlib>

using namespace std;


typedef struct node
{
	int data;
	struct node* next;
}NODE;

void dispList(NODE*);

int main()
{
	NODE* nn = NULL, * head = NULL, * temp = NULL;
	int ch = 1;
	while (ch)
	{
		nn = (NODE*)malloc(sizeof(NODE)); //create mem/nodes
		cout << "Enter value of Node: ";
		cin >> nn->data;  // initialize values
		nn->next = NULL; // initialize values


		if (head == NULL)
		{
			//empty list
			head = nn; // first node
			temp = nn;
		}
		else
		{
			head->next = nn;
			head = head->next; //make a relationship

		}

		cout << "Do you want to add a new node (0/1): ";
		cin >> ch;
	}

	head = temp; //head is again pointed to BA of list

	dispList(head);

	return 0;
}


void dispList(NODE* head)
{
	cout << "List is \n" << endl;
	while (head != NULL)
	{
		cout << head->data << " -> ";
		head = head->next;
	}
	cout << "NULL" << endl;
}


/*
o/p

Menu
1. AddNodeBeg
2. AddNodeEnd
3. DisplayList
4. Exit

*/