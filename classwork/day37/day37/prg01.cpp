#include <iostream>
#include <algorithm>
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
    str3.replace(6, 3, "Universe");
    std::cout << "After replace: " << str3 << "\n";

    // Compare
    if (str1 == "Hello")
        std::cout << "str1 equals 'Hello'\n";

    // Clear
    str1.clear();
    std::cout << "str1 after clear (length): " << str1.length() << "\n";

    std::string s1 = "this is a CPP programming class, class is very helpful";

    int pos1 = s1.find("class");

    std::cout << pos1 << std::endl;

    pos1 = s1.rfind("class");
    std::cout << pos1 << std::endl;

    pos1 = s1.find_first_of('C');

    std::cout << pos1 << std::endl;

    pos1 = s1.find_last_of('c');

    std::cout << pos1 << std::endl;
    size_t from = 3;
    std::transform(s1.begin()+3, s1.end(), s1.begin()+3, ::toupper);
    std::cout << "Uppercase: " << s1 << "\n";

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