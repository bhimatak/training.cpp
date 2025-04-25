#include <iostream>

using namespace std;

void getDigits(int);

int count0 = 0;
int count1 = 0;
int count2 = 0;
int count3 = 0;
int count4 = 0;
int count5 = 0;
int count6 = 0;
int count7 = 0;
int count8 = 0;
int count9 = 0;

int main()
{
	int num;
	cin >> num;
	getDigits(num);
	cout << "0: " << count0 << endl;
	cout << "1: " << count1 << endl;
	cout << "2: " << count2 << endl;
	cout << "3: " << count3 << endl;
	cout << "4: " << count4 << endl;
	cout << "5: " << count5 << endl;
	cout << "6: " << count6 << endl;
	cout << "7: " << count7 << endl;
	cout << "8: " << count8 << endl;
	cout << "9: " << count9 << endl;
	return 0;
}

void getDigits(int num)
{
	int r;
	while (num)
	{
		r = num % 10;
		switch (r)
		{
		case 0:
			count0++;
			break;
		case 1:
			count1++;
			break;
		case 2:
			count2++;
			break;
		case 3:
			count3++;
			break;
		case 4:
			count4++;
			break;
		case 5:
			count5++;
			break;
		case 6:
			count6++;
			break;
		case 7:
			count7++;
			break;
		case 8:
			count8++;
			break;
		case 9:
			count9++;
			break;
		default:
			break;
		}
		num = num/ 10;
	}
}