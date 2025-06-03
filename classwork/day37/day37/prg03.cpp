#include <iostream>
#include <initializer_list>
using namespace std;


template <typename T, size_t N>

class myArray {
	T* arr;
	
public:
	myArray(std::initializer_list<T> list) {
		if (list.size() > N)
			throw std::length_error("Too many arguments");
		this->arr = new T[N];
		int i = 0;
		for (const T& val : list) {
			arr[i++] = val;

		}
		//for remaining elements initialze to default value of the datatype
		for (;i < N;i++)
			arr[i] = T{};
	}

	void display()
	{
		for (int i=0;i<N;i++)
			std::cout << arr[i] << std::endl;
	}
};





int main()
{
	//myFunc({ 1,2,3,4 });
	//myFunc({ 1,2,3,4,5,6,7 });
	try {
		myArray<int, 5> arr = { 1,2,3 };
		arr.display();
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
}