
#include <iostream>

using namespace std;

int squareByValue(int num);
void squareByReference(int & num);

int main(){
   
   int n1 = 8;
   cout << "Before call, value is " << n1 << endl;  // 8
   cout << squareByValue(n1) << endl;  // no side-effect
   cout << "After call, value is " << n1 << endl;   // 8
 
   int n2 = 9;
   cout << "Before call, value is " << n2 << endl;  // 9
   squareByReference(n2);  // side-effect
   cout << "After call, value is " << n2 << endl;   // 81

    return 0;
}

int squareByValue(int num){
    return num * num;
}

void squareByReference(int & num){
    num = num * num;
}