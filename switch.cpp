#include <iostream>

using namespace std;

//switch :- its a replacement of else-if condition in C++

int main () {

    char grade;
    cout << "Enter the grade (A-D) : " << endl;
    cin >> grade;

    switch(grade){
        case 'A':
            cout << "Great ! Apply for the Counselling" << endl;
            break;
        case 'B':
            cout << "Wow!! you're elgible for admission " << endl;
            break;
        case 'C':
            cout << "We need to conduct one test " << endl;
            break;
        case 'D':
            cout << "you need to apply for the 2 round interview " << endl;
            break;
        default:
            cout << "Not eligible for addmission" << endl;

    }
    return 0;

    }

