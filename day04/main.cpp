#include <iostream>
#include "stringHand.h"


using namespace std;

int main(int argc, char *argv[])
{
	//stringHandling();
	//enumHandling();
	cout << argc << endl;
	if (argc <= 1)
		return 0;
	/*
	cout << "argv[0]: "<< argv[0] << endl;
	cout << "argv[1]: " << argv[1] << endl;
	cout << "argv[2]: " << argv[2] << endl;
	cout << "argv[3]: " << argv[3] << endl;
	*/
	
	cout << argv[0] << endl;
	cout << argv[1] << endl;
	cout << argv[2] << endl;
	cout << argv[3] << endl;

	cout << "1st char" << argv[1][0] << endl;
	cout << "2nd char" << argv[1][1] << endl;
	int res = 0;

	switch (argv[1][0])
	{
	case '+':
		res = atoi(argv[2]) + atoi(argv[3]);
		cout << "res: " << res << endl;
		break;

	case '-':
		res = atoi(argv[2]) - atoi(argv[3]);
		cout << "res: " << res << endl;
		break;
	}

	/*
	int res = atoi(argv[1]) + atoi(argv[2]);
	cout << "res: " << res << endl;
	*/

	return 0;
}