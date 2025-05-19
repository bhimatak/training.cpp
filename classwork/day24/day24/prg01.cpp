#include <iostream>

using namespace std;

/*
typedef struct shape
{
	int lenght;
	int width;
}SHAPE;


int main()
{
	SHAPE s1, s2;
	s1.lenght = 10;
	s1.width = 20;

	s2.lenght = 30;
	s2.width = 40;

	SHAPE s3;

	s3.lenght = s1.lenght+ s2.lenght;
	s3.width = s1.width + s2.width;

	cout << s3.lenght << "\t" << s3.width << endl;

	SHAPE s4 = s3;
	cout << s4.lenght << "\t" << s4.width << endl;

	s4.lenght = 100;
	s4.width = 70;
	cout << s3.lenght << "\t" << s3.width << endl;
	cout << s4.lenght << "\t" << s4.width << endl;

	s4.lenght = s3.lenght;
	s4.lenght = s3.width;

	SHAPE s5;

	s5 = s4;
	cout << s5.lenght << "\t" << s5.width << endl;



	

	return 0;
}
*/


typedef struct Date {
	int day, month, year;
}DATE;


typedef struct address {
	int hNo;
	int pincode;
	string addrLine1; //mand
	string addrLine2; //optional
	string city;
	string State;
}ADDRESS;

struct Employee
{
	int id;
	string name;
	struct DATE {
		int day, month, year;
	}D;
	ADDRESS addr;
};

int main()
{
	struct Employee e;

	e.id = 101;
	e.name = "bhima";
	/*e.joingDate.day = 10;
	e.joingDate.month = 4;
	e.joingDate.year = 2025;

	cout << e.id << "\t" << e.name << "\t";
	cout<< e.joingDate.day << "\t" << e.joingDate.month << endl;
	*/

	e.D.day = 10;
	return 0;

}