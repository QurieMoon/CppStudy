/*
 * 이 소스코드는
 * <<윤성우의 열혈 C++ 프로그래밍>> 에 나와있는 소스코드 입니다
 *  - 배열요소도 참조할 수 있음을 보여주는 예제
 * 
 */
#include <iostream>
using namespace std;

int main(){

    int arr[3] = {1, 3, 5};
    int &ref1 = arr[0];
    int &ref2 = arr[1];
    int &ref3 = arr[2];

    cout << "This should be 1 : " << ref1 << endl;
    cout << "This should be 3 : " << ref2 << endl;
    cout << "This should be 5 : " << ref3 << endl;

    return 0;

}