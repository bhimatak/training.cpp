#include <iostream>
#include <vector>

using namespace std;

class Person
{
	string name;
	char g;
	string address;
public:
	Person(string name, char g, string address) :
		name(name), g(g), address(address) {}

	void display() const {
		cout << name << " | " << g << " | " << address << endl;
	}
};

int main()
{
	Person p1("abc1",'m',"Chennai");
	Person p2("abc2", 'f', "Kerala");
	
	vector<Person> pv;
	pv.push_back(p1);
	pv.push_back(p2);
	//pv.push_back(p3)

	for (const auto p : pv)
		p.display();
	pv.emplace_back("abc3", 'm', "Karnataka");
	for (const auto p : pv)
		p.display();

	for (int i = 0;i < 3;i++)
	{
		string n;
		char g;
		string addr;
		cout << "Enter Name, g, Address: ";
		cin >> n >> g >> addr;
		pv.emplace_back(n, g, addr);
	}
	for (const auto p : pv)
		p.display();

	return 0;
}