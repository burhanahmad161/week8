#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"Enter name:";
    getline(cin,name);
     int idx=0;
    while(name[idx]!='\0')
   {
    cout<<"At index "<<idx+1<<":"<<name[idx]<<endl;
    idx++;
   }     
}