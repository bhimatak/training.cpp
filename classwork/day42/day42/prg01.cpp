/*
#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<std::string> cities;

    // Insert elements
    cities.insert("Mumbai");
    cities.insert("Delhi");
    cities.insert("Chennai");
    cities.insert("Kolkata");

    // Emplace (in-place construction)
    cities.emplace("Hyderabad");

    // Display contents
    std::cout << "Cities in the set:\n";
    for (const auto& city : cities) {
        std::cout << city << "\n";
    }

    // Count & Find
    std::string searchCity = "Delhi";
    if (cities.count(searchCity)) {
        std::cout << "\n" << searchCity << " found in the set.\n";
    }

    // Using find()
    auto it = cities.find("Mumbai");
    if (it != cities.end()) {
        std::cout << *it << " is found. Erasing it.\n";
        cities.erase(it);
    }

    // Show size and load factor
    std::cout << "\nSet size: " << cities.size() << "\n";
    std::cout << "Bucket count: " << cities.bucket_count() << "\n";
    std::cout << "Load factor: " << cities.load_factor() << "\n";

    // Rehashing
    cities.rehash(20); // Force rehash into 20 buckets
    std::cout << "After rehash - New bucket count: " << cities.bucket_count() << "\n";
    std::cout << "\nSet size: " << cities.size() << "\n";
    std::cout << "Bucket count: " << cities.bucket_count() << "\n";
    std::cout << "Load factor: " << cities.load_factor() << "\n";
    // Clear
    cities.clear();
    std::cout << "Set cleared. Is empty? " << std::boolalpha << cities.empty() << "\n";

    return 0;
}
*/
/*
Cities in the set:
Mumbai
Delhi
Chennai
Kolkata
Hyderabad

Delhi found in the set.
Mumbai is found. Erasing it.

Set size: 4
Bucket count: 8
Load factor: 0.5
After rehash - New bucket count: 32
Set cleared. Is empty? true

*/

#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;
int main() {
    std::unordered_set<std::string> names;
    std::string name;

    std::cout << "Enter 5 names (duplicates allowed):\n";
    for (int i = 0; i < 5; ++i) {
        std::getline(std::cin, name);
        names.insert(name);
    }

    std::cout << "\nUnique names:\n";
    for (const auto& n : names) {
        std::cout << n << "\n";
    }


    cout << names.size() << endl;
    return 0;
}

/*
static int ax, bx, cx, dx;
int arr[65536];

mov[3], 12

arr[3] = 12;

ADD ax, [3]

ax += arr[3];
*/