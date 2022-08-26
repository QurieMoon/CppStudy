/**
 * Reference는 어떤 함수 안에서 함수 바깥 내용을 참조하기 위함임을 잊지 말자!!
 */
#include <iostream>
using namespace std;

void increment(int &ref1){
    ref1 += 1;
}
void changeSign(int &ref1){
    ref1 *= (-1);
}

int main(){

    int val1 = 1;
    cout << "val1 : " << val1 << endl;

    increment(val1);
    cout << "val1 : " << val1 << endl;

    changeSign(val1);
    cout << "val1 : " << val1 << endl;

    return 0;
    
}