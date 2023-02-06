#include<iostream>
using namespace std;
main()
{
    string movie[5]={"Gladiators","Starwars","Terminator","Takinglives","Tombrider"};
    int price=500;
    string name;
    cout<<"Enter movie name:";
    cin>>name;
    for(int idx=0;idx<=5;idx++)
    {
        if(idx%2==0)
        {
          if(name==movie[idx]);
          price=price*5/100;
        }
        else if(idx%2==1)
        {
          price=500;
        }
    }    
    cout<<"Price is:"<<price;
     
}