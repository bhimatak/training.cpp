#include <iostream>

/*
1. if (cond)
	{
		if block of statements
	}

*/
using namespace std;

int main()
{
	int batteryStatus, mobileStatus;
	cout << "Mobile Stauts (1/0) : ";
	cin >> mobileStatus;
	
	
	if (mobileStatus == 1) {
		cout << "Battery Status (0-100): ";
		cin >> batteryStatus;
		if (batteryStatus <= 10)
		{
			cout << "put the mobile to charging" << endl;
		}
		cout << "Open Browser" << endl;
		cout << "Check today's Live News" << endl;
	}
	else
	{
		cout << "Powering on the Mobile" << endl;
		cout << "Mobile Stauts (1/0) : ";
		cin >> mobileStatus;
		if (mobileStatus == 1) {
			cout << "Battery Status (0-100): ";

			cin >> batteryStatus;
			if (batteryStatus <= 10)
			{
				cout << "put the mobile to charging" << endl;
			}
			cout << "Open Browser" << endl;
			cout << "Check today's Live News" << endl;
		}
		else
		{
			cout << "Mobile is not in good condition";
			cout << " Or Battery is Dead." << endl;
			cout << "Please check the Mobile at the stores" << endl;
		}
	}
}