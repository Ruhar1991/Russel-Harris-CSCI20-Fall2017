//Create a struct for holding a stock portfolio.  It should hold the following information about stocks: stock name, sector, current share price, and number of shares owned.  The stock sector is a single character which specifies the type of company, according to the following code: 

//A - Auto Companies

//C - Consumer Products

//F - Financial/Insurance

//I - Industrial

//T - Technology.

#include <iostream>
#include <string>
using namespace std;


struct Stock
{
    string name;
    char sector;
    double currentSharePrice;
    double numberSharesOwned;
};


 
int main()
{
    Stock stock1;
    Stock stock2;
    Stock stock3;
    Stock stock4;
    
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
    cout<<"Stock Name | No of Shares | Current Value | Total Value"<<endl;
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