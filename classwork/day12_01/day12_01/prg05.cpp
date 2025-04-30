#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char dest[5], src[20] = "123456789012345678";
	char dest2[5];
	strcpy(dest, src);
	printf("\nDest: %s\n", dest);
	strncpy(dest2, src, 4);
	printf("\nDest2: %s\n", dest2);

	char s1[30] = "Hello";
	char s2[20] = "World";
	strcat(s1, s2);
	printf("\ns1: %s\ts2: %s\n", s1, s2);

	char s3[50] = { '\0', };

	strcat(s3, "Bhima shankar");
	printf("\ns3: %s\n", s3);
	strcpy(s3, "Amol");
	printf("\ns3: %s\n", s3);
	
	for (int i = 0;i < 30;i++)
		printf("\n%c = %d", s3[i], s3[i]);

	char str1[20], str2[20],str3[30];

	strcat(strcat(strcpy(str1, "Bhima"), "shankar"), " Takalki");

	printf("\nstr1: %s\n", str1);

	
	cout << endl;
	return 0;
}