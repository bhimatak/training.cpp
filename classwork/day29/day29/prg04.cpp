#include <iostream>
#include <cstdlib>

using namespace std;


typedef struct node
{
	int data;
	struct node* next;
}NODE;

NODE* createNode();
NODE* addNodeBeg(NODE*, NODE*);
NODE* addNodeEnd(NODE*, NODE*);
int dispList(NODE*);
int dispMenu();
void freeNodes(NODE*);

int main()
{
	NODE* head = NULL;
	int ch = 1;
	while(ch)
	{
		switch (dispMenu())
		{
		case 1:
			
			head = addNodeBeg(head, createNode());
			break;
		case 2:
			head = addNodeEnd(head, createNode());
			break;
		case 3:
			dispList(head);
			break;
		case 4:
			ch = 0;
			break;
		default:
			cout<<"Something went wrong"<<endl;
		}
	}
	freeNodes(head); //*very improtant Memory Leaks
	cout << "Exiting program...." << endl;
	return 0;
}


int dispMenu()
{
	int ch;
	cout << "\tPress,\n\t1. Add Node Begining\n\t2. Add Node End\n";
	cout << "\t3. Display List\n\t4. Exit..\n\tChoice: ";
	cin >> ch;
	return ch;
}

int dispList(NODE *head)
{
	cout << "\tList is "<<endl;
	cout << "\t";
	while (head != NULL)
	{
		cout << head->data << " -> ";
		head = head->next;
	}
	cout << "NULL"<<endl;
	return EXIT_SUCCESS;
}

NODE* addNodeEnd(NODE* head, NODE* nn)
{
	NODE* temp = head;
	if (head == NULL) {
		head = nn;
		return head;
	}
	while (head->next != NULL)
		head = head->next;
	head->next = nn;
	head = temp;
	return head;
}

NODE* addNodeBeg(NODE* head, NODE* nn)
{
	if (head == NULL)
	{
		head = nn;
		return head;
	}
	nn->next = head;
	head = nn;
	return head;
}

NODE* createNode()
{
	NODE* nn = (NODE*)malloc(sizeof(NODE));
	cout << "Enter the value of node: ";
	cin >> nn->data;
	nn->next = NULL;
	return nn;
}

void freeNodes(NODE* head)
{
	NODE* temp = head;
	while (head->next != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}