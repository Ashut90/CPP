#include <iostream>
#include <vector>

using namespace std;

// typedef int text_t;
// typedef double val_pie;

using text_t = int;
using  val_pie = double;


int main(){

    // Typedef --> keyword, used to create alias
    text_t  n = 900;
    val_pie PI = 3.12;
    cout << n << '\n' << PI;

    return 0;

}