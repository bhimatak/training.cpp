#include <iostream>

using namespace std;

int display();
int add(int, int);
int sub(int, int);
int runable(int);

int main(int argc, char *argv[])
{
	
	if (argc > 1)
		runable(atoi(argv[1]));
	else
			runable(-1);
}

int runable(int ch)
{
	if (ch == -1)
		ch = display();
	switch (ch)
		{
		case 1:
			cout << "Addition: " << add(10, 20) << endl;
			break;
		case 2:
			cout << "Subtraction: " << sub(30, 10) << endl;
			break;
		case 3:
			cout << "Exiting application.... " << endl;
			exit(0);
			break;

		default:
			cout << "Wrong Choice" << endl;
			break;

		}

}

int display()
{
	cout << "\nPress, " << endl;
	cout << "1. add" << endl;
	cout << "2. Sub" << endl;
	cout << "3. exit" << endl;
	cout << "Choice: ";
	int ch;
	cin >> ch;
	return ch;
}

int add(int v1, int v2)
{
	return v1 + v2;
}

int sub(int v1, int v2)
{
	return v1 - v2;
}