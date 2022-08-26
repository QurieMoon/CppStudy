/*
 * 이 소스코드는
 * <<윤성우의 열혈 C++ 프로그래밍>> 에 나와있는 소스코드 입니다
 * 
 */

# include <iostream>
using namespace std;

int main(){

    int num1 = 1020;
    int &num2 = num1; // reference
    cout << "num1: " << num1 << endl;
    cout << "num1 address: " << &num1 << endl;
    cout << "num2: " << num2 << endl; // num1과 동일한 메모리 공간을 참조함
    cout << "num2 address: " << &num2 << endl;

    num2 = 3047; // 참조자는 선언되고 나서 사용 방법이 일반 변수와 차이가 없다
    cout << "After reassigning the value" << endl << endl;
    cout << "num1: " << num1 << endl;
    cout << "num1 address: " << &num1 << endl; // 주소 변하지 않는다!!
    cout << "num2: " << num2 << endl;
    cout << "num2 address: " << &num2 << endl; // 주소 변하지 않는다!!

    return 0;

}

/**
 * 참조자 추가 메모
 *  - 참조 대상으로 literal 을 넣을 수 없음
 *  - 참조자의 참조 대상은 바꿀 수 없다
 *  - 참조자는 NULL 로 초기화할 수 없다
 * 
 */