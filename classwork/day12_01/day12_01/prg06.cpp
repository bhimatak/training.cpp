#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char s1[20] = { '\0', };
	char s2[20] = { '\0', };
	char s3[20] = { '\0', };
	char* ptr;

	cin >> s1 >> s2;
	
	//s3 = s1 + s2;
	/*
	ptr = strcpy(s3, s1);
	cout << s3 << endl;
	cout << "ptr: " << ptr << endl;
	char *ptr2 = strcat(ptr, s2);
	cout << s3;
	cout << "ptr2: " << ptr2 << endl;
	*/

	int res = strncmp(s1, s2,4);
	cout << s1 << "\t" << s2 << endl;
	if (res == 0)
	{
		cout << "strings are equal" << endl;
	}
	else if (res > 0)
		cout << "s1 is greater than s2 \tres="<<res << endl;
	else
		cout << "s1 is less than s2 \tres="<<res << endl;


	return 0;
}