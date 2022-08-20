
#include <iostream>
using namespace std;

int main(){

    double sum=0;

    int n;

    cout << "Enter your number: ";
    cin >> n;

    for (int i = 0;i<n;i++){
        sum += (double)1/(i+1); // Explicit type conversion!!
    }

    // cout << "n :" << n << endl; // n is "Integer"
    cout << "Result: " << sum << endl;

    return 0;
}