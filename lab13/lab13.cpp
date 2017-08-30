#include <iostream>
using namespace std;
 
int main()
{
    int currentPop = 325755986;

    float birthPerSec = 8;
    float deathPerSec = -12;
    float migrantPerSec = 33;
    int years;
    int newPop;
    
    float birthPerMin = 60/birthPerSec;
    float deathPerMin = 60/deathPerSec;
    float migrantPerMin = 60/migrantPerSec;

    int birthPerYear = 525600*birthPerMin;
    int deathPerYear = 525600*deathPerMin;
    int migrantPerYear = 525600*migrantPerMin;
    
    cout<<"What year do you want to know the population of?"<<endl;
    cin>>years;
    
    years = years - 2017;
    
    newPop = currentPop + ((years)*(birthPerYear+deathPerYear+migrantPerYear));
    
    cout<<"The population in "<<years+2017<<", which is in "<<years<<" years, will be "<<newPop<<endl;
    
}
 