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
   if(idx%2==0)
   cout<<"Even"<<endl;
   else
   cout<<"Odd"<<endl;    
}