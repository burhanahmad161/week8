#include<iostream>
using namespace std;
int main()
{
   string a;
   cout<<"Enter your statement:";
   getline(cin,a);
   int num=a.length();
   for(int idx=0;idx<=num;idx++)
   {
    if(a[idx]=='a' || a[idx]=='e'||a[idx]=='i'||a[idx]=='o' ||a[idx]=='u')
    a[idx]='\0';
   }
   for(int idx=0;idx<=num;idx++)
   {
    cout<<a[idx];
   }
}
