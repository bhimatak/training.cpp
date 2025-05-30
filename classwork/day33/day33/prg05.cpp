#include <iostream>
#include <exception>
#include <vector>

using namespace std;

int main()
{
	vector<int>arr;

	cout << arr.capacity() << "\t" << arr.size() << endl;
	arr.push_back(10);
	cout << arr.capacity() << "\t" << arr.size() << endl;
	arr.push_back(22);
	cout << arr.capacity() << "\t" << arr.size() << endl;
	arr.push_back(23);
	cout << arr.capacity() << "\t" << arr.size() << endl;
	int t = 10;
	cout<<arr.at(2)<<endl;
	for (auto i : arr)
		cout << i << endl;
	/*
	string err = "Bhima";
	string dbyZeroErr = "Divide by Zero error occured";
	string nullPtrErr = "Memory allocation failed";
	char* ptr = nullptr;
	int n1 = 10, n2 = 0;
	try {
		int* arr = new int[9999999999999];
		if (arr == nullptr)
			throw arr;
	}
	catch (int e)
	{
		cout << "Caught an exception: " << e << endl;
	}
	catch (const string e)
	{
		cout << "Caught an exception: " << e << endl;
	}
	
	catch (bad_alloc& e)
	{
		cout << "Error (bad_alloc): " << e.what() << endl;
	}

	catch (exception& e)
	{
		cout << "Error: " << e.what() << endl;
	}
	*/
	return 0;
}