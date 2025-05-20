#include <iostream>

using namespace std;

typedef struct Employee
{
    int e_id;
    string e_name;
    float e_sal;
}EMP;

void printDetails(EMP);
bool getDetails(EMP &);

bool v_name(string);

void printDetails(EMP e)
{
    cout<<"\nEmployee Details"<<endl;
    cout<<e.e_id<<endl;
    cout<<e.e_name<<endl;
    cout<<e.e_sal<<endl;
}

bool getDetails(EMP &e)
{
    cout<<"Enter the details of employee\n";
    cout<<"ID: ";cin>>e.e_id;
    cout<<"Name: ";cin>>e.e_name;
    if(v_name(e.e_name)== false)
        return false;

    //do the validation of name here
    cout<<"Salary: ";cin>>e.e_sal;
    
    return true;

}

bool v_name(string name)
{
    for(int i=0;i<name.length();i++){
        if((name[i]>='a' && name[i]<='z')||(name[i]>='A'&&name[i]<='Z')||(name[i]==' '))
            continue;
        else
            return false;
    }
    return true;
}


int main()
{
    EMP e;

    if(getDetails(e)== true)
        {
            cout<<"Updated the records"<<endl;
            printDetails(e);
        }
    else
        cout<<"Something went wrong"<<endl;
    
    
    
    return 0;
}
