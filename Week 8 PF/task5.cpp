#include<iostream>
using namespace std;
int main()
{
    int size;
    int sum=0;
    cout<<"Enter size of array:";
    cin>>size;
    int numbers[size];
    int smaller;
   for(int n=0;n<size;n++)
   {
    cout<<"Enter a number:";
    cin>>numbers[n];
   }
    smaller=numbers[0];
   for(int n=0;n<size;n++)
   {
    if(numbers[n]<=smaller)
    {
        smaller=numbers[n];
    } 
   }
    cout<<"Smallest number is:"<<smaller<<endl;
}

