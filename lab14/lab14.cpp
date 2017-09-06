#include <iostream>
#include<math.h>
using namespace std;

 
int main()
{
    int quarters = 25;
    int dimes = 10;
    int nickles = 5;
    int pennies = 1;
    int remain;
    int amount;
    double total;
    
    cout<<"Input number of cents:"<<endl;
    cin>>amount;
    
    total = amount;
    
    if (amount >= 25)
    {
        remain = amount%quarters;
        quarters = (amount-remain)/quarters;
        amount = remain;
    }
    else
    {
        quarters = 0;
    }
    if (amount >= 10)
    {
        remain = amount%dimes;
        dimes = (amount-remain)/dimes;
        amount = remain;
    }
    else
    {
        dimes = 0;
    }
    if (amount >= 5)
    {
        remain = amount%nickles;
        nickles = (amount-remain)/nickles;
        amount = remain;
    }
    else
    {
        nickles = 0;
    }
    if (amount >= 1)
    {
        remain = amount%pennies;
        pennies = (amount-remain)/pennies;
        amount = remain;
    }
    else
    {
        pennies = 0;
    }
    cout<<"Quarters: "<<quarters<<endl;
    cout<<"Dimes: "<<dimes<<endl;
    cout<<"Nickles: "<<nickles<<endl;
    cout<<"Pennies: "<<pennies<<endl;
    cout<<"Total: $"<<floor((total/100)*100+0.5)/100<<endl;
    cout<<"Total after fee: $"<<floor(((total*0.81)/100)*100+0.5)/100<<endl;
}