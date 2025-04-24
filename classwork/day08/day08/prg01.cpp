// function with no args and no return type

#include <iostream>

using namespace std;

void display(void);


int main()
{
	int ch;
	display();
	cin >> ch;
	switch (ch)
	{
	default:
		cout << "Wrong Choice" << endl;
		break;
	case 1:
		cout << "Addition" << endl;
		break;
	case 2:
		cout << "Subtraction" << endl;
		break;
	case 3:
		cout << "Exiting the app...." << endl;
		break;
	}
	return 0;
}


void display()
{
	cout << "Press, " << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction " << endl;
	cout << "3. Exit" << endl;
	cout << "Choice: ";

}