#include <iostream>

using namespace std;

int main() {

    string name;
    int age;

    // cout << "Enter your name: " << endl;
    // cin >> name  ;
    // cout << "Enter your age: " << endl;
    // cin >> age;
    // cout << "What is your profession : "<< endl;
    // cin >> profession ;
    // return 0;

    cout << "What's your age : ?" << endl;
    cin >> age;
    
    cout << "Enetr ur name  : ";
    getline(cin>>ws , name);

    cout << "Hey " <<  name << "\nyou are  " << age << " years old." << endl;
    



}