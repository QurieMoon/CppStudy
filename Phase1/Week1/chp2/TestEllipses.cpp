
#include <iostream>
#include <cstdarg>
using namespace std;

int sum(int, ...);

int main(){

    cout << sum(3, 1, 2, 3) << endl;
    cout << sum(5, 1, 2, 3, 4, 5) << endl;

    return 0;

}

int sum(int count, ...){
    int sum = 0;

    // Ellipses are accessed through a va_list
    va_list lst;

    va_start(lst, count); //initialize va_list

    for(int i = 0; i < count; ++i){
        sum += va_arg(lst, int);
    }

    // Cleanup the va_list
    va_end(lst);

    return sum;
}