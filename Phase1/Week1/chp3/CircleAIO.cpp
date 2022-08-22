
#include <iostream>
#include <string>

using namespace std;

class Circle{
    private:
        double radius;
        string color;
        int test[];
    public:
        Circle(double radius = 1.0, string color = "red"){
            this -> radius = radius;
            this -> color = color;
        }
        
        // example of const member function
        double getRadius() const {
            return radius;
        }

        string getColor(){
            return color;
        }

        double getArea(){
            return radius*radius*3.1416;
        }

        void setColor(string color){
            this -> color = color;
        }

}; // SEMI-COLON!!!!!

int main(){

    Circle c1 = Circle(1.2, "blue");
    cout << "Radius=" << c1.getRadius() << " Area=" << c1.getArea()
        << " Color=" << c1.getColor() << endl;

    Circle c2(3.4); // default color
    cout << "Radius=" << c2.getRadius() << " Area=" << c2.getArea()
        << " Color=" << c2.getColor() << endl;

    Circle c3;      // default radius and color
    cout << "Radius=" << c3.getRadius() << " Area=" << c3.getArea()
        << " Color=" << c3.getColor() << endl;

    Circle c4(7.8, "blue");
    cout << "Radius=" << c4.getRadius() << " Area=" << c4.getArea()
        << " Color=" << c4.getColor() << endl;
                    // Radius=7.8 Area=191.135 Color=blue
    
    // Construct a new object by copying an existing object
    // via the so-called default copy constructor
    Circle c5(c4); // c4, c5 서로 영향 없음!!
    cout << "Radius=" << c5.getRadius() << " Area=" << c5.getArea()
        << " Color=" << c5.getColor() << endl;
                    // Radius=7.8 Area=191.135 Color=blue

    c4.setColor("Black");

    cout << "c4" << endl;
    cout << "Radius=" << c4.getRadius() << " Area=" << c4.getArea()
        << " Color=" << c4.getColor() << endl << endl;

    cout << "c5" << endl;
    cout << "Radius=" << c5.getRadius() << " Area=" << c4.getArea()
        << " Color=" << c5.getColor() << endl << endl;
    
    c5.setColor("Orange");

    cout << "c4" << endl;

    cout << "Radius=" << c4.getRadius() << " Area=" << c4.getArea()
        << " Color=" << c4.getColor() << endl << endl;

    cout << "c5" << endl;
    cout << "Radius=" << c5.getRadius() << " Area=" << c4.getArea()
        << " Color=" << c5.getColor() << endl << endl;

    return 0;

}