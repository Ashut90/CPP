#include <iostream>

using namespace std;

int main ()  {

    double temp;
    char unit;

    cout << "-------------Temperature conversion---------------" << '\n';
    cout << " F - Fahrenheit \n";
    cout << " C - Celsius \n";
    cout << "what unit you like to convert the temperature" << endl;
    cin >> unit;

    if (unit == 'F' || unit == 'f') {
        cout << "Enter the temp in Celsius : " ;
        cin >> temp;

        // converting the temp from cel to farenhiet
        temp = (1.8 * temp) + 32.0;
        cout << "Temperature is : " << temp << " Farenheit"<<endl;
    }

    else if (unit == 'C' || unit == 'c') 
    {
        cout << "Enter the temp in Fahrenheit :  ";
        cin >> temp;

        //conveerting the temp from farhenheit to Celsius
        temp =  (temp - 32)/1.8;
        cout << "Temperature is: " << temp <<" Celsius " << endl;

    }
    
    cout << "---------------------End of Program--------------------\n";

    

return 0;

}