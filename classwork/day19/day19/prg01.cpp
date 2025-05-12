/*
Pointers

NULL or nullptr => (void *)0
*/
#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	char ch = 'A';
	float f = 10.5;
	int b = 30;
	
	//void* ptr;
	int* ptr1 =nullptr;

	printf("\nAddress of a = %u and it value= %d\n",&a,a);
	printf("Address of ch = %u and it value= %c\n", &ch, ch);
	printf("Address of f = %u and it value= %f\n", &f, f);
	printf("Address of ptr1 = %u and it value= %u\n", &ptr1, ptr1);
	printf("\nAddress of b = %u and it value= %d\n", &b, b);
	/*
	a = 10;
	ptr1 = &a;

	printf("Address of ptr1 = %u and it value= %u\n", &ptr1, ptr1);

	printf("\nPtr1 is pointing to = %u ", ptr1);
	//CO(ptr1)=>&a
	//CO(CO(ptr1))=> value of a = dereferencing the pointer
	printf("\n%u is having a value stored as = %d\n", ptr1, *ptr1);



	ptr1 = &b;
	printf("\n%u is having a value stored as = %d\n", ptr1, *ptr1);

	//b = 101;
	*ptr1 = 101;

	printf("\nAddress of b = %u and it value= %d\n", &b, b);

	ptr1 = &ch;
	printf("Address of ptr1 = %u and it value= %u\n", &ptr1, ptr1);
	*/


	void* ptr = nullptr;

	ptr = &a;
	printf("\nAddress of ptr = %u and it value= %u\n", &ptr, ptr);

	printf("\nvalue stored at %u is %d\n", ptr, *(int *)ptr);

	
	
	ptr = &ch;
	printf("Address of ptr = %u and it value= %u\n", &ptr, ptr);

	ptr = &f;
	printf("Address of ptr = %u and it value= %u\n", &ptr, ptr);




	return 0;
}