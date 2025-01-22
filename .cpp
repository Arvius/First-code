#include <iostream>

using namespace std;

int main()
{
    string name, course, contact, address;
    char choice, section;
    int mode, year;
    double tuition, cash, twoinstallment, threeinstallment;
    bool repeat = true;


    cout<< "======================================================================" << endl;
    cout<< "*********************Enrollment System***************************" << endl;
    cout<< "======================================================================" << endl;

    cout<< " PRESS 1 IF ENROLLMENT!" << endl;
    cout<< " PRESS 2 IF MODE OF PAYMENT!" << endl;
    cout<< " PRESS 3 IF EXIT!" << endl;
    cout<< "Enter your choice: ";
    cin>> choice;

    switch(choice)
    {
    case '1':
        cout<< "Enter your name:"<< endl;
        cin>> name;
        
        cout<< "Enter your contact number: " << endl;
        cin>> contact;


        cout<< "Enter your address:"<< address << endl;
        getline(cin, address);

        cout<< "BSCS, BSBA, BSCRIM, BSE, BEED, BSTOUR, BSA, BSPSYCH" << endl;
        cout<< "Enter your course: " << endl;
        cin>> course;

        cout<< "Enter your year: " << endl;
        cin>> year;


        cout<< "Choose your section: " << endl;
        cout<< "A, B, C, D, E, F, G" << endl;
        cin>> section;

        if(section == 'A' || section == 'a') {
        cout<< "You're Section Alpha"<< endl;
    }else if (section == 'B'|| section == 'b'){
        cout<< "You're Section Bravo"<< endl;
    }else if (section == 'C' || section == 'c'){
        cout<< "You're Section Charlie"<< endl;
    }else if (section == 'D' || section == 'd'){
        cout<< "You're Section Delta"<< endl;
    }else if (section == 'E' || section == 'e'){
        cout<< "You're Section Echo"<< endl;
    }else if (section == 'F' || section == 'f'){
        cout<< "You're Section Foxtrot"<< endl;
    }else if (section == 'G' || section == 'g'){
        cout<< "You're Section Golf"<< endl;
    }else {
        cout<< "Invalid Section"; 
    }
        break;

    case '2':
        cout<< "PLEASE SELECT THE MODE OF PAYMENT: " << endl;
        cout<< "PRESS [1] FOR CASH........................ 10% DISCOUNT" << endl;
        cout<< "PRESS [2] FOR TWO INSTALLMENTS............. 1% INTEREST" << endl;
        cout<< "PRESS [3] FOR THREE INSTALLMENTS........... 10% INTEREST" << endl;
        cout<< "Enter Mode of Payment: ";
        cin>> mode;

        cash=tuition * 0.10;
        twoinstallment=tuition * 0.01;
        threeinstallment=tuition * 0.10;

        if(mode == 1)
        {
            cout<< "Your Tuition Fee is: " << cash << endl;
        }
        else if(mode == 2)
        {
            cout<< "Your Tuition Fee is: " << twoinstallment << endl;
        }
        else if(mode == 3)
        {
            cout<< "Your Tuition Fee is: " << threeinstallment << endl;
        }
        else cout<< "Invalid Mode of Payment!" << endl;
        break;

    default:
        cout<< "Invalid Choice!" << endl;
        break;
    }

    cout<< "Would you like to Re enroll? Y/yes N/no: ";
    cin>> choice;
    
    if (choice == 'N' || choice == 'n'){
        cout<< "THANK YOU FOR ENROLLING!" << endl;
        repeat = false;
    }


    return 0;
}  