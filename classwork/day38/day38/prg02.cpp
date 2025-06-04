#include <iostream>
#include <list>
#include "Students.h"

using namespace std;

void mySort() {
	//logic for sorting Students in asc order

	for (i = 0;i < N;i++)
	{
		for (j = 0;j < N;j++)
		{
			if (i < j)
			{
				t = i;
				i = j;
				j = t;
			}
		}
	}
}

int main()
{
	Student s1(101, "abc1");
	Student s2(102, "abc2");
	Student s3(103, "abc3");
	Student s4(104, "abc4");

	Student s5(105, "abc5");
	Student s6(106, "abc6");
	Student s7(107, "abc7");
	

	std::list<Student> listStuds;

	listStuds.push_front(s1);
	listStuds.push_back(s2);
	listStuds.emplace_front(s3);
	listStuds.emplace_back(s4);
	listStuds.insert(listStuds.begin(), s5);

	for (auto lS : listStuds)
		lS.display();

	listStuds.reverse();
	cout << "============================" << endl;
	for (auto lS : listStuds)
		lS.display();

	listStuds.remove(s2);
	cout << "============================" << endl;
	for (auto lS : listStuds)
		lS.display();



	cout << endl;
	return 0;
}