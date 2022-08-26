/*
 * 이 소스코드는
 * <<윤성우의 열혈 C++ 프로그래밍>> 에 나와있는 소스코드를 바탕으로 하고 있습니다
 *  - 두가지 방식의 Call-by-reference 방법 중에
 *    참조자를 이용한 Call-by-reference 예제
 * 
 */

#include <iostream>
using namespace std;

void swapByRef2(int &ref1, int &ref2){

    cout << "Start swapByRef2" << endl << endl;

    cout << "&ref1 : " << &ref1 << endl;
    cout << "&ref2 : " << &ref2 << endl;

    int temp = ref1;
    cout << "&temp : " << &temp << endl; // <주의> ref1과 temp의 주소값은 다르다

    ref1 = ref2;
    cout << "&ref1 : " << &ref1 << endl; // <주의>> 이때 확인해보면 ref1의 주소값은 변하지 않았다!!!
    // <Reminder> 참조자에 할당된 주소는 변하지 않는다!!!!!
    
    ref2 = temp;
    cout << "&ref2 : " << &ref2 << endl; // <주의>> 이때 확인해보면 ref2의 주소값은 변하지 않았다!!!
    // <Reminder> 참조자에 할당된 주소는 변하지 않는다!!!!!

    cout << "End swapByRef2" << endl << endl;
}

/**
 * 중요 예제!
 * 
 */
void swapPointer(int *(&ptref1), int *(&ptref2)){
    // 아래 comment 처리도니 부분은 잘못된 코드!!
    // int *(&ref1) = pt1;
    // cout << ref1 << endl << endl;
    // pt1 = pt2;
    // cout << "check " << pt1 << endl;
    // pt2 = ref1;

    int * tmp = ptref1; // 여기에는 reference가 사용되면 안 됨!!
    ptref1 = ptref2;
    ptref2 = tmp;

}

int main(){

    int val1 = 10, val2 = 20;

    cout << "&val1 : " << &val1 << endl;
    cout << "&val2 : " << &val2 << endl;

    swapByRef2(val1, val2);
    cout << "val1 : " << val1 << endl;
    cout << "val2 : " << val2 << endl;

    cout << "&val1 : " << &val1 << endl;
    cout << "&val2 : " << &val2 << endl;

    cout << endl << endl << endl << "***** Test *****" << endl << endl << endl;

    int * pt1 = &val1;
    int * pt2 = &val2;

    cout << "pt1 : " << pt1 << endl;
    cout << "*pt1 : " << *pt1 << endl; // val1?
    cout << "pt2 : " << pt2 << endl;
    cout << "*pt2 : " << *pt2 << endl; // val2?

    cout << "val1 : " << val1 << endl;
    cout << "val2 : " << val2 << endl;

    cout << "&val1 : " << &val1 << endl;
    cout << "&val2 : " << &val2 << endl;

    cout << endl << "After performing the swap ..." << endl << endl;
    swapPointer(pt1, pt2);
    cout << "pt1 : " << pt1 << endl;
    cout << "*pt1 : " << *pt1 << endl; // val1?
    cout << "pt2 : " << pt2 << endl;
    cout << "*pt2 : " << *pt2 << endl; // val2?

    cout << "val1 : " << val1 << endl;
    cout << "val2 : " << val2 << endl;

    cout << "&val1 : " << &val1 << endl;
    cout << "&val2 : " << &val2 << endl;

    return 0;

}