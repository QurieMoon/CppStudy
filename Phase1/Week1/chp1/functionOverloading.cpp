
#include <iostream>

using namespace std;

void func(int, int, int);
void func(double, int);
void func(int, double);

int main(){

    func(1,2,3);
    func(1.0, 2);
    func(1, 2.0);

    return 0;

}

// function overloading
void func(int n1, int n2, int n3){

    cout << "version 1" << endl;
}

void func(double n1, int n2){

    cout << "version 2" << endl;

}
void func(int n1, double n2){

    cout << "version 3" << endl;
}