#include<iostream>
using namespace std;
int main()
{
    int size,mult;
    cout<<"Enter size of array:";
    cin>>size;
   cout<<"Enter a number you want to multiply with:";
   cin>>mult;
    int numbers[size];
   for(int idx=1;idx<=size;idx++)
   {
    cout<<"Enter a number:";
    cin>>numbers[idx];
   }
   for(int idx=1;idx<=size;idx++)
   {
    numbers[idx]=numbers[idx]*mult;
   }
      for(int idx=size;idx>0;idx--)
      cout<<numbers[idx]<<endl;
}
