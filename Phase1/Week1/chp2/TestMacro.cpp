
#include <iostream>
using namespace std;

#define SQUARE(x) x*x

inline int square(int x){
    return x*x;
}

int main(){
    
    cout << SQUARE(5) << endl;
    int x = 2, y = 3;
    cout << SQUARE(x) << endl;

    // Problem with the following macro expansions
    cout << SQUARE(5+5) << endl;   // OK!
    cout << square(5+5) << endl;   // Okay square(10)
    cout << SQUARE(x+y) << endl;   // OK!!
    cout << square(x+y) << endl;   // Okay
        // can be fixed using #define SQUARE(x) (x)*(x)

    cout << SQUARE(++x) << endl;   // expand to ++x*++x (16) - x increment twice
    cout << x << endl;             // x = 4
    cout << square(++y) << endl;   // Okay ++y, (y*y) (16)
    cout << y << endl;             // y = 4

    return 0;

}