/*
Author:         Russel Harris
Date:           9/6/17
Description:    Struct-using program for holding and outputting stock portfolio information.
*/
#include <iostream>
#include <string>
using namespace std;



//Struct for for stock data
struct Stock
{
    string name;
    char sector;
    double currentSharePrice;
    int numberSharesOwned;
};


 
int main()
{
    //Different stocks using Stock struct
    Stock stock1;
    Stock stock2;
    Stock stock3;
    Stock stock4;
    
    //Getting user input for each of the 4 stocks
    cout<<"Enter data for stock1:"<<endl;
    cin>>stock1.name;
    cin>>stock1.sector;
    cin>>stock1.currentSharePrice;
    cin>>stock1.numberSharesOwned;
    cout<<"Enter data for stock2:"<<endl;
    cin>>stock2.name;
    cin>>stock2.sector;
    cin>>stock2.currentSharePrice;
    cin>>stock2.numberSharesOwned;
    cout<<"Enter data for stock3:"<<endl;
    cin>>stock3.name;
    cin>>stock3.sector;
    cin>>stock3.currentSharePrice;
    cin>>stock3.numberSharesOwned;
    cout<<"Enter data for stock4:"<<endl;
    cin>>stock4.name;
    cin>>stock4.sector;
    cin>>stock4.currentSharePrice;
    cin>>stock4.numberSharesOwned;
    
    
    //Output data aquired from user, but neatly
    cout<<"\nStock Name | No of Shares | Current Value | Total Value"<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<stock1.name<<"       |     "<<stock1.currentSharePrice<<"      |      "
    <<stock1.numberSharesOwned<<"       |     "<<stock1.currentSharePrice*stock1.numberSharesOwned<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<stock2.name<<"       |     "<<stock2.currentSharePrice<<"      |      "
    <<stock2.numberSharesOwned<<"       |     "<<stock2.currentSharePrice*stock2.numberSharesOwned<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<stock3.name<<"       |     "<<stock3.currentSharePrice<<"      |      "
    <<stock3.numberSharesOwned<<"       |     "<<stock3.currentSharePrice*stock3.numberSharesOwned<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<stock4.name<<"       |     "<<stock4.currentSharePrice<<"      |      "
    <<stock4.numberSharesOwned<<"       |     "<<stock4.currentSharePrice*stock4.numberSharesOwned<<endl;
    cout<<"\nTotal Portfolio: $"<<(stock1.currentSharePrice*stock1.numberSharesOwned)+(stock2.currentSharePrice*stock2.numberSharesOwned)+(stock3.currentSharePrice*stock3.numberSharesOwned)+(stock4.currentSharePrice*stock4.numberSharesOwned)<<endl;
    
}