#include <iostream>
using namespace std;

int main(){
    
    // (a)
    cout << "(a)" << endl << endl;
    for(int i = 0; i < 5; i++){
        if(i%2 == 0){
            // even number
            for(int j = 0; j < 5; j++){
                cout << "* ";
            }
        }else{
            // odd number
            for(int j = 0; j < 5; j++){
                cout << " *";
            }
        }
        cout << endl;
    }

    // (b)
    cout << endl << "(b)" << endl << endl;
    for(int i =  0;i < 5;i++){
        if(i==0 || i==4){
            for(int j = 0;j< 5;j++){
                cout << "* ";
            }
        }else{
            for(int j = 0;j< 5;j++){
                if(j == 0 || j==4){
                    cout << "* ";
                }else{
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }

    // (c)
    cout << endl << "(c)" << endl << endl;


    // (d)
    cout << endl << "(d)" << endl << endl;


    return 0;
}