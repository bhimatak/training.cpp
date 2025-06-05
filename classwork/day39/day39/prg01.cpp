#include <iostream>
#include <map>
#include <vector>
#include <string>
/*
int main() {
    std::map<int, std::string> students;

    // Insert using insert()
    students.insert({ 101, "Sreelakshmi" });
    students.insert({ 102, "Vijayalaxmi" });

    // Insert using operator[]
    students[103] = "Sneha";
    

    // Insert using emplace()
    students.emplace(104, "Gouri");

    // Access using at()
    std::cout << "Student 102: " << students.at(102) << "\n";

    // Access using operator[]
    std::cout << "Student 103: " << students[103] << "\n";
    students[113] = "Vismaya";
    std::cout << "Student 113: " << students[113] << "\n";

    // Check size
    std::cout << "Total students: " << students.size() << "\n";

    // Check existence using count()
    if (students.count(103) == 0)
        std::cout << "Student 105 not found.\n";

    // Find element
    auto it = students.find(111);
    if (it != students.end())
        std::cout << "Found Student 101: " << it->second << "\n";
    else
        std::cout << "not found" << std::endl;

    // Erase a student
    students.erase(102);
    std::cout << "After erasing 102, size: " << students.size() << "\n";

    // Iterate over the map
    std::cout << "All students:\n";
    for (const auto& pair : students) {
        std::cout << "Roll: " << pair.first << ", Name: " << pair.second << "\n";
    }

    // lower_bound and upper_bound
    std::cout << "Lower bound of 103: " << students.lower_bound(103)->first << "\n";
    if (students.upper_bound(103) != students.end())
        std::cout << "Upper bound of 103: " << students.upper_bound(103)->first << "\n";

    // Clear all entries
    students.clear();
    std::cout << "Map cleared. Empty? " << std::boolalpha << students.empty() << "\n";

    return 0;
}
*/
/*

Student 102: Vijayalaxmi
Student 103: Sneha
Total students: 4
Student 105 not found.
Found Student 101: Sreelakshmi
After erasing 102, size: 3
All students:
Roll: 101, Name: Sreelakshmi
Roll: 103, Name: Sneha
Roll: 104, Name: Gouri
Lower bound of 103: 103
Upper bound of 103: 104
Map cleared. Empty? true


*/

using namespace std;
class Emp
{
public:
    Emp(int id, std::string name) : id(id), name(name) {}
    void disp() const{
        cout << "ID: " << id << "\tName: " << name << endl;
    }
    void setValues() {
        cout << "Enter Details, " << endl;
        cout << "ID: ";cin >> this->id;
        cout << "Name: ";cin >> this->name;
    }
    string getName() const{ return this->name; }
    int getId() const { return this->id; }
private:
    int id;
    string name;

};


/*
int main()
{
    Emp e1(101, "abc1");
    Emp e2(102, "abc2");
    std::map<int, vector<Emp>> mapEmp;

    vector<Emp> v;
    v.push_back(e1);
    v.push_back(e2);

    mapEmp[1] = v;

    auto i = mapEmp.begin();
    auto elef = i->first; //points to the key
    auto eles = i->second; //points to the value i.e now here vector
    for (auto j : eles)
        j.disp();

}
*/

/*

Emp = {

    101 : {101, "abc1", 'm', 10001},
    102 : {102, "abc2", 'f', 10002},
    103 : {103, "abc3", 'm', 10003}
}

*/

int main()
{
    int id;
    string name;
    map<int, vector<Emp>> vemp;
    
    for (int i = 0;i < 5;i++)
    {
        cout << "Enter Details of " << (i + 1) << " Employee\n";
        cout << "ID: ";cin >> id;
        cout << "Name: ";cin >> name;
        vemp[id].emplace_back(id,name);
    }

    for (const auto eleEmp : vemp)
    {
        for (const auto emps : eleEmp.second)
        {
            cout << "Employee ID: " << eleEmp.first<<"\t";
            //cout << "Name: " << emps.getName() << endl;
            emps.disp();
        }
    }

    cout << "Enter the id to be searched: ";
    cin >> id;
    const auto it = vemp.find(id);
    if (it != vemp.end()) {
        std::cout << "Found Employee " << id << ": " << "\n";
        
    }
    else
        std::cout << "not found" << std::endl;

    return 0;
}