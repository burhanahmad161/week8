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
    idx++;
   }
   for(int a=idx;a>=0;a--)
   {
    cout<<name[a];
   }
   
}