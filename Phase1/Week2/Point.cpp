/*
 * 이 소스코드는
 * <<윤성우의 열혈 C++ 프로그래밍>> 에 나와있는 소스코드 입니다
 * 
 */
#include <iostream>
#include "Point.h"
using namespace std;

Point::Point(const int &xpos, const int &ypos){
    x = xpos;
    y = ypos;
}

int Point::getX() const{
    return x;
}

int Point::getY() const{
    return y;
}

bool Point::setX(int xpos){

    if(0 > xpos || xpos > 100){
        cout << "Out of range --> Fail to set new X value" << endl;
        return false;
    }
    x = xpos;
    return true;
}

bool Point::setY(int ypos){

    if(0 > ypos || ypos > 100){
        cout << "Out of range --> Fail to set new Y value" << endl;
        return false;
    }

    y = ypos;
    return true;
}