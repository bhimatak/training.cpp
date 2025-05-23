#include <iostream>
#define MAX 5

using namespace std;

class StackOp {
private:
	int top;
	int bottom;
	int arr[MAX]; //instead of stack arr use dy. arr
public:
	StackOp();
	bool push(int);
	bool pop();
	void display() const;

};

StackOp::StackOp() {
	bottom = -1;
	top = -1;

}

bool StackOp::push(int v)
{
	if (top == MAX - 1)
	{
		cout << "Stack is full" << endl;
		return true;
	}
	top++;
	arr[top] = v;

	return true;
}

bool StackOp::pop()
{
	if (top == bottom)
	{
		cout << "Stack is empty" << endl;
		return true;
	}
	cout << arr[top] << " got popped out" << endl;
	top--;
	return true;
}

void StackOp::display() const
{
	if (top == bottom)
	{
		cout << "Stack is empty" << endl;
		return;
	}
	cout << "====Stack Elements are===" << endl;
	for (int i = top;i >= 0;i--)
		cout << arr[i] << endl;

	cout << endl;
}


int main()
{
	StackOp s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.push(60);
	s.display();
	s.pop();
	s.display();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	
	return 0;
}