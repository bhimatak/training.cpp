/*
	col1	col2	col3
	10(2000)20(2004)30(2008)-> row1
	40(2012)50		60 -> row2
	70		80		90 -> row3


*/


#include <iostream>
#define ROW 3
#define COL 3


using namespace std;

int main()
{
	int arr1[ROW][COL] = {{ 10,20,30 }, { 40,50,60 }, { 70,80,90 }}; // arr[3]
	int arr2[ROW][COL] = { 10,20,30,40,50,60,70,80,90 };
	int arr3[ROW][COL];


	for (int i = 0, count=0;i < ROW;i++)
	{
		for (int j = 0;j < COL;j++) // iterations to access items in the array
		{
			cout << "Address of arr1["<<count++<<"] = " << (unsigned long int)&arr1[i][j] << " value=" << arr1[i][j] << endl;
		}
	}

	cout << "========================" << endl;

	for (int i = 0, count = 0;i < ROW;i++)
	{
		for (int j = 0;j < COL;j++) // iterations to access items in the array
		{
			cout << "Address of arr2[" << count++ << "] = " << (unsigned long int) & arr2[i][j] << " value=" << arr2[i][j] << endl;
		}
	}
	cout << "========================" << endl;

	for (int i = 0, count = 0;i < ROW;i++)
	{
		for (int j = 0;j < COL;j++) // iterations to access items in the array
		{
			cout << "Enter the " << count++ << " item value: ";
			cin >> arr3[i][j];
		}
	}


	cout << "========================" << endl;

	for (int i = 0, count = 0;i < ROW;i++)
	{
		for (int j = 0;j < COL;j++) // iterations to access items in the array
		{
			cout << "Address of arr2[" << count++ << "] = " << (unsigned long int) & arr3[i][j] << " value=" << arr3[i][j] << endl;
		}
	}

	int arr4[ROW][COL] = { 101,102,103,104 };
	int arr5[ROW][COL] = { 0,};
	//bzero or memset or explicitlty run the loop to reinit it to zero
	return 0;
}