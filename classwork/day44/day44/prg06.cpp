#include <iostream>
#include <thread>
#include <mutex>
#include <string>


using namespace std;

class Counter
{
	int x;
	mutex mtx;
public:
	Counter() : x(0) {}
	void increment(const string tName) {
		for (int i = 0;i < 5;i++)
		{
			lock_guard<mutex> lock(mtx);
			//mtx.lock();
			x += 2;

			cout <<"\n"<<tName<<" increments x by "<< x << endl;
			//mtx.unlock();
		}
	}

	int getX() { return x; }
};

int main()
{
	Counter c;

	thread t1(&Counter::increment, &c,"Thread 1");
	thread t2(&Counter::increment, &c, "Thread 2");
			
	t1.join();
	t2.join();
	//c.increment();
	cout << c.getX() << endl;

	return 0;
	
}