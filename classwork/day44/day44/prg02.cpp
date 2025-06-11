#include <iostream>
#include <thread>
//#include <pthread.h>
#include <chrono>
#include<algorithm>


using namespace std;
using namespace std::chrono;

typedef unsigned long long ull;



ull OddSum = 0;
ull EvenSum = 0;

void findEven(ull start, ull end)
{
	cout << "Entered Even Function" << endl;
	for (ull i = start; i <= end;++i)
	{
		if ((i & 1) == 0) {
			EvenSum += i;
		}
	}
	cout << "Exited Even Function" << endl;
}

void findOdd(ull start, ull end)
{
	cout << "Entered Odd Function" << endl;

	for (ull i = start; i <= end;++i)
	{
		if ((i & 1) == 1) {
			OddSum += i;
		}
	}
	cout << "Exited Odd Function" << endl;
}


int main()
{

	ull start = 0, end = 1900000000;





	auto startTime = high_resolution_clock::now();

	std::thread t1(findEven, start, end);
	std::thread t2(findOdd, start, end);

	t1.join();
	t2.join();
	//findOdd(start, end);
	//findEven(start, end);

	auto stopTime = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stopTime - startTime);
	cout << "Odd Sum: " << OddSum << endl;
	cout << "Even Sum: " << EvenSum << endl;
	cout << "Seconds: " << duration.count() / 1000000 << endl;
	return 0;
}