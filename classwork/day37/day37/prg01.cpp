#include <iostream>
#include <string>

int main() {
    std::string str1 = "Hello";
    std::string str2 = "World";

    // Concatenation
    std::string str3 = str1 + " " + str2;
    std::cout << "Concatenated: " << str3 << "\n";

    // Append
    str3.append("!");
    std::cout << "Appended: " << str3 << "\n";

    // Access
    std::cout << "First character: " << str3[0] << "\n";

    // Length
    std::cout << "Length: " << str3.length() << "\n";

    // Substring
    std::string sub = str3.substr(6, 5);
    std::cout << "Substring: " << sub << "\n";

    // Find
    size_t pos = str3.find("World");
    if (pos != std::string::npos)
        std::cout << "'World' found at position: " << pos << "\n";

    // Replace
    str3.replace(6, 5, "Universe");
    std::cout << "After replace: " << str3 << "\n";

    // Compare
    if (str1 == "Hello")
        std::cout << "str1 equals 'Hello'\n";

    // Clear
    str1.clear();
    std::cout << "str1 after clear (length): " << str1.length() << "\n";

    return 0;
}

/*

Concatenated: Hello World
Appended: Hello World!
First character: H
Length: 12
Substring: World
'World' found at position: 6
After replace: Hello Universe!
str1 equals 'Hello'
str1 after clear (length): 0


*/