
#include <iostream>
#include <string>
using namespace std;

int main(){

    string testStr = "Turn Right";

    bool tmp = true;
    tmp = false;

    // static cast
    int i = 5;
    float f = static_cast<float>(i);

    cout << "f: " << f << endl;

    // switch statement
    // Use int or char variable as the case-selector
    char a = 'a';
    switch (a)
    {
    case 'a':
        cout << 'a' << endl;
        break;
    
    default:
        cout << "default" << endl;
        break;
    }

    int test = 3;
    string result = (test > 2) ? "True result of testing ternary operator" : "False result of testing ternary operator";
    cout << result << endl << endl;

    // sentinel value
    int sentinel = -1;
    int numberIn = -1;

    while(numberIn != sentinel){
        cout << "wrong result for testing sentinel";
    }

    // string operations
    testStr = "Hello, World!";
 
    cout << "len of " << testStr << " : " << testStr.length() <<endl;
    cout << "size of " << testStr << " : " << testStr.size() <<endl;

    cout << endl << "!! Test String copy !!" << endl;
    string testStr2 = testStr;
    testStr2 = "Hi";

    cout << "This should be \"Hello, World!\" : " << testStr << endl;
    cout << "This should be \"Hi\" : " << testStr2 << endl << endl;

    testStr.at(0); // get index 0 element of testStr

    return 0;
}