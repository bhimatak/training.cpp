#include <iostream>

using namespace std;


void display(const char[]);

int main() {
	char s[] = "bhima";
	display("Abhijit");
	display(s);

	return 0;
}

void display(const char name[])
{
	while (*name != '\0')
		cout << *name++;

	/*name[3] = 'H';*/ // read only mem
	cout << endl;
}