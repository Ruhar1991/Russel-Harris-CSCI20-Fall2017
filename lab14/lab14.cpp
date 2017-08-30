#include <iostream>
#include <math.h>
using namespace std;

 
int main()
{
    float quarters = 0;
    float dimes = 0;
    float nickles = 0;
    float pennies = 0;
    float amount = 0;
    
    cout<<"Input number of cents:"<<endl;
    cin>>amount;
    
    if (amount >= 0.25)
    {
        quarters = floor((amount/0.25)/100);
        
        amount = amount - (quarters * 25);
    }

    if (amount >= 10)
    {
        dimes = floor((amount/0.10)/100);
        
        amount = amount - (dimes * 10);
    }
    
    if (amount >= 5)
    {
        nickles = floor((amount/0.05)/100);
        
        amount = amount - (nickles * 5);
    }
    if (amount >= 1)
    {
        pennies = floor((amount/0.01)/100);
        
        amount = amount - (pennies * 1);
    }
    
    cout<<"_______________________"<<endl;
    cout<<"Quarters: "<<quarters<<endl;
    cout<<"Dimes: "<<dimes<<endl;
    cout<<"nickles: "<<nickles<<endl;
    cout<<"pennies: "<<pennies<<endl;
}