#include<iostream>
using namespace std;
main()
{
    int num;
    cout<<"Enter number you want to enter:";
    cin>>num;
    for(int idx=0;idx<num;idx++)
    {
        string name[num];
        cout<<"Enter colour:";
        cin>>name[0];
    }
    int colour=num*2;
    int change=(num-1)*1;
    int final=colour+change;
    cout<<final;


}