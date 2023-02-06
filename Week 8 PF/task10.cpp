#include<iostream>
using namespace std;
int main()
{
     int size;
     cout<<"Enter numbers you want to enter:";
     cin>>size;
     int numbers[size];
     int side_number[2];
     cout<<"Enter a starting number:";
     cin>>side_number[0];
    cout<<"Enter a ending number:";
     cin>>side_number[1];
     for(int idx=0;idx<size;idx++)
     {
        cout<<"Enter number:";
        cin>>numbers[idx];
     }
     cout<<side_number[0];
     for(int idx=0;idx<size;idx++)
     {
     cout<<numbers[idx];
     }
     cout<<side_number[1];
    
}