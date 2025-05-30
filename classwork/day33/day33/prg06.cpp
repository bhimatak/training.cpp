/*
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <int>a;
	cout << "Cap: " << a.capacity() << "\tsize: " << a.size() << endl;
	a.push_back(10);
	cout << "Cap: " << a.capacity() << "\tsize: " << a.size() << endl;
	a.push_back(11);
	cout << "Cap: " << a.capacity() << "\tsize: " << a.size() << endl;
	a.push_back(12);
	cout << "Cap: " << a.capacity() << "\tsize: " << a.size() << endl;
	a.push_back(13);
	cout << "Cap: " << a.capacity() << "\tsize: " << a.size() << endl;


	return 0;
}*/


#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    // Both size and capacity increase on adding elements
    for (int i = 0; i <= 10; i++)
        v.push_back(i+1);

    cout << "Initial Size: " << v.size() << endl;
    cout << "Initial Capacity: " << v.capacity() << endl;

    // On removing elements, only size decrease
    v.pop_back();
    v.pop_back();

    cout << "Final Size: " << v.size() << endl;
    cout << "Final Capacity: " << v.capacity() << endl;
    return 0;
}