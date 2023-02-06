#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter size of array:";
    cin>>size;
    int numbers[size];
   for(int idx=0;idx<=size;idx++)
   {
    cout<<"Enter a number:";
    cin>>numbers[idx];
   }
   for(int i=0;i<=size;i++)
   {
    cout<<numbers[i];
   }
}