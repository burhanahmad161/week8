#include<iostream>
using namespace std;
int main()
{
    int size;
    int sum=0;
    cout<<"Enter size of array:";
    cin>>size;
    int numbers[size];
   for(int idx=0;idx<size;idx++)
   {
    cout<<"Enter a number:";
    cin>>numbers[idx];
    sum=sum+numbers[idx];
   }
    cout<<"Sum is:"<<sum<<endl;
    int average=sum/size;
    cout<<"Average is:"<<average;
}
