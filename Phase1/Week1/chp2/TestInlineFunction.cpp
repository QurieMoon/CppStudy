
#include <iostream>
using namespace std;

inline int max(int n1, int n2){

    return (n1 > n2) ? n1 : n2;

}

int main(){

    int i1 = 5, i2 = 6;

    cout << max(i1, i2) << endl;

    return 0;

}