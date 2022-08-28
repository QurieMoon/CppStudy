/*
 * 이 소스코드는
 * <<윤성우의 열혈 C++ 프로그래밍>> 에 나와있는 소스코드 입니다
 * 
 */
#ifndef __RECTANGLE_H_
#define __RECTANGLE_H_

#include "Point.h"

class Rectangle{
    private:
        Point upRight;
        Point bottomLeft;
    public:
        Rectangle(const int &x1, const int &y1, const int &x2, const int &y2);
        void showRecInfo() const;
};


#endif