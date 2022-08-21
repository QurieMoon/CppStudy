
#include <iostream>
using namespace std;

struct Point{
    int x;
    int y;
}; // struct needs semicolon!!!!

struct Rectangle{
    Point topLeft;
    Point bottomRight;
};

int main(){

    Point p1 = {3, 4};
    cout << "(" << p1.x << " , " << p1.y << ")" << endl;

    Point p2 = {};
    cout << "(" << p2.x << " , " << p2.y << ")" << endl;

    p2.x = 7;
    p2.y = 8;

    cout << "(" << p2.x << " , " << p2.y << ")" << endl;

    Rectangle rect;
    rect.topLeft = p1;
    rect.bottomRight = p2;

   cout << "Rectangle top-left at (" << rect.topLeft.x
        << "," << rect.topLeft.y << ")" << endl;
   cout << "Rectangle bottom-right at (" << rect.bottomRight.x
        << "," << rect.bottomRight.y << ")" << endl;

    return 0;

}