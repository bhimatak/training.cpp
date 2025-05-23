#include <iostream>
#define MAX 5

using namespace std;

int top = -1;
int bottom = -1;
int push(int);
int pop();
void display();
int arr[MAX];


int main()
{
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	push(60);
	display();


	pop();
	pop();
	display();
	pop();
	pop();
	pop();
	pop();
	//display();
}

int push(int v)
{
	if (top == MAX-1)
	{
		cout << "Stack is full" << endl;
		return 0;
	}
	top++;
	arr[top] = v;
	
	return 0;
}

int pop()
{
	if (top == bottom)
	{
		cout << "Stack is empty" << endl;
		return 0;
	}
	cout << arr[top] << " got popped out" << endl;
	top--;
	return 0;
}

void display()
{
	if (top == bottom)
	{
		cout << "Stack is empty" << endl;
		return;
	}
	cout << "====Stack Elements are===" << endl;
	for (int i = top;i >= 0;i--)
		cout << arr[i]<<endl;

	cout << endl;
}