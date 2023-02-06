#include<iostream>
using namespace std;
int main()
{
    int size;
    int num;
    bool flag=false;
    cout<<"Enter size of array:";
    cin>>size;
    int numbers[size];
   for(int idx=0;idx<size;idx++)
   {
    cout<<"Enter a number:";
    cin>>numbers[idx];
   }
    cout<<"Enter the number you want to find:";
    cin>>num;
    for(int idx=0;idx<size;idx++)
    {
       if(numbers[idx]==num)
       {
        flag=true;
       } 
    }
    if(flag)
    cout<<"Number exists";
    else
    cout<<"Number does not exist";
}