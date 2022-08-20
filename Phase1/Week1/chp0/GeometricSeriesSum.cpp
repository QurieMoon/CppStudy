
#include <iostream>
using namespace std;

int main(){

    double sum=0;

    int n;

    cout << "Enter your number: ";
    cin >> n;

    int denominator = 1;
    while(denominator <= n){
        sum += (double) 1/denominator; // You should use explicit type conversion!!

        denominator *= 2;
    }

    // cout << "n :" << n << endl; // n is "Integer"
    cout << "Result: " << sum << endl;

    return 0;
}