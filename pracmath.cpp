#include <iostream>
#include <cmath>

using namespace std;

int main()
{ 
    double a;
    double b;
    double c;

    cout << "enter the size of a: " << endl;
    cin >> a;

    cout << "Enter the value of b: " << endl;
    cin>> b;

    cout << "Calculating the hypotenuse ..." << endl;

    c = sqrt(pow(a,2) + pow(b,2));
    cout <<  "The length of the hypotenuse is : "<< c <<endl;
    return 0;
    
}