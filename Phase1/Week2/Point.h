/*
 * 이 소스코드는
 * <<윤성우의 열혈 C++ 프로그래밍>> 에 나와있는 소스코드 입니다
 * 
 */
#ifndef __POINT_H_
#define __POINT_H_

class Point{
    private:
        int x, y;
    public:
        Point(const int &xpos, const int &ypos);
        int getX() const;
        int getY() const;
        bool setX(int xpos);
        bool setY(int ypos);
};

#endif