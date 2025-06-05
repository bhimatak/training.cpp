#include <iostream>
#include <map>
#include <string>

int main() {
    std::multimap<std::string, std::string> department;

    // Insert employees into departments
    department.insert({ "HR", "Alice" });
    department.insert({ "HR", "Bob" });
    department.insert({ "IT", "Charlie" });
    department.insert({ "IT", "David" });
    department.insert({ "Finance", "Eve" });

    // Emplace
    department.emplace("IT", "Irene");

    // Display all entries
    std::cout << "Department Employees:\n";
    for (const auto& entry : department) {
        std::cout << entry.first << ": " << entry.second << "\n";
    }

    // Count number of employees in HR
    std::cout << "\nHR has " << department.count("HR") << " employees.\n";

    // Find first occurrence of key
    auto it = department.find("Finance");
    if (it != department.end()) {
        std::cout << "\nFirst employee in Finance: " << it->second << "\n";
    }

    // Display all employees in IT using equal_range
    auto range = department.equal_range("IT");
    std::cout << "\nIT Department Employees:\n";
    for (auto itr = range.first; itr != range.second; ++itr) {
        std::cout << itr->second << "\n";
    }

    // Erase one IT employee using iterator
    if (range.first != department.end())
        department.erase(range.first);

    // Display after erasing
    std::cout << "\nAfter erasing one IT employee:\n";
    for (const auto& entry : department) {
        std::cout << entry.first << ": " << entry.second << "\n";
    }

    // Clear the map
    department.clear();
    std::cout << "\nMultimap cleared. Is empty? " << std::boolalpha << department.empty() << "\n";

    return 0;
}


/*
Department Employees:
Finance: Eve
HR: Alice
HR: Bob
IT: Charlie
IT: David
IT: Irene

HR has 2 employees.

First employee in Finance: Eve

IT Department Employees:
Charlie
David
Irene

After erasing one IT employee:
Finance: Eve
HR: Alice
HR: Bob
IT: David
IT: Irene

Multimap cleared. Is empty? true


*/