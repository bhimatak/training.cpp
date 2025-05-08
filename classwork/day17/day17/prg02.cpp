/*
two string anagram to each other
i/p
ball allb

yes

tom mot 

yes

pen nop

No

bacc acbc


a[0] = 1
a[1] = 1
a[2] = 2

b[0] = 1 - a
b[1] = 2 - b
b[2] = 1 -> c

a[0] = 0
a[1] = 0
a[2] = 0

*/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int freq[26] = { 0, };
	bool flag = true;
	char s1[1024] = { '\0', }, s2[1024] = { '\0', };
	cin >> s1>>s2;

	for (int i = 0;i < 26;i++)
		freq[i] = 0;

	if (strlen(s1) == strlen(s2)) {
		for (int i = 0;i < strlen(s1);i++) {

			freq[s1[i] - 'a']++;
			freq[s2[i] - 'a']--;
		}
		for (int i = 0;i < 26;i++)
		{
			if (freq[i] > 0 || freq[i]<0)
			{
				flag = false;
				break;
			}
		}
	}
	else
		flag = false;


	if (flag == true)
		cout << "Anagram" << endl;
	else
		cout << "Not Anagram" << endl;
	return 0;
}