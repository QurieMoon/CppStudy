
#include <iostream>

using namespace std;

// function prototype
int sum(int array[], int size);
void print(int array[], int size);

int main(){

    int a1[] = {8, 4, 5, 3, 2};
    print(a1, 5);
    
    cout << "sum of a1 is " << sum(a1, 5) << endl;

    return 0;

}

int sum(int array[], int size){

    int sum = 0;
    for (int i = 0; i < size; ++i){
        sum += array[i];
    }

    return sum;
}

void print(int array[], int size){

    for (int i = 0; i < size; ++i){
        cout << array[i] << " ";
    }
    cout << endl << endl;
}