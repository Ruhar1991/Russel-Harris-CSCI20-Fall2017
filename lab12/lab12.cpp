//Created By: Russel Harris
//Created On: 8/24/2016
 
 #include <iostream>
 using namespace std;
 
int main()
{
    int choice = 9;
    int confirm = 1;
    int stored;
    bool been_one = false;
    bool wrong_answer = false;
    
    do
    {
        if(confirm != 1)
        {
            cout<<"Your input wasn't an option. Choose an actual option, Einstein."<<endl;
        }
        cout<<"Before we begin, you should know that the ASCII art you're about to see is very large.\n"
              "Please make this text area as large as you can make it.\n"
              "Press 1 and enter to confirm that you've expanded the text area."<<endl;
    cin>>confirm;
    }while(confirm != 1);
    
    do
    {
        if(wrong_answer == true)
        {
            cout<<"Your input wasn't an option. Choose an actual option, Einstein."<<endl;
            wrong_answer = false;
            choice = stored;
        }
        if(confirm == 1 && been_one == false)
        {
            cout<<"Press 1 and enter to see Leonardo da Vinci's Mona Lisa.\n"
                  "Press 2 and enter to see me with a beard."<<endl;
            cin>>choice;
        }
            if(choice == 1)
            {
                if(been_one == false)
                {
                    been_one = true;
                }
                cout<<"1? Hmm...There must have been some kind of mistake.\n"
                      "Surely you wanted to see me with a beard, not some old painting.\n"
                      "Press 2 to see me with a beard."<<endl;
                stored = choice;
                cin>>choice;
            }
            if(choice == 2)
            {
                cout<<"                                          `.://+oooooo+:.                                                            \n"        
                      "                                      -/osssssssooossyyhhho.                                                         \n"        
                      "                                    -+++/+++++++oo++oysossyho-                                                       \n"        
                      "                                 ./+/+syhhyyyyyssso///+ssooosss:`                                                    \n"        
                      "                                :+/oyhhyyyyyyhyyhhyyysso++o++oosyo-                                                  \n"        
                      "                               //+syyyyyyyyyyyyysssssyhhhysso//+ooy+                                                 \n"        
                      "                              :+oyyhhhyyyyyyyyyyyyyhhysssyhhhho//+oso                                                \n"        
                      "                             .yhhhhhhdddddddddhhhhhyyyyhyysyhhhy///+oo                                               \n"        
                      "                             -hhhddddhs+/:----:/osyhdhhyyyhhysyhh+///o+                                              \n"        
                      "                             +hddho:.......`````````-/ohhhhyhhyshh+///s-                                             \n"        
                      "                             smd+--.......---::::--.....+hdhhyhhysy+///+                                             \n"        
                      "                             dh/://////:--:+osssyssso+/:--+dddhyhhyss+/+                                             \n"        
                      "                             dsosyhhhhy+...:syyhhyysssss/---sdddhyhhss+s.                                            \n"        
                      "                             shhhddddddo```..:/o++++/+/:-.....+dddhhhyss+                                            \n"        
                      "                             oddddyyssy/``````.-:///-.``````...-yddhyhssh`                                           \n"        
                      "                             `+dyyso/::.``...``````````````.....:ohddhysh`                                           \n"        
                      "                              `y:-..--.````....``````````.....--:ohddddyh`                                           \n"        
                      "                              .s--...+:-..-----.```````....-----/ooo+sddd`                                           \n"        
                      "                              .s/--.-shyssyys+:``.```....------:+so:::ymd`                                           \n"        
                      "                              .yo/:-:shhhysoso/-.`......------:/osyoshdh:                                            \n"        
                      "                              .dhooosyyyyyyssyyso+/:-...---:::/ossyyhhd-                                             \n"        
                      "                               hhyysyysyyyyyyyssssooo+/::///++ossyyyhho                                              \n"        
                      "                              -ysyhddddhhdhddhhyysssyyso++o++oyyyyhhhh`                                              \n"        
                      "                             `yyhhdddddyoyyhddddhhhhhhhyyssoosyyyhhhhh`                                              \n"        
                      "                             +hhhdmmddhsoyyhhdhhhhhyhhyyyyyyyyyhhhhhhy`                                              \n"        
                      "                             ohddmmmddhysysyshyssyyyyyyyyhhyhhyhhhhhhh`                                              \n"        
                      "                             -ddddmmdhyysssssosoossyyyyhhhhhhhhhhhhdhy.                                              \n"        
                      "                            `.dddddhyyyssosssssyyyyyyyyhhhhhhhhhddddhhysssoo/-`                                      \n"        
                      "                           +ddhdhhhhhhyyyshyhyyhyyyyyhhhdhhdhhddddddhyhhhhddhss/.                                    \n"        
                      "                          +hhddddhhhhhhhddddhhyyhhhhdhhhdhhhhddddhhhs/odhhddmhssso:                                  \n"        
                      "                         oyddddddhhhhdhhdddhhhhhhhhhhhdyyhyhhhhdhhhy/-.:hhhhdmhsssso:-`                              \n"        
                      "                       `+symdddhhhhhhhhdddhhhhhhddddhddddhhhhhhhhhhs:-.:hhhhhdmdyssssso-                             \n"        
                      "                      -sssydddddddhdhyhhhdddhhhddhhdhhdhddddddddhyy+--:shhhhhhdmmhysssss++++:.````                   \n"        
                      "             `.:----:syyyyshdmmdddhdhhhhhddddhdddhhdddddddddddhyss/--/oshhhhhhhmmmysssssssssssyysso/:.               \n"        
                      "          `/sssyyssyyyhhhyhyhmmmmdmdddddddddddddddddddddmdddyysoo/:-+ooyddhhhhhhddysyyssyyyyyyyyyyyyys++/`           \n"        
                      "        ./syyyyyyyyyyyhhddhdhhmmmmmmmdddddmmmdmmdddddddmdddyo+///--+oooyddddhhhyyysyysyyyyyyyyyyyysyyysssso:.`       \n"        
                      "     .+yyyyyyhhhhhhhhhhhhdmmmhydmmmmmmmmmmmmmmmmmmmmmmddddhs::::::oooooyddddhyssysyhyyyyyyyyyyyyyssyyyyyyyyyss+-     \n"        
                      "   -syyyyyyyyyyyyyyyyyyhhhdmmmhyyhdmmmmmmmmmmmmmmmddddddhhy+-.-/+oooooshyohhhyhyyyyyyyyyyyyyyyyyyyyyhhyyyyyssssso//. \n"        
                      "-syyyyyyyhyyyyhhhyyhhhhyyhhhdmmmhyyhdmmmmmmmmmmmmmmdmddhyy+//+oooooooshddysyhyyyhyyyyhyyyyyhhyyyyyyhhyyyysssssssssss/\n"<<endl;  
                      cout<<"Thanks for your time, user."<<endl;
                      return 0;
            }
            //If choice given wasn't an option
            if((choice > 2 || choice < 1)||(choice == 1 && been_one == true))
            {
                wrong_answer = true;
            }
        }while(wrong_answer == true);
}