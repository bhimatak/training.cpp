#include <iostream>

using namespace std;

int* allocMem(int*, int);
int getValues(int*, int);
int sortAsc(int*, int);
void display(int*, int);
void swap(int&, int&);



int main()
{
	int* ptr = nullptr;
	int n = 5;
	ptr = allocMem(ptr, n);
	getValues(ptr, n);
	cout << "Before Sort" << endl;
	display(ptr, n);
	sortAsc(ptr, n);
	cout << "After Sort" << endl;
	display(ptr, n);

	return 0;

}


int* allocMem(int* p, int nEle)
{
	p = (int *)malloc(nEle * sizeof(int));
	return p;
}

int getValues(int* p, int n)
{
	for (int i = 0;i < n;i++,p++)
		cin >> *p;

	return 0;
}

void swap(int& x, int& y)
{
	int t;
	t = x;
	x = y;
	y = t;
}


int sortAsc(int* p, int n)
{
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (p[i] < p[j])
				swap(p[i], p[j]);
		}
	}
	return 0;
}

void display(int* p, int n)
{
	int i = 0;
	while (i < n) {
		cout << *p++<<"\t";
		i++;
	}
	cout << endl;
}