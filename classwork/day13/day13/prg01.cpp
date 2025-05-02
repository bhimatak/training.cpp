#include <iostream>
#include <cstring>
#define MAX 1024

using namespace std;

int findSubstring(char*, char *s2);

int main()
{
    char str1[MAX];// = "There are beuitful places on earth ari";
    cin.getline(str1,MAX);
    
    char str2[MAX] = "are";
	int c1 = findSubstring(str1, str2);
    strcpy(str2, "i");
    int c2 = findSubstring(str1, str2);
    cout <<"Sum = "<< (c1 + c2);

    return 0;
}

int findSubstring(char* str, char* substr)
{
    int i = 0, j = 0;
    int l1 = strlen(str), l2 = strlen(substr);
    while ((str[j] != '\0') && (substr[i] != '\0')) {
        if (substr[i] != str[j]) {
            
            j++;
            i = 0;
        }
        else {
            
            i++;
            j++;
        }
    }
    if (substr[i] == '\0')
        return j-l2;
    else
        return -1;
}

/*
C:\Users\Administrator\Desktop\training.ust.cpp\classwork\day13\x64\Debug>.\day13.exe
We are playing football
Sum = 14
C:\Users\Administrator\Desktop\training.ust.cpp\classwork\day13\x64\Debug>.\day13.exe
The sun is beautiful
Sum = 7
C:\Users\Administrator\Desktop\training.ust.cpp\classwork\day13\x64\Debug>.\day13.exe
he works at tcs
Sum = -2
*/