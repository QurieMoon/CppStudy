/*
 * 이 소스코드는
 * <<윤성우의 열혈 C++ 프로그래밍>> 에 나와있는 소스코드 입니다
 * 
 */
#include <iostream>
using namespace std;

int RefFuncTwo(int &ref);

int main(){

    int num1 = 1;
    int num2 = RefFuncTwo(num1);

    num1 += 1;
    num2 += 100;
    cout << "num1 : " << num1 << endl;
    cout << "num2 : " << num2 << endl;

    return 0;

}

int RefFuncTwo(int &ref){
    ref++;
    return ref;
}