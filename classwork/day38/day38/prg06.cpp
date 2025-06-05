#include <iostream>
#include <set>

int main() {
    std::multiset<int> scores;

    // insert()
    scores.insert(70);
    scores.insert(85);
    scores.insert(70); // duplicates allowed
    scores.insert(90);
    scores.insert(85);
    scores.insert(85);
    scores.insert(65);
    scores.insert(85);

    std::cout << "Initial multiset:\n";
    for (int x : scores)
        std::cout << x << " ";
    std::cout << "\n";

    // count()
    std::cout << "Count of 70: " << scores.count(70) << "\n";
    std::cout << "Count of 85: " << scores.count(85) << "\n";

    // find()
    auto it = scores.find(85);
    if (it != scores.end())
        std::cout << "Found 85 at iterator.\n";
    
    // equal_range()
    std::cout << "\nAll 85s:\n";
    auto range = scores.equal_range(85);
    for (auto i = range.first; i != range.second; ++i)
        std::cout << *i << " ";

    std::cout << std::endl;
    scores.erase(scores.find(70));
    for (int x : scores)
        std::cout << x << " ";
    std::cout << "\n";


    /*
    // erase() one instance
    std::cout << "\n\nErasing one '85'\n";
    scores.erase(scores.find(85)); // erases only one
    for (int x : scores)
        std::cout << x << " ";

    // erase() all 70s
    std::cout << "\n\nErasing all '70'\n";
    scores.erase(70); // erases all 70s
    for (int x : scores)
        std::cout << x << " ";

    // size()
    std::cout << "\n\nSize of multiset: " << scores.size() << "\n";

    // empty()
    std::cout << "Is empty? " << (scores.empty() ? "Yes" : "No") << "\n";

    // clear()
    scores.clear();
    std::cout << "Cleared. Size now: " << scores.size() << "\n";

    // insert again for bounds
    scores.insert({ 30, 40, 50, 60 });

    // lower_bound() and upper_bound()
    std::cout << "\nLower bound of 45: ";
    auto lb = scores.lower_bound(45);
    if (lb != scores.end()) std::cout << *lb << "\n";

    std::cout << "Upper bound of 50: ";
    auto ub = scores.upper_bound(50);
    if (ub != scores.end()) std::cout << *ub << "\n";

    // swap()
    std::multiset<int> ms2 = { 100, 200 };
    scores.swap(ms2);

    std::cout << "\nAfter swap:\nScores: ";
    for (int x : scores)
        std::cout << x << " ";
    std::cout << "\nMS2: ";
    for (int x : ms2)
        std::cout << x << " ";
    */
    return 0;
}