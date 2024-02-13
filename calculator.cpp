#include <iostream>

using namespace std;

int main (){

    char op;
    double num1;
    double num2;
    double result;

    cout << "--------------CALCULATOR----------------\n" << endl;

    cout  << "perform the standard calculation using (+ , - , / , *): ";
    cin >> op ;

    cout << "Enter first number: ";
    cin >> num1 ;

    cout << "Enter second number: ";
    cin >> num2 ;

    switch (op) {

        case '+':
            result = num1 + num2;
            cout << "The sum of the number is : " <<result<< endl;
            break;

        case '-':
            result = num1 - num2;
            cout << "The diff of the number is : " <<result<< endl;
            break;

        case '*':
            result = num1 * num2;
            cout << "The multiplication of the number is : " <<result<< endl;
            break;
        
        case '/':
            result = num1 / num2;
            if(num2 == 0)
                cout << "Error! Division by zero is not allowed." << endl;
            else 
                cout << "The division of the number is : " <<result<< endl; 
    }

    cout << "--------------CALCULATOR----------------\n" << endl;
    return 0;

}
