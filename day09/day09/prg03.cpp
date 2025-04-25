#include <cstdio>

//using namespace std;

int main()
{
	int a=10;
	float b = 15.5;
	char c = 'A';
	double d = 101.111;
	char s[20];

	printf("\n %c \n %d \n %f \n %lf \n %s\n", c, a, b, d, "bhima");
	scanf("%3d%f%lf%s", &a, &b, &d, s);
	//fflush(stdin);
	scanf(" ");
	scanf("%c", &c);
	printf("\n %d \n %05d \n %f \n %lf \n %s\n", c, a, b, d, s);

	return 0;
}