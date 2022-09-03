/*
 * 이 소스코드는
 * <<윤성우의 열혈 C++ 프로그래밍>> 에 나와있는 소스코드 입니다
 * 
 */
#include <iostream>
using namespace std;

class SoSimple{
    private:
        int num1, num2;
    public:
        SoSimple(int num1, int num2)
        :num1(num1), num2(num2){
        }
        SoSimple(SoSimple &Copy)
        :num1(Copy.num1), num2(Copy.num2){            
        }
        void showSimpleData(){
            cout << num1 << endl;
            cout << num2 << endl;
        }
        int getNum1() const{
            return num1;
        }
        int getNum2() const{
            return num2;
        }
        void incrementNum1(){
            num1 += 1;
        }
};

int main(){

    SoSimple sim1(15, 30);
    cout << "Before creating and initializing sim2" << endl;
    SoSimple sim2 = sim1; // SoSimple sim2(sim1);
    cout << "After creating and initializing sim2" << endl;
    sim2.showSimpleData();
    cout << &sim1 << endl;
    cout << &sim2 << endl;

    sim2.incrementNum1(); // Only affects sim2
    sim1.showSimpleData();
    sim2.showSimpleData();
    return 0;
}