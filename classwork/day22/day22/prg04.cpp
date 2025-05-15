#include <iostream>

using namespace std;


int countVovel(char*);


int countVovel(char* ptr)
{
	int counter = 0;
	while (*ptr != '\0')
	{
		//logic to find vovels and count 
		switch (*ptr)
		{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			counter++;
		}

		ptr++;
	}

	return counter;
}

int main()
{
	

	char s1[200];
	cin.getline(s1, 199);
	//fgets(s1, 199, stdin);
	/*for (int i = 0;i < strlen(s1);i++)
		cout << (int)s1[i] << " = " << s1[i] << endl;

	s1[strlen(s1)-1] = '\0';
	cout << s1 << endl;
	for (int i = 0;i < strlen(s1);i++)
		cout << (int)s1[i] << " = " << s1[i] << endl;*/

	cout << "Vovels Count: " << countVovel(s1) << endl;


	return 0;
}