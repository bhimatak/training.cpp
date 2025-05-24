#include <iostream>
#include <cstdlib>

using namespace std;


typedef struct node
{
	int data;
	struct node* next;
}NODE;

NODE* createNode();
int addNodeBeg(NODE*, NODE*);
int addNodeEnd(NODE*, NODE*);
int dispList(NODE*);

int dispMenu();

int main()
{
	int ch = 1;
	while(ch)
	{
		switch (dispMenu())
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			ch = 0;
			break;
		default:
			cout<<"Something went wrong"<<endl;
		}
	}
	
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