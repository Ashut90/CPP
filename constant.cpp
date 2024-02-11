#include <iostream>

using namespace std;

int main(){

    // constant keyword => value will be constant and prevent from modifying the value 
    // throughout the program 

    const double pi = 3.141592672;
    double rad = 5;
    double circum = 2 * pi * rad;

    cout << circum << "cm";

    return 0;


}