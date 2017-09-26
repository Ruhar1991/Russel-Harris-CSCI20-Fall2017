/*
Author:         Russel Harris
Date:           9/25/17
Description:    Outputs a random number between 1 and 100.
*/

#include <iostream>
#include <time.h>
using namespace std;

//Function for random number with random seed, random number, and outputs
void Number(){
    cout<<"Random number: ";
    srand(time(0));
    int number = rand()%99+1;
    cout<<number<<endl;
}

int main(){
    //Calling the function
    Number();
}
