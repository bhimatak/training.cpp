#include <iostream>

using namespace std;


class myArray {
	int* data;
	
public:
	myArray() {}
	myArray(int val)
	{
		data = new int(val);
		
	}

	myArray(const myArray& fObj)
	{
		cout << "Copy Cstr got called" << endl;
		data = new int(*fObj.data);

	}
	void setVal(int val) { *data = val; }
	int getVal() { return *data; }
	void display()
	{
		cout << "Address of data: " << data;
		cout << "\t" << *data<<endl;
		
	}

	myArray operator +(const myArray& fObj)
	{
		return myArray(*data + *fObj.data + 100);
	}

	myArray& operator ++() //prefix
	{
		++*data;
		return *this;
	}
	myArray& operator ++(int) //postfix
	{
		int temp = *data;
		temp++;
		*data = temp;
		return *this;
	}

	friend ostream& operator <<(ostream &os,const myArray& fObj)
	{
		os << "Data: " << *fObj.data << endl;
		return os;
	}

	~myArray()
	{
		delete data;
	}
	
};


int main()
{
	myArray a1(10);
	a1.display();
	myArray a2(a1);
	a2.display();
	a2.setVal(20);

	a1.display();
	a2.display();

	myArray a3 = a1 + a2;
	a3.display();
	++a3;
	a3.display(); //131
	a3++;
	a3.display(); //131

	cout << a3;
	
	//cin >> a3;
	return 0;
}

/*
string s = "abcdabcde";


*/