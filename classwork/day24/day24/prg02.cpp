// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstdlib>

using namespace std;
typedef struct Employee
{
  int e_id;
  char e_name[20];
  char e_desg[20];
}EMP;

int main() {
 
 EMP *e1 = (EMP *)malloc(sizeof(EMP)*3);
 EMP *temp = e1;
 cin>>e1->e_id>>e1->e_name>>e1->e_desg;
 e1++;
 cin>>e1->e_id>>e1->e_name>>e1->e_desg;
 e1++;
 cin>>e1->e_id>>e1->e_name>>e1->e_desg;
 e1 = temp;
 cout<<e1->e_id<<"\t"<<e1->e_name<<"\t"<<e1->e_desg<<endl;
 e1++;
 cout<<e1->e_id<<"\t"<<e1->e_name<<"\t"<<e1->e_desg<<endl;
 e1++;
 cout<<e1->e_id<<"\t"<<e1->e_name<<"\t"<<e1->e_desg<<endl;
 
 
 
 return 0;
 
 
}
