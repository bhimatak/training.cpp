#include <iostream>

#define MAX 5

using namespace std;

int enqueue(int);
int dequeue();
void display();

int arr[MAX];

int rear = 0;
int front = 0;

int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	enqueue(60);
	display();
	dequeue();
	display();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	display();


	return 0;
}


int enqueue(int v)
{
	if (rear == MAX)
	{
		cout << "Queue is full" << endl;
		return EXIT_SUCCESS;
	}
	arr[rear] = v;
	rear++;

	return EXIT_SUCCESS;
}


int dequeue()
{
	if ((rear == front) || (front == MAX))
	{
		cout << "Queue is empty" << endl;
		rear = 0;
		front = 0;
		return EXIT_SUCCESS;
	}
	cout << arr[front] << " got dequeued" << endl;
	front++;

	return EXIT_SUCCESS;
}
void display()
{
	if ((rear == front) || (front == MAX))
	{
		cout << "Queue is empty" << endl;
		rear = 0;
		front = 0;
		return ;
	}
	cout << "Queue elements are\n";
	for (int i = front; i < rear;i++)
		cout << arr[i] << " ";
	cout << endl;
}