/*

Q. count the number of times an alphabht is present in a string

i/p

apple

a - 1
p - 2
l - 1
e - 1


*/

#include <iostream>

using namespace std;

int main()
{
	int freq[26] = { 0, };
	char s[1024];
	cin >> s;
	for (int i = 0;i < 26;i++)
		freq[i] = 0;

	for (int i = 0;i < strlen(s);i++)
		freq[s[i] - 'a']++;
	
	for (int i = 0;i < 26;i++)
	{
		if (freq[i] > 0)
		{
			cout <<char(i+'a')<<" - "<< freq[i] << endl;
		}
	}
	return 0;
}