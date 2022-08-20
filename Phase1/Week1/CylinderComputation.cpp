
#include <iostream>
using namespace std;

int main(){
    
    const double PI = 3.14159265;

    double r, h;

    cout << "Input radius: ";
    cin >> r;

    cout << "Input height: ";
    cin >> h;

    cout << "Area: " << 2*PI*r*h+2*PI*r*r << endl;
    cout << "Volume: " << PI*r*r*h << endl;

    return 0;

}