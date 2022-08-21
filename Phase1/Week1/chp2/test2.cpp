
#include <iostream>
using namespace std;

int main(){

    // enum
    enum Color{
        RED = 1, GREEN = 2, BLUE = 3
    };
    Color myColor;

    myColor = RED;
    Color yourColor = BLUE;

    cout << "Color RED: " << RED << endl; // 1
    cout << "Color RED: " << myColor << endl; // 1

    cout << "Color BLUE: " << BLUE << endl; // 3
    cout << "Color BLUE: " << yourColor << endl; // 3

    enum Color2{
        RED2, GREEN2, BLUE2
    };
    Color2 myColor2;

    myColor2 = RED2;
    Color2 yourColor2 = BLUE2;

    cout << "Color2 RED2: " << RED2 << endl; // 0
    cout << "Color2 RED2: " << myColor2 << endl; // 0

    cout << "Color2 BLUE2: " << BLUE2 << endl; // 2
    cout << "Color2 BLUE2: " << yourColor2 << endl; // 2

    return 0;

}