#include<iostream>
using namespace std;
main()
{
    string num[10];
    bool flag=false;
    for(int idx=0;idx<10;idx++)
    {
        cout<<"Enter any string:";
        cin>>num[idx];
    }
    for(int idx=0;idx<9;idx++)
    {
    if(num[idx]==num[idx+1])
    {
        flag=true;
    }
    else{
    flag=false;
    break;
    }
    }
    cout<<flag;
}