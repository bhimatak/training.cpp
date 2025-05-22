#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance) { balance = initialBalance;  }

    double getBalance() const{  // Const member function
       
        return balance;          // Ensures no modification to object
    }
    //const int a[] => array as read only
    void disp(const int a[], int n) const { //const function will restrict to modify class variable/members
       // a[3] = 999; 
        for (int i = 0;i < n;i++)
            cout << a[i] << endl;
        
    }
    void deposit(double amount) {
        balance += amount;
    }
};

int main() {
    BankAccount acc(1000.0);
    acc.deposit(500.0);

    // Call to const function
    cout << "Current balance: $" << acc.getBalance() << endl;
    int a[5] = { 1,2,3,4,5 };
    acc.disp(a, 5);

    return 0;
}