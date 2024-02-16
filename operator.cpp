#include <iostream>

using namespace std;

int main () {

    // bit operator
    /* 
    && - AND operator - check if both the conditions are True
    || - OR oeprator - check if any of the two condition works   
    ! - NOt operatot - reverse the logical  value of a variable (True to False and vice versa)
    */

   // And Opereator
   //-------------------------------------------------------
//    int temp ;
//    cout << "Enter the temp  : ";
//    cin >> temp;
//    if (temp > 0 && temp < 30) {
//     cout << "Temp is great , good to go out";
//    }
//    else{
//     cout << "better stay inside and cook some food" << endl;
//    }


   // OR operator
   //--------------------------------------------------------

//    int grade;
//    cout <<  "Enter your Grade : ";
//    cin >> grade;
//    if(grade ==5 || grade==10){
//        cout << "Grade is A+";
//    }
//    else {
//     cout << "Work hard to gain A+ grade"<< endl;

//    }

// Not operator 
//-------------------------------------------------------------
    int temp ;
    bool sunny = true;

    cout << "Enter the temp : ";
    cin >> temp;

    if (!sunny || temp<18 ) {
      cout << "Stay indoors today";
      }

    if(sunny && temp >=20) {
        cout << " its cloudy, lets play cricket outside " << endl;
    }
    else{
        cout << "Its not safe to go outside " << endl;
    }
   return 0;

}