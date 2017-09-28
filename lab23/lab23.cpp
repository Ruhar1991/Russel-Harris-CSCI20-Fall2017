/*
Author:         Russel Harris
Date:           9/27/17
Description:    Outputs a random number between user's values after getting values and swapping them.
*/

#include <iostream>
#include <time.h>
using namespace std;

void Swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void Number(int a, int b){
    cout<<"Random number: ";
    srand(time(0));
    a = a-b;
    int number = rand()%a+b;
    cout<<number<<endl;
}

int main(){
    cout<<"Low: "<<endl;
    int low;
    cin>>low;
    cout<<"High: "<<endl;
    int high;
    cin>>high;
    Swap(low, high);
    Number(high, low);
}

/*
Low: 
1
High: 
10
Random number: 4

Low: 
5
High: 
82
Random number: 39


*/