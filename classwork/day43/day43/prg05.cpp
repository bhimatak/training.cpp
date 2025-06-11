#include <iostream>
#include <iterator>
#include <stack>
#include <vector>

using namespace std;

vector<int> NGE(vector<int> v)
{
	vector<int> nge(v.size());
	stack<int> s;
	for (int i = 0;i < v.size();i++) {
		while (!s.empty() && v[i] > v[s.top()])
		{
			//cout << "i=" << i << endl;
			nge[s.top()] = i;
			s.pop();

		}
		s.push(i);
	}
		while (!s.empty())
		{
			nge[s.top()] = -1;
			s.pop();
		}
	
		return nge;
}

int main()
{
	istream_iterator<int> is(cin);
	istream_iterator<int> ie;
	vector<int>nums(is, ie);

	//for (auto i : nums)
	//	cout << i << endl;

	vector<int>nge = NGE(nums);
	for (int i = 0;i < nums.size();i++)
		cout << nums[i] << " --> " << ((nge[i] == -1) ? -1 : nums[nge[i]])<< endl;

	return 0;
}