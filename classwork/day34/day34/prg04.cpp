#include <iostream>

using namespace std;

int main()
{
#ifdef DEBUG
	cout << "Hello Bhima" << endl;
#endif
#ifdef NDEBUG
	cout << "Hello Shankar" << endl;
#else
	cout << "No MACRO defined" << endl;
#endif
	return 0;
}

