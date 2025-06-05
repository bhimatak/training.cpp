#include <iostream>
#include <set>
#include <string>

int main() {
    std::set<std::string> usernames;

    // Insert elements
    usernames.insert("Manu");
    usernames.insert("Gouri");
    usernames.insert("Vismaya");
    usernames.insert("manu"); // duplicate, will be ignored

    std::cout << "Registered usernames:\n";
    for (const auto& name : usernames) {
        std::cout << name << "\n";
    }
    
    // Find a username
    std::string search_name = "Manu";
    if (usernames.find(search_name) != usernames.end()) {
        std::cout << search_name << " is already registered.\n";
    }
    
    // Erase a username
    usernames.erase("manu");

    std::cout << "Usernames after deletion:\n";
    for (const auto& name : usernames) {
        std::cout << name << "\n";
    }
    
    // Show size
    std::cout << "Total users: " << usernames.size() << "\n";
    // lower_bound()
    auto lb = usernames.lower_bound("Gouri"); // >= "manu"
    std::cout << "\nLower bound of 'Manu': " << (lb != usernames.end() ? *lb : "None") << "\n";
    std::cout << *lb << std::endl;

    auto ub = usernames.upper_bound("Gouri"); // >= "manu"
    std::cout << "\nUpper bound of 'Manu': " << (ub != usernames.end() ? *ub : "None") << "\n";
    std::cout << *ub << std::endl;
    return 0;
}