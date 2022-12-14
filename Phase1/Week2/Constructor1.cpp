/*
 * 이 소스코드는
 * <<윤성우의 열혈 C++ 프로그래밍>> 에 나와있는 소스코드 입니다
 * 
 */
#include <iostream>
using namespace std;

class SimpleClass{
    private:
        int num1, num2;
    public:
        SimpleClass(){
            num1 = 0;
            num2 = 0;
        }
        SimpleClass(int n){
            num1 = n;
            num2 = 0;
        }
        SimpleClass(int n1, int n2){
            num1 = n1;
            num2 = n2;
        }
        void showData() const{
            cout << num1 << " " << num2 << endl;
        }
};

int main(){

    SimpleClass sc1;
    sc1.showData();

    SimpleClass sc2(100);
    sc2.showData();

    SimpleClass sc3(100, 200);
    sc3.showData();

    return 0;
}