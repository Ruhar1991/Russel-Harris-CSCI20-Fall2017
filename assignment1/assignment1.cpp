/*
Author:         Russel Harris
Date:           9/28/17
Description:    Output a person’s health statistics based on body weight in pounds, age in months, and height in feet and inches. 
*/


#include <iostream>
#include <stdlib.h>
using namespace std;
    
    //STRUCT FOR HEIGHT
    struct Height
    {
        int heightInches;
        int heightFeet;
        float heightJustInches;
    };
    
int main()
{
    //VARIABLE DECLARATION
    string firstName;
    string lastName;
    string sex;
    string levelExercise;
    float BMRHB;
    float BMRMS;
    float dailyCalHB;
    float BMI;
    float weightPounds;
    float ageYears;
    double skittles = 4.28;
    
    //CREATING AN OBJECT OF STRUCT HEIGHT
    Height input;
    
    //GETTING FIRST AND LAST NAME FROM USER
    cout<<"What is your first name?"<<endl;
    cin>>firstName;
    cout<<"What is your last name?"<<endl;
    cin>>lastName;
    
    //GETTING MALE OR FEMALE FROM USER, LOOP AND ASK AGAIN WITH AN EXPLANATION IF USER GIVES INCORRECT INPUT    
    do
    {
        cout<<"Are you 'male' or 'female'?"<<endl;
        cin>>sex;
        if(sex != "male" && sex != "female")
        {
            cout<<"Your sex has to either be 'male' or 'female'"<<endl;
        }
            
    }
    while(sex != "male" && sex != "female");

    //GET WEIGHT IN POUNDS FROM USER
    cout<<"How many pounds do you weigh?"<<endl;
    cin>>weightPounds;

    //GET HEIGHT IN FEET AND INCHES FROM USER USING OBJECT INPUT
    cout<<"How tall are you in feet and inches? [type number in feet, a space, and number in inches]"<<endl;
    cin>>input.heightFeet>>input.heightInches;

    //GET AGE IN YEARS FROM USER
    cout<<"How many years old are you?"<<endl;
    cin>>ageYears;
    
    //USE HEIGHT IN FEET AND INCHES TO ALSO GET HEIGHT IN JUST INCHES FOR LATER MATH IN BMR FORMULAS
    input.heightJustInches = input.heightFeet * 12 + input.heightInches;
    
    //HARRIS-BEN FORMULA FOR BMR
    if(sex == "male")
    {
        BMRHB = 66 + (6.23 * weightPounds) + (12.7 * input.heightJustInches) - (6.8 * ageYears);
    }
    if(sex == "female")
    {
        BMRHB  = 655 + (4.35 * weightPounds) + (4.7 * input.heightJustInches) - (4.7 * ageYears);
    }
    //MIFFLIN-ST FORMULA
    if(sex == "male")
    {
        BMRMS = (10 * (weightPounds / 2.2)) + (6.25 * (input.heightJustInches * 2.54)) - (5 * ageYears) + 5;
    }
    if(sex == "female")
    {
        BMRMS = (10 * (weightPounds / 2.2)) + (6.25 * (input.heightJustInches * 2.54)) - (5 * ageYears) - 161;
    }
    
    //GET LEVEL OF EXERCISE FROM USER AND LOOP BACK WITH A WARNING IF THEY GIVE INCORRECT INPUT
    do
    {
        cout<<"Is your level of exercise 'none', 'little', 'light', 'moderate', heavy', or 'extreme'?"<<endl;
        cin>>levelExercise;
        if(levelExercise != "none" && levelExercise != "little" && levelExercise != "light" && levelExercise != "moderate" 
        && levelExercise != "heavy" && levelExercise != "extreme");
        {
            cout<<"Your level of exercise has to be 'none', 'little', 'light', 'moderate', heavy', or 'extreme'."<<endl;
        }
    }
    while(levelExercise != "none" && levelExercise != "little" && levelExercise != "light" && levelExercise != "moderate" 
    && levelExercise != "heavy" && levelExercise != "extreme");
    
    //HARRIS-BEN FORMULA BMR CALCULATED WITH LEVEL OF EXERCISE
    if(levelExercise == "none")
    {
        dailyCalHB = BMRHB;
    }
    if(levelExercise == "little")
    {
        dailyCalHB = BMRHB * 1.2;
    }
    if(levelExercise == "light")
    {
        dailyCalHB = BMRHB * 1.375;
    }
    if(levelExercise == "moderate")
    {
        dailyCalHB = BMRHB * 1.55;
    }
    if(levelExercise == "heavy")
    {
        dailyCalHB = BMRHB * 1.725;
    }
    if(levelExercise == "extreme")
    {
        dailyCalHB = BMRHB * 1.9;
    }
    
    //BMI CALCULATED WITH BMI FORMULA AND EXISTING DATA
    BMI = 703*weightPounds/(input.heightJustInches*input.heightJustInches);
    
    //SKITTLES EQUALS ITS AMOUNT OF CALORIES, SO DIVIDE HARRIS-BEN CALORIES SKITTLES TO GET THE NUMBER OF SKITTLES TO EAT
    skittles = dailyCalHB/skittles;
    
    //NEATLY PRESENT INFO TO USER
    cout<<"\n************************************************"<<endl;
    cout<<"|-----------------------------------------------"<<endl;
    cout<<"| Name             | "<<firstName<<" "<<lastName<<endl;
    cout<<"|------------------+----------------------------"<<endl;
    cout<<"| Age              | "<<ageYears<<" years old"<<endl;
    cout<<"|------------------+----------------------------"<<endl;
    cout<<"| Height           | "<<input.heightFeet<<"ft "<<input.heightInches<<"in"<<endl;
    cout<<"|------------------+----------------------------"<<endl;
    cout<<"| Weight           | "<<weightPounds<<"lbs"<<endl;
    cout<<"|------------------+----------------------------"<<endl;
    cout<<"| Daily kcals (HB) | "<<dailyCalHB<<" (Exercise: "<<levelExercise<<")"<<endl;
    cout<<"|------------------+----------------------------"<<endl;
    cout<<"| Daily kcals (MS) | "<<BMRMS<<endl;
    cout<<"|------------------+----------------------------"<<endl;
    cout<<"| BMI              | "<<BMI<<endl;
    cout<<"|------------------+----------------------------"<<endl;
    cout<<"| Skittles/day (HB)| "<<skittles<<endl;
    cout<<"|-----------------------------------------------"<<endl;
    cout<<"************************************************"<<endl;
    
    return 0;
}