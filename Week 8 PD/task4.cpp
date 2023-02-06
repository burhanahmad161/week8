#include<iostream>
using namespace std;
main()
{
    bool flag=false;
    int number[7];
    for(int idx=0;idx<7;idx++)
    {
        cout<<"Enter a number:";
        cin>>number[idx];
    }
    for(int idx=0;idx<7;idx++)
    {
        if(number[idx]==7)
        {
            flag=true;
        }
    }
    cout<<flag;
}