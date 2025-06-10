#include <iostream>
#include <iterator>
#include <deque>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
	deque<char> d = { 'A','B','C' };
	list<int> l = { 1,2,3 };
	auto it = d.begin();

	cout << it[1] << endl;

	auto itl = l.begin();
	//cout << itl[1] << endl;
	cout << *itl << endl;
	return 0;
}