/*
Author:         Russel Harris
Date:           10/16/17
Description:    A program to determine the best cell phone plan based on data usage, phone lines, and tablets. 
*/

#include <iostream>
using namespace std;


int main(){
    //Declaring variables, initializing some
    int GB;
    int phones;
    int tablets;
    int ATTUnlimPlan = 0;
    int ATTFamPlan = 0;
    int verizonUnlim = 0;
    int sprintUnlim = 0;
    int sprint2GB = 0;
    string chosen;
    
    //Output and input
    cout<<"How many GBs will you use per month?"<<endl;
    cin>>GB;
    cout<<"How many phone lines do you need?"<<endl;
    cin>>phones;
    cout<<"How many tablets do you need?"<<endl;
    cin>>tablets;
    
    //PHONES 
    for(int i = 0; i < phones; i++){
        //If one phone
        if(i == 0){
            //ATTUnlimPlan starts at 60
            ATTUnlimPlan = 60;
            //ATTUnlimPlan costs additional 20 per phone
            ATTUnlimPlan += 20;
            //ATTFamPlan += 20 every line
            ATTFamPlan += 20;
            //verizonUnlim starts at 80
            verizonUnlim = 80;
            //verizonUnlim costs additional 20 per phone
            verizonUnlim += 20;
            //sprintUnlim starts at 60
            sprintUnlim += 60;
            //sprintUnlim costs additional 30 per phone
            sprintUnlim += 30;
            //Sprint2GB += 40 per phone
            sprint2GB = 40;
        }
        //If two phones
        else if(i == 1){
            //New price is 115 [reset]
            ATTUnlimPlan = 115;
            //ATTUnlimPlan costs additional 20 per phone, and this is two phones
            ATTUnlimPlan += 40;
            //ATTFamPlan += 20 every line
            ATTFamPlan += 20;
            //New price is 110 [reset]
            verizonUnlim = 110;
            //verizonUnlim costs additional 20 per phone, and this is two phones
            verizonUnlim += 40;
            //sprintUnlim adds 40 per phone
            sprintUnlim += 40;
            //sprintUnlim costs additional 30 per phone
            sprintUnlim += 30;
            //Sprint2GB += 40 per phone
            sprint2GB += 40;
        }
        //If three or more phones
        else if(i >= 2){
            //ATTUnlimPlan costs additional 20 per phone but only up to 10 phones
            if(i <= 9){
                ATTUnlimPlan += 20;
            }
            else{
                //Impossibly high if more than 10 phones
                ATTUnlimPlan = 999999;
            }
            //ATTFamPlan += 20 every line
            ATTFamPlan += 20;
            //verizonUnlim costs additional 20 per phone
            verizonUnlim += 20;
            //sprintUnlim costs additional 30 per phone
            sprintUnlim += 30;
            //Sprint2GB += 40 per phone
            sprint2GB += 40;
        }
    }
    
    //TABLETS
    for(int i = 0; i < tablets; i++){
        //Impossibly high because no tablets offered
        sprint2GB = 999999;
        ATTUnlimPlan += 10;
        ATTFamPlan += 10;
        verizonUnlim += 10;
    }
    
    //GB
    if(GB >= 2){
        sprint2GB = 999999;
    }
    if(GB <= 1){
        ATTFamPlan += 30;
    }
    else if(GB <= 3){
        ATTFamPlan += 40;
    }
    else if(GB <= 6){
        ATTFamPlan += 60;
    }
    else if(GB <= 10){
        ATTFamPlan += 80;
    }
    else if(GB <= 16){
        ATTFamPlan += 90;
    }
    else if(GB <= 25){
        ATTFamPlan += 110;
    }
    else{
        //Impossibly high if too many gigs for plan
        ATTFamPlan = 999999;
    }
    
    //Checks lowest price
    if(ATTUnlimPlan < ATTFamPlan && ATTUnlimPlan < verizonUnlim &&
    ATTUnlimPlan < sprintUnlim && ATTUnlimPlan < sprint2GB){
        cout<<"The best plan for you is the ATT Unlimited Plan"<<endl;
        cout<<"Your monthly bill will be $"<<ATTUnlimPlan<<"."<<endl;
    }
    if(ATTFamPlan < ATTUnlimPlan && ATTFamPlan < verizonUnlim &&
    ATTFamPlan < sprintUnlim && ATTFamPlan < sprint2GB){
        cout<<"The best plan for you is the ATT Family Plan"<<endl;
        cout<<"Your monthly bill will be $"<<ATTFamPlan<<"."<<endl;
    }
    if(verizonUnlim < ATTFamPlan && verizonUnlim < ATTUnlimPlan &&
    verizonUnlim < sprintUnlim && verizonUnlim < sprint2GB){
        cout<<"The best plan for you is the Verizon Unlimited Plan"<<endl;
        cout<<"Your monthly bill will be $"<<verizonUnlim<<"."<<endl;
    }
    if(sprintUnlim < ATTFamPlan && sprintUnlim < verizonUnlim &&
    sprintUnlim < ATTUnlimPlan && sprintUnlim < sprint2GB){
        cout<<"The best plan for you is the Sprint Unlimited Plan"<<endl;
        cout<<"Your monthly bill will be $"<<sprintUnlim<<"."<<endl;
    }
    if(sprint2GB < ATTFamPlan && sprint2GB < verizonUnlim &&
    sprint2GB < sprintUnlim && sprint2GB < ATTUnlimPlan){
        cout<<"The best plan for you is the Sprint 2GB Plan"<<endl;
        cout<<"Your monthly bill will be $"<<sprint2GB<<"."<<endl;
    }
}

/*
Output:

User #1:
The best plan for you is the ATT Family Plan
Your monthly bill will be $100.

User #2:
The best plan for you is the ATT Family Plan
Your monthly bill will be $160.

User #3:
The best plan for you is the Sprint 2GB Plan
Your monthly bill will be $40.
*/