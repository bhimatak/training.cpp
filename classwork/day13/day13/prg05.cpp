#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char line[] = "This is a CPP Programming Class";
	char ch = 'g';
	unsigned long int BAl=0, BAr1=0, BAr2=0;
	cout << "BA line: " << (unsigned long int)line << endl;
	BAl = (unsigned long int)line;
	char* res = strchr(line, ch);

	if (res != nullptr) {
		cout << "\t" << res << endl;
		cout << "BA res: " << (unsigned long int)res << endl;
		BAr1 = (unsigned long int)res;
	}
	else
		cout << "character not found" << endl;
	
	unsigned long int r1 = BAr1 - BAl;
	cout << "Position of "<<ch<<" is : " << r1 << endl;
	char substr[] = "is";

	char* res1 = strstr(line, substr);

	if (res1 != nullptr) {
		cout << "\t" << res1 << endl;
		BAr2 = (unsigned long int)res1;
	}
	else
		cout << "substring not found" << endl;

	unsigned long int r2 = BAr2 - BAl;
	cout << "Position of " << substr << " is : " << r2 << endl;
	
	return 0;
}