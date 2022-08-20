
#include <iostream>
using namespace std;

void printArray(int targetArr[]);

// let's use #define!!
#define SIZE 5

int main(){

    int a1[SIZE];
    printArray(a1);

    int a2[SIZE] = {21, 22, 23, 24, 25};
    printArray(a2);

    int a3[] = {31, 32, 33, 34, 35};
    printArray(a3);
    int a3size = sizeof(a3)/sizeof(int); // sizeof(a3)/sizeof(a3[0])
    cout << "Size of the array a3 is " << a3size << endl;

    int a4[SIZE] = {41, 42};
    printArray(a4);

    int a5[SIZE] = {0};
    printArray(a5);

    int a6[SIZE] = {};
    printArray(a6);

    return 0;

}

void printArray(int targetArr[]){

    for (int i = 0; i < SIZE; i++){
        cout << targetArr[i] << " ";
    }
    cout << endl;

}
