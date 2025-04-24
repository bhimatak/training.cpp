// function with args and no return type
// function with no args and return type
//function with ret type and input args

#include <iostream>

using namespace std;

void display(void);
int displayRet(void);


void sumIntegers(int, int);
int subIntegers(int, int);

int main()
{
	/*int ch;
	display();
	cin >> ch;
	*/
	//switch (ch)
	int r;
	switch(displayRet())
	{
	default:
		cout << "Wrong Choice" << endl;
		break;
	case 1:
		cout << "Addition" << endl;
		sumIntegers(10, 20);
		break;
	case 2:
		cout << "Subtraction" << endl;
		r = subIntegers(20, 35);
		cout << 20 << " - " << 35 << " = " << r << endl;
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

int displayRet()
{
	int ch;
	cout << "In the function displayRet()" << endl;
	cout << "Press, " << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction " << endl;
	cout << "3. Exit" << endl;
	cout << "Choice: ";
	cin >> ch;
	return ch;
}

void sumIntegers(int v1, int v2)
{
	cout << v1 << " + " << v2 << " = " << (v1 + v2) << endl;
}

int subIntegers(int v1, int v2)
{
	int ret;
	ret = v1 - v2;
	return ret;
}