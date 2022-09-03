/*
 * 이 소스코드는
 * <<윤성우의 열혈 C++ 프로그래밍>> 에 나와있는 소스코드 입니다
 * 
 */

#include <iostream>
#include <cstring>
using namespace std;

class Person{
    private:
        char * name;
        int age;
    public:
        Person(char * myname, int myage){
            int len = strlen(myname)+1;
            name = new char[len];
            strcpy(name, myname);
            age = myage;
        }
        Person(){
            name = NULL;
            age = 0;
            cout << "called Person()" << endl;
        }
        void setPersonInfo(char * myname, int myage){
            name = myname;
            age = myage;
        }
        void showPersonInfo() const{
            cout << "Name: " << name << ", ";
            cout << "Age: " << age << endl;
        }
        ~Person(){
            delete []name;
            cout << "called destructor!" << endl;
        }
};

int main(){
    Person * parr[3];
    char namestr[100];
    char * strptr;
    int age;
    int len;

    for (int i = 0; i < 3; i++){
        cout << "Name: ";
        cin >> namestr;
        cout << "Age: ";
        cin >> age;

        parr[i] = new Person(namestr, age);
    }

    for (int i = 0; i < 3; i++){
        // parr[i] -> showPersonInfo();
        (*parr[i]).showPersonInfo();
    }

    for (int i = 0; i < 3; i++){
        delete parr[i];
    }
    
    return 0;
}