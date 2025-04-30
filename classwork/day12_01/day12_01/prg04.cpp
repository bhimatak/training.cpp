#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	/*
	char name[20] = {'B','h','i','m','a'};//"Bhima";
	for (int i = 0;i < 20;i++)
		printf("%c = %d\n", name[i], name[i]);
	for (int i = 39, count = 0;i < 59;i++)
		name[count++] = i;
	cout << "============"<<endl;
	for (int i = 0;i < 20;i++)
		printf("%c = %d\n", name[i], name[i]);
	name[0] = 'B';
	name[1] = 'h';
	name[2] = 'i';
	name[3] = 'm';
	name[4] = 'a';
	cout << "============" << endl;

	for (int i = 0;i < 20;i++)
		printf("%c = %d\n", name[i], name[i]);

	printf("Name: %s\n", name);

	*/

	char name[20];// = "bhima shankar";
	//cout << strlen(name)<<endl;
	//scanf("%[^\n]s", name);
	fgets(name,19,stdin);
	puts(name);
	printf("%s\n", name);
	return 0;
}