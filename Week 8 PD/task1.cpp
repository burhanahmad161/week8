#include<iostream>
using namespace std;
main()
{
    string fruit[4]={"peach","apple","guava","watermelon"};
    int price[4]={60,70,40,30};
    string name;
    int quantity;
    cout<<"Enter the fruit you want to buy:";
    cin>>name;
    cout<<"Enter the required quantity:";
    cin>>quantity;
    int rate;
    if(name=="peach")
    {
        rate=price[0]*quantity;
     cout<<"Your bill is:"<<rate;   
    }
    else if(name=="apple")
    {
        rate=price[1]*quantity;
       cout<<"Your bill is:"<<rate;
    }
        else if(name=="guava")
    {
        rate=price[2]*quantity;
        cout<<"Your bill is:"<<rate;
    }   
        else if(name=="watermelon")
    {
        rate=price[3]*quantity;
        cout<<"Your bill is:"<<rate;   
    }
}