#include<iostream>
using namespace std;
int main()
{
    string name;
    char letter;
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter a letter:";
    cin>>letter;
    int counter=name.length();
    if(name[counter-1]==letter) 
    cout<<"true";
    else
    cout<<"False";
}