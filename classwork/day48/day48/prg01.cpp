#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;
class customer
{
private:
	string MSISDN;
	string t_MSISDN;
	string Brand;
	string opid;
	string t_opid;

	string callType;
	string call_dur;
	string gprs_d;
	string gprs_u;
public:
	customer(string MSISDN, string t_MSISDN, string Brand,
		string opid, string t_opid, string callType,
		string call_dur, string gprs_d, string gprs_u) :
		MSISDN(MSISDN), t_MSISDN(t_MSISDN), Brand(Brand),
		opid(opid), t_opid(t_opid), callType(callType),
		call_dur(call_dur),gprs_d(gprs_d), gprs_u(gprs_u) {}


	void display()
	{
		cout << "\nCustomer" << endl;
		cout<< MSISDN << endl;
		cout<< t_MSISDN << endl;
		cout << Brand << endl;
		cout << opid << endl;
		cout << t_opid << endl;
		cout << callType << endl;
		cout << call_dur << endl;
		cout << gprs_d << endl;
		cout << gprs_u << endl;
		cout << "======================" << endl;
		
	}

};


int main()
{
	string line = "1037928|Jio|42502|SMS-MT|0|0|0|1136404|42504";
	vector<customer> vc;

	vector<string> tokens;

	stringstream s1(line);

	string substr1;

	string MSISDN;
	string t_MSISDN;
	string Brand;
	string opid;
	string t_opid;
	
	string callType;
	string call_dur;
	string gprs_d;
	string gprs_u;
	//string value;
	

	while (getline(s1, substr1, '|'))
	{
		tokens.push_back(substr1);
	}


	for (auto i : tokens)
		cout << i << endl;

	ifstream ioFile("data.cdr");

	if (!ioFile)
		cout << "Unable to open" << endl;
	else
		cout << "Opened the file" << endl;
	
	cout << "====================" << endl;
	line = "";
	getline(ioFile, line);
	//while (getline(ioFile, line))
	//{
		//cout << line << endl;
		substr1 = "";
		stringstream s2(line);
		tokens.clear();
		while (getline(s2, substr1, '|'))
		{
			tokens.push_back(substr1);
		}
		int count = 0;
		bool fGPRS = false;
		MSISDN = tokens[0];
		Brand = tokens[1];
		opid = tokens[2];
		callType = tokens[3];
		if (callType == "MOC" || callType == "MTC")
		{
			call_dur = tokens[4];
		}
		else if (callType == "GPRS")
		{
			if (tokens[5] == "0")
				gprs_d = "0";
			else
				gprs_d = tokens[5];

			if (tokens[6] == "0")
				gprs_u = "0";
			else
				gprs_u = tokens[6];

		}
		else if (callType == "SMS-MT" || callType == "SMS-MO")
		{
			call_dur = "0";
			gprs_d = "0";
			gprs_u = "0";
		}
		
		vc.emplace_back(MSISDN, t_MSISDN, Brand, opid, t_opid, callType,
			call_dur, gprs_d, gprs_u);
		
			/*
		for (auto i : tokens) {
			//cout << i << endl;
			cout << "Count: " << count << endl;
			if (i == "GPRS")
			{
				fGPRS = true;
			}
			if (fGPRS && count == 8) {
				cout << "Found" << endl;
			}

			//vc.push_back()
			count++;
		}*/
		cout << "====================" << endl;
	//}

	ioFile.close();

	for (auto i : vc)
		i.display();
	return 0;
}