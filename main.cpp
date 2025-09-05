//Rene Rodriguez 09/05/2025 Lab Activities: Arrays & Vectors
//Challenge 1: Date Utilities with const Arrays
#include<iostream>
using namespace std;
#include <string>
#include <array>
#include <limits>
//Original prompt in function for repeatability
void promptUser(){
    cout << "What would you like to do?" << endl;
    cout << "\t 1. Get Day Name by Number (1-7)" << endl;
    cout << "\t 2. Get Month Name by Number (1-12)" << endl;
    cout << "\t 3. Quit" << endl;
}
//Verifies userInput and returns an int when called.
int getInput(){
    int input;
    cin >> input;
    while(input < 0 || cin.fail()){
        if (cin.fail()) {
            cout << "Invalid input, try again.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        }
        if(input < 0){
            cout << "Enter a positive number" << endl; 
        }
        cin >> input;

    }
    cout << "You entered " << input << endl;
    return input;
}
int main()
{
    //Array for days of the week
    const std::string DAY_OF_THE_WEEK[] = {
        "Sunday",
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday"
    };
    //Array for Months
    const std::string MONTH[] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    //Variables declared
    int userInput;
    int dayNum;
    int monthNum;
    //Do while statement that repeats until user inputs 3
    do{
        promptUser();
        userInput = getInput();
        //Switch statement that has 3 cases using userInput as condition
        switch(userInput) {
            case 1:
                cout << "You chose Get Day Name by Number" << endl;
                //Do while statement that will continue if user enters an int
                //less than 1 or greater than 7
                do{
                    cout << "Enter a day number (1-7)" << endl;
                    dayNum = getInput();
                    if (dayNum < 1 || dayNum > 7){
                        cout << "Invalid Day" << endl;
                    } else {
                        cout << "You entered: " << dayNum << endl;
                        cout << DAY_OF_THE_WEEK[dayNum - 1] << endl;
                    }

                }while(dayNum < 1 || dayNum > 7);

                break;
            case 2:
                cout << "You chose Get Month Name by Number" << endl;
                //Do while statement that will continue if user enters an int
                //less than 1 or greater than 12
                do{
                    cout << "Enter a day number (1-12)" << endl;
                    monthNum = getInput();
                    if (monthNum < 1 || monthNum > 12){
                        cout << "Invalid Month" << endl;
                    } else {
                        cout << "You entered: " << monthNum << endl;
                        cout << MONTH[monthNum - 1] << endl;
                    }

                }while(monthNum < 1 || monthNum > 12);
                break;
            case 3:
                cout << "Bye" << endl;
                break;
            default:
                cout << "Choose valid input." << endl;
        }

    }while (userInput != 3);
    
    return 0;
}