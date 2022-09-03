/*
 * 이 소스코드는
 * <<윤성우의 열혈 C++ 프로그래밍>> 에 나와있는 소스코드 입니다
 * 
 */
#include <iostream>
using namespace std;

class SelfRef{
    private:
        int num;
    public:
        SelfRef(int n): num(n){
        }
        SelfRef& Adder(int n ){
            num += n;
            return *this;
        }
        SelfRef& ShowTwoNumber(){
            cout << num << endl;
            return *this;
        }
};
int main(){

    SelfRef obj(3);
    SelfRef& ref = obj.Adder(2);

    obj.ShowTwoNumber();
    ref.ShowTwoNumber();

    ref.Adder(1);
    obj.ShowTwoNumber();
    ref.ShowTwoNumber();

    cout << &obj <<endl;
    cout << &ref <<endl;

    return 0;
}