/*
 * 이 소스코드는
 * <<윤성우의 열혈 C++ 프로그래밍>> 에 나와있는 소스코드 입니다
 * 
 */
#include <iostream>
using namespace std;

class TwoNumber{
    private:
        int num1, num2;
    public:
        TwoNumber(int num1, int num2){
            this -> num1 = num1;
            this -> num2 = num2;
        }
        // TwoNumber(int num1, int num2)
        // : num1(num1), num2(num2)
        // {
        //     // empty
        // }

        void showTwoNumber(){
            cout << this -> num1 << endl;
            cout << this -> num2 << endl;
        }
};

int main(){

    TwoNumber two(2,4);
    two.showTwoNumber();

    return 0;
}