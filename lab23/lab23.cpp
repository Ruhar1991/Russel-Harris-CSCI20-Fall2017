/*
Author:         Russel Harris
Date:           9/27/17
Description:    Outputs a random number between user's values after getting values and swapping them.
*/
int low;
int high;
#include <iostream>
#include <time.h>
using namespace std;

void Swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void Number(int c, int d){
    srand(time(0));
    int number = ((rand()%c-d) + 1) + c;
    cout<<"Random number: ";
    cout<<number<<endl;
}

int main(){
    cout<<"Low: "<<endl;
    cin>>high;
    cout<<"High: "<<endl;
    cin>>low;
    Swap(low, high);
    Number(low, high);
}

/*
Chapter 10.4 for reference variables
*/