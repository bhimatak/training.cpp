// Online C++ compiler to run C++ program online
#include <iostream>
#define depts 3
#define noEmps 2
using namespace std;
typedef struct Employee
{
    int e_id;
    char e_name[20];
}EMP;



int main() {
    //EMP e[depts][noEmps];
    EMP **e=nullptr;
    
    e = (EMP **)malloc(depts*sizeof(EMP *));
    cout<<"Address of e = "<<(unsigned long int)e<<endl;
        
    for(int i=0;i<depts;i++)
    {
        e[i] = (EMP *)malloc(noEmps*sizeof(EMP));
        cout<<"Address of e["<<i<<"] = "<<(unsigned long int)e[i]<<endl;
        
    }
    
    cout<<"Enter Employee Details dept-wise"<<endl;
    for(int i=0;i<depts;i++)
    {
        cout<<"Enter the Employee details for "<<(i+1)<<" Detpartment"<<endl;
        for(int j=0;j<noEmps;j++)
        {
            cout<<"ID: ";cin>>e[i][j]->e_id;
            cout<<"Name: ";cin>>e[i][j]->e_name;
        }
        cout<<"========================"<<endl;
        
    }
    
    
    cout<<"Employee Details dept-wise are,"<<endl;
    for(int i=0;i<depts;i++)
    {
        cout<<"Department "<<(i+1)<<endl;
        for(int j=0;j<noEmps;j++)
        {
            cout<<"ID: "<<e[i][j]->e_id<<endl;
            cout<<"Name: "<<e[i][j]->e_name<<endl;
        }
        cout<<"========================"<<endl;
        
    }
    cout<<endl;
    return 0;
}
