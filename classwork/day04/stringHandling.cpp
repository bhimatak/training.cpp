#include <iostream>
#include <stdio.h>
#include "stringHand.h"

using namespace std;

void stringHandling()
{
	char ch = 'A';
	char fName[20]; //array of chars (size if fixed)
	string sName;	// String (dynamically grows the size of the string)

	cout << "ch Value" << ch << endl;
	cout << "Enter First Name: ";
	cin >> fName;
	cout << "Enter Second Name: ";
	cin >> sName;
	cout << "\nMy Name is \n" << fName << "\a" << sName << endl;

	/*char Name[5];

	cout << sizeof(Name)<<endl;
	//cout << "String lenght of Name: " << strlen(Name) << endl;
	scanf("%s", Name);
	for (int i = 0;i < 20;i++)
	{
		printf("\n%c = %d", Name[i], Name[i]);
	}
	*/
	
}


void enumHandling()
{
	enum Day{Monday=1000, Tuesday, Wednesday=2000, Thrusday, Friday, Saturday, Sunday};

	Day today = Friday;
	cout << "Value of today: " << today << endl;
}