﻿/*
#include <iostream>
#include <typeinfo>
using namespace std;
typedef struct Test
{
    int id;
}TEST;


class testClass
{
    int id;
};

int main() {
    int a = 5;
    float b = 5.5;
    char c = 'A';
    bool d = true;
    TEST t = { 101 };
    testClass tc;
    cout << "Type of a: " << typeid(a).name() << ", Size: " << sizeof(a) << endl;
    cout << "Type of b: " << typeid(b).name() << ", Size: " << sizeof(b) << endl;
    cout << "Type of c: " << typeid(c).name() << ", Size: " << sizeof(c) << endl;
    cout << "Type of d: " << typeid(d).name() << ", Size: " << sizeof(d) << endl;
    cout << "Type of t: " << typeid(t).name() << ", Size: " << sizeof(t) << endl;
    cout << "Type of tc: " << typeid(tc).name() << ", Size: " << sizeof(tc) << endl;

    return 0;
}
*/

/*

#include <iostream>
using namespace std;

int main() {
    wchar_t w = L'₹';  // L prefix = wide character
    wcout << L"Wide character: " <<w << endl;
    return 0;
}

*/

#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    wchar_t w = L'漢';
    wcout << L"Wide char output: " << w << endl;
    return 0; 
}