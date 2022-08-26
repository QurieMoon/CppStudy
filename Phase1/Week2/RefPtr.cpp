/*
 * 이 소스코드는
 * <<윤성우의 열혈 C++ 프로그래밍>> 에 나와있는 소스코드 입니다
 *  - 배열요소도 참조할 수 있음을 보여주는 예제
 * 
 */
#include <iostream>
using namespace std;

int main(){

    int num = 12;
    int *ptr  = &num;
    int **dptr = &ptr;

    int &ref = num;
    int *(&pref) = ptr;
    int **(&dpref) = dptr;

    cout << ref << endl;
    cout << num << endl;

    cout << *pref << endl;
    cout << *ptr << endl;

    cout << **dpref << endl;
    cout << **dptr << endl;

    return 0;

}