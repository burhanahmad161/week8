#include<iostream>
using namespace std;
int main()
{
    string name;
    int b=0;

    cout<<"Enter string: ";
    cin>>name; 
    
    b= name.length();
    
    for(int i=0 ; i<=b ; i++)
    {
     for(char j='a' ; j<='z' ; j++)
     {
      if(name[i]==j)
      {
           if(j=='z')
           {
           cout<<"a";
           }
           else
           {
           j++;
           cout<<j;
           j--;
           }
      }
     }
    }
}
