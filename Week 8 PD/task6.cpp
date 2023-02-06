#include<iostream>
using namespace std;
main()
{
   int num[3];
   for(int idx=0;idx<3;idx++)
   {
    cout<<"Enter a number:";
    cin>>num[idx];
   }
    for(int idx=0;idx<3;idx++)
   {
    if(num[idx]%2==0)
    {
        num[idx]=num[idx]+2;
    }
    else if(num[idx]%2==1)
    {
        num[idx]=num[idx]-2;
    }
   }
    for(int idx=0;idx<3;idx++)
    {
        cout<<num[idx];
    }
}