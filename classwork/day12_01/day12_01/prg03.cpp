/*
Strings - collection of chars

"Hello" => 5 chars+ 1 null char = size of string
len of the string => exculding null char , collection all chars

Notes:
each char in array of chars is representing columns
if it is a single dimension then 1 row with multiple columns of chars


string should always end up with a null char
*/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char nameEmp[20]; //1 row with 20 cols
	cin >> nameEmp;
	cout << nameEmp << endl;
	cout << "Len String: " << strlen(nameEmp) << "\t Sizeof name: " << sizeof(nameEmp) << endl;


}