#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int* ptr = (int*)malloc(1024*9999999999);
	if (ptr != NULL) {
		int* temp = ptr;
		cin >> *ptr;
		ptr++;
		cin >> *ptr;
		ptr++;
		cin >> *ptr;

		ptr = temp;
		for (int i = 0;i < 3;i++)
			cout << *ptr++ << endl;

		cout << endl;

		ptr = temp;
		free(ptr);
		ptr = nullptr; //fix for dangling pointer
		if(ptr)
			cout << *ptr << endl;//dang.  ptr

		
	}
	else
		cout << "mem failed to allocate" << endl;
	//free(ptr);
	/*cin >> *ptr;
	ptr++;
	ptr = temp;
	for (int i = 0;i < 3;i++)
		cout << *ptr++ << endl;*/
	/* valgrind = mem leaks*/
	return 0;
}

