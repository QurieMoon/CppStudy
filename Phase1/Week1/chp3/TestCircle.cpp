
#include <iostream>
#include "Circle.h"
using namespace std;

void printCircleInfo(Circle circle);

int main(){

    Circle c1(1.2, "red");
    printCircleInfo(c1);

    c1.setRadius(2.1);
    c1.setColor("blue");
    printCircleInfo(c1);

    Circle c2;
    printCircleInfo(c2);

    return 0;

}

void printCircleInfo(Circle circle){
    cout << "Radius=" << circle.getRadius() << " Area=" << circle.getArea()
        << " Color=" << circle.getColor() << endl;
}

/*
    > g++ -o TestCircle.exe TestCircle.cpp Circle.o
     // option -o specifies the output filename

     > g++ -o TestCircle.exe TestCircle.cpp Circle.cpp
     
*/