#include <iostream>
using namespace std;

int main(){
    int integer1, integer2, integer3, integer4, integer5;

    // Omit the cout with the guideline for convenience
    cin >> integer1;
    cin >> integer2;
    cin >> integer3;
    cin >> integer4;
    cin >> integer5;

    cout << "Total sum: " << integer1+integer2+integer3+integer4+integer5 << endl;
    cout << "Total product: " << integer1*integer2*integer3*integer4*integer5 << endl;

    return 0;
}