#include <iostream>
#include <map>

using namespace std;

int main()
{
	string s = "abcdabcde";
	map<char, int> d;

	for (char i : s)
	{
		if (d.find(i) != d.end())
			d[i] += 1;
		else
			d[i] = 1;
	}

	for (const auto& pair : d)
		cout << pair.first << "=" << pair.second << endl;
}