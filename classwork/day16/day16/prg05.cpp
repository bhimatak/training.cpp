#include <iostream>
#include <cstring>
#define howManyNames 5
#define strLenName 50
using namespace std;

int lenStr(const char*);
char* revStr(char*, int);
//char* tokenStr(char*, char);


int lenStr(const char* s)
{
	int c = 0;
	while (*s != '\0') {
		c++;
		s++;
	}
	return c;
}

/*char* getWords(char* s, char d)
{
	int i;
	while(s[i]!='\0')
	{
	}
}
*/
char* revStr(char* s, int l)
{
	char t;
	for (int i = 0;i <= l/2;i++)
	{
		t = s[i];
		s[i] = s[l - i-1];
		s[l - i-1] = t;
	}
	return s;
}

int main()
{
	char is[] = "This is a CPP Program";
	int l = lenStr(is);
	char* rStr = revStr(is, l);
	cout << "Length: " << l << endl;
	cout << rStr << endl;
	
	char names[howManyNames][strLenName];
	strcpy(names[0], "Nikhil");
	strcpy(names[1], "Abhijit");
	strcpy(names[2], "Suveta");
	strcpy(names[3], "Fatima");
	strcpy(names[4], "Priya");
	for (int i = 0;i < howManyNames;i++)
		cout << names[i]<<endl;


	const char *names1[strLenName] = { "Remin","Lavanya","Nisha","Ashok","Manu" };

	for (int i = 0;i < howManyNames;i++)
		cout << names1[i] << endl;



	return 0;
}
