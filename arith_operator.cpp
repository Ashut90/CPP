#include <iostream>

using namespace std;

int main() {

    //basic arithmatic op 
    // Additon 

    int a = 3;
    a = a+5;
    cout << "Value of a after addition is: "<<a<<endl;
    

    //substraction 

    float b = 5 - 2.34;
    cout <<  "The value of b after subtraction is :"<<b<<endl;
    
    // multiplication 

    double x = a *b;
    cout  << "The Value of x after Multiplication is:"<<x<<endl;

    //division 

    int student = 30;
    int remain = student % 6;    //quote of division
    int quote = student/6 ;   //remain of division
    cout << "Quitent after the devision: "<<quote<< '\n' << "Remainder of the Devision : " <<remain<<endl;

    //arithmatic flow 

    //  precedence of operator  
    //  () > ^,*,/,% > +,-  

    int sum = (10+5)*7/2-8;
    cout << "Arithmetic Flow Result : "<<sum<< endl;

    return 0;
}
