#include<iostream>
using namespace std;
main()
{
    string name;
    string name1;
    cout<<"Enter first string:";
    cin>>name;
    cout<<"Enter second string:";
    cin>>name1;
    for(int idx=0;idx<4;idx++)
    {
        if(name[0]==name1[idx])
        cout<<name[0];
        else if(name[1]==name1[idx])
        cout<<name[1];
        else if(name[2]==name1[idx])
        cout<<name[2];
        else if(name[3]==name1[idx])
        cout<<name[3];
    }
}