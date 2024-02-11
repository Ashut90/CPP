#include <iostream>

using namespace std;

int main(){
    //implicit type conversion

    double x = (3.15) + 2; //Conversão de um número real para inteiro, arredondando
    cout << "value of x: " <<x <<endl;
    
    //explicit type conversion

    double y = (int) 1.234;
    cout << "value of y: "<<y ;

    char m = 100;
    cout << '\n' << m ; // gives the ASCII format output

    // calculation eg


    int correct = 8;
    int total_q = 10;
    double  marks = correct / (double)total_q*100;
    cout << "\nCorrect answers are :" << marks;


}