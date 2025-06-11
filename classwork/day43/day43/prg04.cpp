#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <string>

void demo_unordered_map() {
    std::unordered_map<int, std::string> umap;

    // Insert elements
    umap.insert({ 1, "One" });
    umap.emplace(2, "Two");
    umap[3] = "Three";  // Insert or update

    // Access element
    std::cout << "Key 2: " << umap[2] << "\n";

    // Update element
    umap[2] = "Two Updated";

    // Find element
    auto it = umap.find(3);
    if (it != umap.end()) {
        std::cout << "Found key 3 with value: " << it->second << "\n";
    }

    // Erase element
    umap.erase(1);

    // Iterate over map
    std::cout << "unordered_map contents:\n";
    for (const auto& [key, value] : umap) {
        std::cout << key << " => " << value << "\n";
    }

    std::cout << "Size: " << umap.size() << "\n";
}

void demo_unordered_multimap() {
    std::unordered_multimap<int, std::string> umultimap;

    // Insert multiple elements with same key
    umultimap.insert({ 1, "One" });
    umultimap.emplace(1, "Uno");
    umultimap.insert({ 2, "Two" });
    umultimap.emplace(2, "Dos");
    umultimap.insert({ 3, "Three" });

    // Count elements with key 1
    std::cout << "\nCount for key 1: " << umultimap.count(1) << "\n";

    // Find and iterate all elements with key 1
    auto range = umultimap.equal_range(1);
    std::cout << "Values for key 1:\n";
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << it->second << "\n";
    }

    // Erase all elements with key 2
    size_t erased = umultimap.erase(2);
    std::cout << "Erased " << erased << " elements with key 2\n";

    // Iterate entire multimap
    std::cout << "unordered_multimap contents:\n";
    for (const auto& [key, value] : umultimap) {
        std::cout << key << " => " << value << "\n";
    }
}

int main() {
    demo_unordered_map();
    demo_unordered_multimap();
    return 0;
}