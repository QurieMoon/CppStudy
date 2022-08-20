
#include <iostream>
using namespace std;

int func1(int = 1, int = 2, int = 3);
int func2(int, int, int = 3);

int main(){

    // omit this part
    
    return 0;

}

int func1(int n1, int n2, int n3){
    return n1+n2+n3;
}

int func2(int n1, int n2, int n3){
    return n1+n2+n3;
}