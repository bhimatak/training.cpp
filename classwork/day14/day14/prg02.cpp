#include <iostream>

using namespace std;

/*
int main()
{
	char str1[] = "Hello World";
	int count = 0;
	while (str1[count] != '\0')
	{
		count++;
	}

	cout << "String lenght: " << count << endl;
	return 0;
}

*/

int main()
{
	/*
	char s1[20];
	cout << "Enter the input string";
	cin.getline(s1, 20);
	char* ptr1 = strstr(s1, "are");
	char* ptr2 = strstr(s1, "i");
	int p1 = (unsigned long int)ptr1 - (unsigned long int)s1;
	int p2 = (unsigned long int)ptr2 - (unsigned long int)s1;
	if (p1 < 0)
		p1 = -1;
	if (p2 < 0)
		p2 = -1;
	cout << "Sum = " << (p1 + p2) << endl;;

	*/
	cout << INT_MAX << endl;
	cout << UINT_MAX << endl;

	unsigned int num = 4294967297; //4294967295 //2147483647
	cout << num << endl;

	return 0;
}