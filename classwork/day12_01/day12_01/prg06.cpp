#include <iostream>
#include <cstring>

using namespace std;

void display(int[], int);

void updateArr(int[], int);
void displayPtr(int *, int);
int lenStr(char* str1);

int main()
{
	/*
	char s1[20] = { '\0', };
	char s2[20] = { '\0', };
	char s3[20] = { '\0', };
	char* ptr;

	cin >> s1 >> s2;
	*/
	//s3 = s1 + s2;
	/*
	ptr = strcpy(s3, s1);
	cout << s3 << endl;
	cout << "ptr: " << ptr << endl;
	char *ptr2 = strcat(ptr, s2);
	cout << s3;
	cout << "ptr2: " << ptr2 << endl;
	*/
	/*
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

	*/


	int a[] = { 1,3,5,7,2,4,6,8 };
	int n = sizeof(a) / sizeof(a[0]);
	display(a,n);
	displayPtr(a, n);
	updateArr(a, 3);
	display(a, n);
	char name[] = "bhima";
	cout << lenStr(name)<<endl;
	return 0;
}

void display(int arr[], int CAP)
{
	for (int i = 0;i <CAP ;i++)
		cout << arr[i] << endl;
}

void displayPtr(int *arr, int CAP)
{
	for (int i = 0;i < CAP;i++)
		cout << arr[i] << endl;
}

void updateArr(int arr[], int pos)
{
	arr[pos] = 444;
}


int lenStr(char* str1)
{
	int count = 0;
	while (*str1 != '\0')
	{
		count++;
		str1++;
	}
	return count;
}

/*
TC01
i/p
s1 = "ABCDE"
s2 = "abcde"
o/p
s3 = AaBbCcDdEe

TC02
i/p
s1 = "ABCDEFGH"
s2 = "abcde"
o/p
s3 = AaBbCcDdEeFGH

TC03
i/p
s1 = "ABCDE"
s2 = "abcdefgh"
o/p
s3 = AaBbCcDdEefgh



*/