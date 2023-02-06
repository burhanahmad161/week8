#include<iostream>
using namespace std;
main()
{
    string name;
    cout<<"Enter your string:";
    cin>>name;
    int count=name.length();
    if(count%2==0)
    cout<<"Even"<<endl;
    else
    cout<<"Odd"<<endl;
}