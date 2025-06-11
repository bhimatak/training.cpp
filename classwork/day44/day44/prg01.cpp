#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

typedef unsigned long long ULL;

void greet() { cout << "Hello World!" << endl; }

void display(int x) { cout << "X: " << x << endl; }

void modifyX(int& x) { 
	std::this_thread::sleep_for(std::chrono::seconds(20));
	x *= 2; 
	cout << "X: " << x << endl;

}

void printX(ULL x, ULL y) {
	ULL i;
	for (i = x;i < y;i++)cout << "i=" << i << endl;
	
}

int main()
{
	/*
	int val = 10;
	thread t1(greet);

	
	t1.join();
	cout << "End of the program" << endl;
	//t1.join();  //joinable or not to check here

	thread t2(display, 101); //call by value

	t2.join();

	thread t3(modifyX, std::ref(val)); //call by ref

	cout << "val: " << val << endl;
	t3.join();
	cout << "val: " << val << endl;
	*/
	/*
	ULL x = 1000;
	ULL y = 999999999;
	ULL a = 10;
	ULL b = 999999;
	thread t1(printX, x,y);
	thread t2(printX, a,b);
	*/

	int val = 10;
	thread t1(modifyX, ref(val));
	t1.join();
	//t2.join();
	cout << "Main is not waiting" << endl;
	std::this_thread::sleep_for(std::chrono::seconds(10));
	cout << "value: " << val << endl;

	return 0;
}