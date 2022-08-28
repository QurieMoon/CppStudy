/*
 * 이 소스코드는
 * <<윤성우의 열혈 C++ 프로그래밍>> 에 나와있는 소스코드 입니다
 * 
 */

#include <iostream>
#include "Rectangle.h"
using namespace std;

int main(){

    Rectangle rec(1, 1, 5, 5);
    rec.showRecInfo();

    return 0;
}

// g++ -o RectangleConstructor RectangleConstructor.cpp Rectangle.o Point.o