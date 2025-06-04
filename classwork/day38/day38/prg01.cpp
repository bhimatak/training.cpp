#include <iostream>
#include <list>

bool isOdd(int x) { return x % 2 != 0; }



int main() {
    std::list<int> l1 = { 10, 20, 20, 30, 40 };

    l1.push_front(5);
    l1.push_back(50);
    l1.emplace_back(60);
    l1.emplace_front(2);
    l1.insert(l1.begin(), 1);

    std::cout << "List after insertions:\n";
    for (int x : l1) std::cout << x << " ";
    std::cout << "\n";

    l1.remove(20);             // Remove all 20s
    std::cout << "After remove(20):\n";
    for (int x : l1) std::cout << x << " ";
    std::cout << "\n";

    l1.remove_if(isOdd);       // Remove odd numbers
    std::cout << "After remove_if (odd):\n";
    for (int x : l1) std::cout << x << " ";
    std::cout << "\n";

    l1.reverse();
    std::cout << "After reverse:\n";
    for (int x : l1) std::cout << x << " ";
    std::cout << "\n";

    l1.clear();
    std::cout << "Size after clear: " << l1.size() << "\n";

    return 0;
}


/*

List after insertions:
1 2 5 10 20 20 30 40 50 60
After remove(20):
1 2 5 10 30 40 50 60
After remove_if (odd):
2 10 30 40 50 60
After reverse:
60 50 40 30 10 2
Size after clear: 0

*/