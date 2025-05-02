#include <iostream>
#include <cstring>

using namespace std;


/*
int main()
{
	char line[] = "he works at tcs";
	//unsigned long int r1 = 0, r2 = 0, r3 = 0;
	char ss1[] = "are";
	char ss2[] = "i";
	int p1 = 0, p2 = 0;
	char* res1 = strstr(line, ss1);
	char* res2 = strstr(line, ss2);

	if (res1 != nullptr)
	{
		p1 = (unsigned long int)res1 - (unsigned long int)line;
	}
	else
		p1 = -1;

	if (res2 != nullptr)
	{
		p2 = (unsigned long int)res2 - (unsigned long int)line;
	}
	else
		p2 = -1;


	cout << p1 + p2 << endl;

	return 0;
}

*/

int main()
{
	char str1[] = "1011|Bhima shankar,8888";

	char delimit[] = "|";

	char* result = nullptr;


	result = strtok(str1, delimit);

	while (result != nullptr)
	{
		cout << result << endl;
		result = strtok(NULL, ",");
	}
	/*
	if (result != nullptr)
		cout << result << endl;
	else
		cout << "end of string reached" << endl;


	result = strtok(NULL, delimit);

	cout << result << endl;

	result = strtok(NULL, delimit);

	if (result != nullptr)
		cout << result << endl;
	else
		cout << "end of string reached" << endl;


	result = strtok(NULL, delimit);
	if (result != nullptr)
		cout << result << endl;
	else
		cout << "end of string reached" << endl;
	*/
	return 0;
}