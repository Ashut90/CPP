#include <iostream>

using namespace std;
namespace  first {
    int x = 1;
}
namespace sec {
    double x = 2;
}

int main(){
    using namespace first;

    //Namespace = help to prevent conflict between names
    cout << x << endl;
    return 0;
}