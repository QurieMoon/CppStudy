
#include <iostream>
using namespace std;

int main(){

    double w, h;

    cout << "Input width: ";
    cin >> w;

    cout << "Input height: ";
    cin >> h;

    cout << "Perimeter: " << 2*(w+h) << endl;
    cout << "Area: " << w*h << endl;

    return 0;

}