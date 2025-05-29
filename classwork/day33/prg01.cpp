#include <iostream>
#include <string>
using namespace std;

// Abstract Base Class
class Employee {
protected:
    int empId;
    string name;
    double basicSalary;

    static int nextId; // static member for auto-generating IDs

public:
    Employee(string n, double sal) : name(n), basicSalary(sal) {
        empId = nextId++;  // Assign current ID and increment for next
    }

    virtual void display() const = 0;               // Pure virtual
    virtual double calculateSalary() const = 0;     // Pure virtual
    virtual ~Employee() {}
};

// Define and initialize static member
int Employee::nextId = 1001;

// Derived class - Manager
class Manager : public Employee {
private:
    double bonus;

public:
    Manager(string n, double sal, double b)
        : Employee(n, sal), bonus(b) {}

    void display() const override {
        cout << "\n[Manager Details]\n";
        cout << "ID: " << empId << ", Name: " << name << endl;
        cout << "Base Salary: " << basicSalary << ", Bonus: " << bonus << endl;
        cout << "Total Salary: " << calculateSalary() << endl;
    }

    double calculateSalary() const override {
        return basicSalary + bonus;
    }
};

// Derived class - Engineer
class Engineer : public Employee {
private:
    double techAllowance;

public:
    Engineer(string n, double sal, double t)
        : Employee(n, sal), techAllowance(t) {}

    void display() const override {
        cout << "\n[Engineer Details]\n";
        cout << "ID: " << empId << ", Name: " << name << endl;
        cout << "Base Salary: " << basicSalary << ", Tech Allowance: " << techAllowance << endl;
        cout << "Total Salary: " << calculateSalary() << endl;
    }

    double calculateSalary() const override {
        return basicSalary + techAllowance;
    }
};

// Derived class - Technician
class Technician : public Employee {
private:
    int overtimeHours;
    double hourlyRate;

public:
    Technician(string n, double sal, int hours, double rate)
        : Employee(n, sal), overtimeHours(hours), hourlyRate(rate) {}

    void display() const override {
        cout << "\n[Technician Details]\n";
        cout << "ID: " << empId << ", Name: " << name << endl;
        cout << "Base Salary: " << basicSalary
             << ", Overtime Hours: " << overtimeHours
             << ", Hourly Rate: " << hourlyRate << endl;
        cout << "Total Salary: " << calculateSalary() << endl;
    }

    double calculateSalary() const override {
        return basicSalary + (overtimeHours * hourlyRate);
    }
};

void dispFunc(Employee *e)
{
    cout<<"DispFunc got called"<<endl;
    e->display();
}

// Driver code
int main() {
    /*Employee* e1 = new Manager("Abhijit", 50000, 10000);
    Employee* e2 = new Engineer("Remin", 40000, 7000);
    Employee* e3 = new Technician("Ebi", 30000, 10, 200);
    */
    Manager *e1 = new Manager("Abhijit", 50000, 10000);
    Engineer* e2 = new Engineer("Remin", 40000, 7000);
    Technician* e3 = new Technician("Ebi", 30000, 10, 200);
    
    /*
    e1->display();
    e2->display();
    e3->display();
    */
    dispFunc(e1);
    dispFunc(e2);
    dispFunc(e3);
    
    delete e1;
    delete e2;
    delete e3;

    return 0;
}
