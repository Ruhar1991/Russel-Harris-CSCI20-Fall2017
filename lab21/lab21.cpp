/*
Author:         Russel Harris
Date:           9/20/17
Description:    Outputs info about windchills based on temperature and starting wind speed inputs.
*/
#include <iostream>
#include <math.h>
using namespace std;


//DECLARE VARIABLES
double temp;
double startingWindSpeed;
double oldStyleWindChill;
double newStyleWindChill;
double difference;

int main(){
    
    //GET TEMP INPUT
    cout<<"Enter temperature in degrees F:"<<endl;
    cin>>temp;
    
    //GET STARTING WIND SPEED INPUT
    cout<<"Enter starting wind speed in mph"<<endl;
    cin>>startingWindSpeed;
    
    //OLD AND NEW FORMULAS
    oldStyleWindChill = 0.081 * (3.71 * (sqrt(startingWindSpeed)) + 5.81 - 0.25 * startingWindSpeed) * (temp - 91.4) + 91.4;
    newStyleWindChill = 35.74 + 0.6215 * temp - 35.75 * (pow(startingWindSpeed, 0.16)) + 0.4275 * temp * pow(startingWindSpeed, 0.16);
    
    //MAKES DIFFERENCE ALWAYS POSITIVE
    difference = oldStyleWindChill - newStyleWindChill;
    if(oldStyleWindChill < newStyleWindChill){
        difference *= -1;
    }
    
    //OUTPUTS STARTING WIND SPEED, OLD FORMULA, NEW FORMULA, AND DIFFERENCE
    cout<<"\n********************************************"<<endl;
    cout<<"|-------------------------------------------"<<endl;
    cout<<"| Wind Speed   | "<<startingWindSpeed<<" miles per hour"<<endl;
    cout<<"|--------------+----------------------------"<<endl;
    cout<<"| Old formula  | "<<oldStyleWindChill<<" degrees F"<<endl;
    cout<<"|--------------+----------------------------"<<endl;
    cout<<"| New formula  | "<<newStyleWindChill<<" degrees F"<<endl;
    cout<<"|--------------+----------------------------"<<endl;
    cout<<"| Difference   | "<<difference<<" degrees F"<<endl;
    cout<<"|-------------------------------------------"<<endl;
    cout<<"********************************************"<<endl;
}

//EXAMPLE RUNS
/*
Enter temperature in degrees F:
30
Enter starting wind speed in mph
4

********************************************
|-------------------------------------------
| Wind Speed   | 4 miles per hour
|--------------+----------------------------
| Old formula  | 30.5753 degrees F
|--------------+----------------------------
| New formula  | 25.767 degrees F
|--------------+----------------------------
| Difference   | 4.8083 degrees F
|-------------------------------------------
********************************************

Enter temperature in degrees F:
39.25
Enter starting wind speed in mph
10

********************************************
|-------------------------------------------
| Wind Speed   | 10 miles per hour
|--------------+----------------------------
| Old formula  | 27.8601 degrees F
|--------------+----------------------------
| New formula  | 32.713 degrees F
|--------------+----------------------------
| Difference   | 4.85286 degrees F
|-------------------------------------------
********************************************

Enter temperature in degrees F:
100
Enter starting wind speed in mph
2

********************************************
|-------------------------------------------
| Wind Speed   | 2 miles per hour
|--------------+----------------------------
| Old formula  | 98.7538 degrees F
|--------------+----------------------------
| New formula  | 105.711 degrees F
|--------------+----------------------------
| Difference   | 6.95719 degrees F
|-------------------------------------------
********************************************
*/