#include <iostream>

using namespace std;

int main() {

    int age;
    cout << "What's your age:  " << endl;
    cin >> age ;

    if (age >= 18) {
        cout << "You are an adult and eligible to vote " << endl;
    }
    else{
        cout << "You are not eligible to vote" << endl;
    }
    return 0;

}