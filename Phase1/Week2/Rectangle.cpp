/*
 * 이 소스코드는
 * <<윤성우의 열혈 C++ 프로그래밍>> 에 나와있는 소스코드 입니다
 * 
 */

#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(const int &x1, const int &y1, const int &x2, const int &y2)
:upRight(x1, y1), bottomLeft(x2, y2){

}

void Rectangle::showRecInfo() const{
    cout << "upRight : (" << upRight.getX() << " , " << upRight.getY() << ")" << endl;
    cout << "bottomLeft : (" << bottomLeft.getX() << " , " << bottomLeft.getY() << ")" << endl;
}