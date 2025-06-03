#include <iostream>
#include <array>
#include <algorithm> // for sort, reverse

int main() {
    // Declare and initialize an array of 5 integers
    std::array<int, 5> arr = { 10, 20, 30, 40, 50 };

    // Accessing elements
    std::cout << "Element at index 2 (using at): " << arr.at(2) << std::endl;
    std::cout << "First element: " << arr.front() << std::endl;
    std::cout << "Last element: " << arr.back() << std::endl;

    
    // Size and empty check
    std::cout << "Size of array: " << arr.size() << std::endl;
    std::cout << "Is array empty? " << (arr.empty() ? "Yes" : "No") << std::endl;
    constexpr int n = 10;
    std::array<int, n> arr1;
    std::cout << "Size of array: " << arr1.size() << std::endl;
    std::cout << "Is array empty? " << (arr1.empty() ? "Yes" : "No") << std::endl;

    

    std::cout << arr1.at(0) << std::endl;

    /*constexpr int Size = 0;
    int arr2[Size];
    arr2[0] = 10;
    std::cout << arr2[0] << std::endl;
    */
    // Fill array
    arr.fill(7);
    std::cout << "After fill: ";
    for (int i : arr) std::cout << i << " ";
    std::cout << std::endl;

    // Reassign values
    arr = { 1, 4, 3, 2, 5 };

    // Sort array
    std::sort(arr.begin(), arr.end());
    std::cout << "After sorting: ";
    for (int i : arr) std::cout << i << " ";
    std::cout << std::endl;

    // Reverse array
    std::reverse(arr.begin(), arr.end());
    std::cout << "After reversing: ";
    for (int i : arr) std::cout << i << " ";
    std::cout << std::endl;

    // Data pointer access
    int* p = arr.data();
    std::cout << "Pointer to first element: " << *p << std::endl;

    return 0;
}