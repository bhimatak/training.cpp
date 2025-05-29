#include <iostream>

using namespace std;

template <class T1, class T2>
class Box
{
    private:
    T1 data1;
    T2 data2;
    
    public:
    Box(T1 v1, T2 v2): data1(v1), data2(v2){}
    void printData() { 
        cout<<"Data1: "<<data1<<endl;
        cout<<"Data2: "<<data2<<endl;
    }
};
int main()
{
    Box <int,float> intBox(10, 12.3);
    Box <float,string> stringBox(12.3,"abcde");
    
    intBox.printData();
    stringBox.printData();
    /*
    add(10, 12);
    add(1.1, 2.3);
    add("bhima", "shankar");
    */
    return 0;
}
