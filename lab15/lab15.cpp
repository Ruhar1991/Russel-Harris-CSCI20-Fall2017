/*
Author:         Russel Harris
Date:           9/6/17
Description:    Adlib game where the user inputs parts of speech to have them output in a short story.
*/

#include <iostream>
#include<math.h>
using namespace std;

 
int main()
{
    //Variable declaration
    string ingVerb1 = "verb ending in ING";
    string holiday = "holiday";
    string person1 = "'boy' or 'girl'";
    string place1 = "room in a house";
    string adj1 = "adjective";
    string adj2 = "adjective";
    string animal = "animal";
    string noun1 = "noun";
    string person2 = "family member";
    string verb1 = "verb";
    string edVerb = "verb ending in ED";
    string adj3 = "adjective";
    string verb2 = "verb";
    string noun2 = "plural noun";
    string pastVerb = "past verb";
    string noun3 = "noun";
    string noun4 = "noun";
    string noun5 = "noun";
    string noun6 = "noun";
    string noun7 = "noun";
    string place2 = "hiding place";
    string person3 = "name";
    string person4 = "name";
    string ingVerb2 = "verb ending in ING";
    
    //User gives what strings should be
    cout<<"Input a "<<ingVerb1<<endl;
    cin>>ingVerb1;
    cout<<"Input a "<<holiday<<endl;
    cin>>holiday;
    cout<<"Input either "<<person1<<endl;
    cin>>person1;
    cout<<"Input a "<<place1<<endl;
    cin>>place1;
    cout<<"Input an "<<adj1<<endl;
    cin>>adj1;
    cout<<"Input an "<<adj2<<endl;
    cin>>adj2;
    cout<<"Input an "<<animal<<endl;
    cin>>animal;
    cout<<"Input a "<<noun1<<endl;
    cin>>noun1;
    cout<<"Input a "<<person2<<endl;
    cin>>person2;
    cout<<"Input a "<<verb1<<endl;
    cin>>verb1;
    cout<<"Input a "<<edVerb<<endl;
    cin>>edVerb;
    cout<<"Input an "<<adj3<<endl;
    cin>>adj3;
    cout<<"Input a "<<verb2<<endl;
    cin>>verb2;
    cout<<"Input a "<<noun2<<endl;
    cin>>noun2;
    cout<<"Input a "<<pastVerb<<endl;
    cin>>pastVerb;
    cout<<"Input a "<<noun3<<endl;
    cin>>noun3;
    cout<<"Input a "<<noun4<<endl;
    cin>>noun4;
    cout<<"Input a "<<noun5<<endl;
    cin>>noun5;
    cout<<"Input a "<<noun6<<endl;
    cin>>noun6;
    cout<<"Input a "<<noun7<<endl;
    cin>>noun7;
    cout<<"Input a "<<place2<<endl;
    cin>>place2;
    cout<<"Input a "<<person3<<endl;
    cin>>person3;
    cout<<"Input a "<<person4<<endl;
    cin>>person4;
    cout<<"Input a "<<ingVerb2<<endl;
    cin>>ingVerb2;
    
    // Output
    cout<< "Okay, so I was " << ingVerb1 << "! I'm a kid, I'm supposed to snoop, especially around " << holiday << 
    " time! What " << person1 << " doesn't snoop? I just so happened to be in our " << place1 << 
    ". Normally I'm not up there, it's " << adj1 << " and " << adj2 << ". Plus there are " << animal << 
    "s, yuck! I couldn't help myself! There it was right by my little sister's old " << noun1 << 
    ". Guess " << person2 << " didn't think I would " << verb1 << " it. I " << edVerb <<
    " it, it felt " << adj3 << ". Should I " << verb2 << " it? Looking closer I saw some " << noun2 << 
    ".  I got even closer and " << pastVerb << " a " << noun3 << "! The hidden " << noun4 << 
    " was alive! A yelp came from the " << noun5 << ". I opened the " << noun6 << " and to my surprise a " << noun7 << 
    " was inside! Guess who else was hidden in the " << place2 << "? " << person3 << " and " << person4 << 
    " just knew I was " << ingVerb2 << "!" << endl;
}