
#include <iostream>
using namespace std;

class BankAccount {
private:
    int accNo;
    
    static int accountCount;  // Static member variable

public:
    BankAccount() {
        accountCount++;       // Increment count when object is created
        accNo = accountCount;
    }

    static int getAccountCount() { // Static function
        
        return accountCount;       // Accesses static member
    }

    void disp() { cout << "Account No: " << accNo << endl; }
};

int BankAccount::accountCount=1000;

int main()
{

    BankAccount* a = new BankAccount[5];

    for (int i = 0;i < 5;i++,a++) {
        cout << "Customer [" << (i + 1) << "] ";a->disp();
    }

    cout << a->getAccountCount()<<endl;
    return 0;
    
}