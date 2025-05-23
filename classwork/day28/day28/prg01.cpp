#include <iostream>

/*
size => no of ele present in arr 
cap => room to assign values for arr

rules:
1. when the size is et cap, cap is double by its ealier value => resizeing the array
   a. when arr is resized we need to move the contents from earlier mem to new mem


*/

using namespace std;

class myArray {
private:
	int* arr;
	int size;
	int capacity;
public:
	myArray() { capacity = 1; size = 0; arr = new int[capacity]; }
	int push_back(int);
	int biggest();
	bool sortAsc();
	bool sortDesc();
	void printArray();
	int getSize() const;
	int getCapacity() const;
	int resize(); //called whenever size==cap
};


int myArray::getCapacity() const{ return capacity; }

int myArray::getSize() const { return size; }

int myArray::push_back(int v) {
	if (size == capacity) {
		cout << "Cap is et size when adding element "<<v<< endl;
		resize();
	}
	arr[size++] = v;

	return 0;
}
void myArray::printArray() {
	for (int i = 0;i < size;i++)
		cout << arr[i] << " ";
	cout << endl;
}


int myArray::resize()
{
	capacity = capacity * 2;
	int* newData = new int[capacity];
	//copy the contents of earlier data to new data
	for (int i = 0;i < size;i++)
		newData[i] = arr[i];
	delete[] arr;
	arr = newData;  // arr is pointing to the new address

	return 0;
}


int myArray::biggest()
{
	int MAX = INT_MIN;
	for (int i = 0;i < size;i++)
	{
		if (MAX < arr[i])
			MAX = arr[i];
	}

	return MAX;
}


bool myArray::sortAsc() {
	if (size == 1)
		return true;
	for (int i = 0;i < size;i++)
	{
		for (int j = 0;j < size;j++)
		{
			if (arr[i] < arr[j])
			{
				//swap
				int t = arr[j];
				arr[j] = arr[i];
				arr[i] = t;
			}
		}
	}

	return true;
}

bool myArray::sortDesc() {
	if (size == 1)
		return true;
	for (int i = 0;i < size;i++)
	{
		for (int j = 0;j < size;j++)
		{
			if (arr[i] > arr[j])
			{
				//swap
				int t = arr[j];
				arr[j] = arr[i];
				arr[i] = t;
			}
		}
	}

	return true;
}

int main()
{
	myArray a;
	cout << "Size: " << a.getSize() << "\tCapacity: " << a.getCapacity() << endl;
	a.push_back(10);
	a.printArray();
	a.push_back(20);
	a.printArray();
	cout << "Size: " << a.getSize() << "\tCapacity: " << a.getCapacity() << endl;

	a.push_back(5);
	a.printArray();
	cout << "Size: " << a.getSize() << "\tCapacity: " << a.getCapacity() << endl;

	a.push_back(6);
	a.printArray();
	cout << "Size: " << a.getSize() << "\tCapacity: " << a.getCapacity() << endl;

	a.push_back(3);
	a.printArray();
	cout << "Size: " << a.getSize() << "\tCapacity: " << a.getCapacity() << endl;

	cout << a.biggest()<<endl;
	
	a.sortAsc();
	a.printArray();
	a.sortDesc();
	a.printArray();
	
	return 0;
}