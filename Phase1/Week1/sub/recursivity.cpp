// factorial calculator

#include <iostream>
using namespace std;

long factorial(long a);

int main(){

    long number = 9L;
    cout << number << "! = " << factorial(number) << endl;

    long number2 = 4L;
    cout << number2 << "! = " << factorial(number2) << endl;
    return 0;
}

long factorial(long a){
    if(a > 1){
        return (a * factorial(a-1));
    }else{
        return 1;
    }
}