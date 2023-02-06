#include<iostream>
using namespace std;
int main()
{
   float num[5];
   for(int idx=0;idx<5;idx++)
   {
    cout<<"Enter a number:";
    cin>>num[idx];
   }
   num[0]=0.25*num[0];
   num[1]=0.10*num[1];
   num[2]=0.05*num[2];
   num[3]=0.01*num[3];
   float sum=num[0]+num[1]+num[2]+num[3];
   if(sum>=num[4])
   {
    cout<<"True";
   }
   else
   cout<<"False";
}
