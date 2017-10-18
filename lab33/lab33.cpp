#include <iostream>
#include <time.h>
using namespace std;

int main(){
    int number = 0;
    
    srand(time(0));
    int randNumber = rand()%49+1;
    
    while(number != randNumber){
        cout<<"Give number 1-50:"<<endl;
        cin>>number;
        if(number < 1 || number > 50){
            cout<<"Number not between 1 and 50! Guess again!"<<endl;
        }
        else{
            for(int i=5;i>=1;i--){
                cout<<i<<"..."<<endl;
            }
            
            if(number > randNumber){
                cout<<"Too High"<<endl;
            }
            else if(number < randNumber){
                cout<<"Too Low"<<endl;
            }
            else{
                cout<<"Just Right"<<endl;
            }
        }
    }
}