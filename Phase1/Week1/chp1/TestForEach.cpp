
#include <iostream>
using namespace std;

int main(){

    int numbers[] = {11, 22, 33, 44, 55};

    for (int number : numbers){
        cout << number << endl;
    }

    for (int &number : numbers){
        number = 99;
    }

    for (int number : numbers){
        cout << number << endl;
    }

    return 0;

}

/* Note
    Cmd for compiling this program : 
    g++ -std=c++11 -o TestForEach TestForEach.cpp
*/