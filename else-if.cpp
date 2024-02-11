#include <iostream>

using namespace std;

int main() {

    int month;

    cout << "Enter the month : " << endl;
    cin >> month;

    if (month <=3 ){
        cout << "you're eligible to file tax return" << endl;
    }
    else if(month >=3 && month <=8) {
        cout << "Claim your amount in near tax office" << endl;

    }

    else{
        cout << "Wait for the next year terms" <<endl;
    }

    return 0;
    

}