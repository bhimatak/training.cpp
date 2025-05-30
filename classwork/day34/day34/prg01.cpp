#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	
	ofstream fOut("emp.txt",ios::app );
	//for (int i = 0;i < 10;i++) {
		//fOut << (i + 1) << endl;
	//}
	fOut << "Name: "<<"\tID: "<<"\tSalary: " << endl;

	fOut.close();

	/*
	string line;
	ifstream fIn("emp.txt");
	if (!fIn.is_open())
		cerr << "Error: opening the file" << endl;
	while (getline(fIn, line))
		cout << line << endl;
	fIn.close();
	*/
	return 0;
}