
#include "Circle.h"

const double PI = 3.14159265;

Circle::Circle(double radius, string color){
    this -> radius = radius;
    this -> color = color;
}

double Circle::getRadius() const{
    return radius;
}

void Circle::setRadius(double radius){
    this -> radius = radius;
}

string Circle::getColor() const{
    return color;
}

void Circle::setColor(string color){
    this -> color = color;
}

double Circle::getArea() const{
    return radius*radius*PI;
}

/*
    > g++ -c Circle.cpp
    // option –c for compile-only, output is Circle.o
*/