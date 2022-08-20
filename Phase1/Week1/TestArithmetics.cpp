
#include <iostream>
using namespace std;

int main(){

    int number1, number2;
    int number3;

    int sum, difference, product, quotient, remainder;

    //Prompt
    cout << "Enter two integers (separated by the whitespace): ";
    cin >> number1 >> number2;
    cout << "Enter additional integer: ";
    cin >> number3;

    sum = number1 + number2;
    difference = number1 - number2;
    product = number1 * number2;
    quotient = number1 / number2;
    remainder = number1 % number2;


   cout << "The sum, difference, product, quotient and remainder of "
        << number1 << " and " << number2 << " are "
        << sum << ", "
        << difference << ", "
        << product << ", "
        << quotient << ", and "
        << remainder << endl;

    ++number1;

    --number2;
    
    cout << "number1 after increment is " << number1 << endl;
    cout << "number2 after decrement is " << number2 << endl;

    quotient = number1/number2;
    cout << "The new quotient of " << number1 << " and " << number2
        << " is " << quotient << endl;

    cout << "The sum and the product of these three integers are "
    << sum+number3 << " and " << product * number3 << endl;

    cout << endl << "Extra calculation.. " << 31*number1 + 17*number2 + 87*number3 << endl;

    return 0;
}