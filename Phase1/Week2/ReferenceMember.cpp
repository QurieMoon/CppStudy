/*
 * 이 소스코드는
 * <<윤성우의 열혈 C++ 프로그래밍>> 에 나와있는 소스코드 입니다
 * 
 */

#include <iostream>
using namespace std;
class AAA{
    public:
        AAA(){
            cout << "empty object" << endl;
        }
        void showYourName(){
            cout << "My name is AAA" << endl;
        }
};
class BBB{
    private:
        AAA &ref; // 레퍼런스 등장!
        const int &num;
    public:
        BBB(AAA &r, const int &n)
        :ref(r), num(n){

        }
        void showYourName(){
            ref.showYourName();
            cout << " and "<<endl;
            cout << "this -> num is " << num << endl;
        }
};

int main(){

    AAA obj1;
    BBB obj2(obj1, 20);
    obj2.showYourName();

    return 0;

}