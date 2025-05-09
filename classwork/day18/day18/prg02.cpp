// C++ program to convert decimal to hexadecimal
#include <cmath>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

string decimalToHexa(int decimal)
{
    string hexadecimal = "";
    char hexaDecimals[16]
        = { '0', '1', '2', '3', '4', '5', '6', '7',
            '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
    while (decimal > 0) {
        int remainder = decimal % 16;
        hexadecimal = hexaDecimals[remainder] + hexadecimal;
        decimal /= 16;
    }
    return hexadecimal;
}



char *decimalToHexa1(int decimal)
{
    char hexadecimal[1024];
    char s1[1024],s2[1024];

    char hexaDecimals[16]
        = { '0', '1', '2', '3', '4', '5', '6', '7',
            '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
    memset(hexadecimal, '\0', 1024);
    memset(s1, '\0', 1024);
    memset(s2, '\0', 1024);

    while (decimal > 0) {
        int remainder = decimal % 16;
        
        //hexadecimal = hexaDecimals[remainder] + hexadecimal;
        sprintf(s1, "%c", hexaDecimals[remainder]);
        
        strcat(s1, s2);
        strcpy(s2, s1);
        decimal /= 16;
    }

    cout << s1 << endl;
    cout << s2 << endl;
    return hexadecimal;
}

int main()
{
    int decimal = 103;

    cout << "Hexadecimal equivalent: "
        << decimalToHexa1(decimal) << endl;

    return 0;
}