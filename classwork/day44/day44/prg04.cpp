// Mutex: Mutual Exclusion

// RACE CONDITION:
// 0. Race condition is a situation where two or more threads/process happend to change a common data at the same time.
// 1. If there is a race condition then we have to protect it and the protected setion is  called critical section/region.

// MUTEX:
// 0. Mutex is used to avoid race condition.
// 1. We use lock() , unlock() on mutex to avoid race condition.


#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

typedef unsigned long long ull;

int amt = 0;
std::mutex m;

void addMoney(int x)
{
	//ull start =0, end=1900000000;
	cout << "amt add=" << amt << " x=" << x << endl;
	m.lock();
	amt += x;
	// for(ull i=start; i<=end;++i)
	// 	{

	// 	}
	m.unlock();

}

void subMoney(int x)
{

	cout << "amt sub=" << amt << endl;
	m.lock();
	amt -= x;
	m.unlock();

}

int main()
{
	std::thread t1(addMoney, 150);
	std::thread t2(addMoney, 100);

	t2.join();
	cout << "Amount: " << amt << endl;
	t1.join();
	cout << "Amount: " << amt << endl;

	return 0;
}