#include<iostream>
#include<thread>
#include <mutex>
using namespace std;

typedef unsigned long long ull;

int amt = 0;
std::mutex m;

void addMoney(int x)
{
	ull start = 0, end = 1900000000;
	m.lock();
	cout << "\namt add=" << amt << endl;
	
	amt += x;
	/*for (ull i = start; i <= end;++i)
	{

	}*/
	m.unlock();

}

void subMoney(int x)
{
	cout << "\namt sub=" << amt << endl;
	amt -= x;

}

int main()
{
	std::thread t1(addMoney, 150);
	std::thread t2(addMoney, 100);

	t2.join();
	cout << "\nAmount: " << amt << endl;
	t1.join();
	cout << "\nAmount: " << amt << endl;

	return 0;
}