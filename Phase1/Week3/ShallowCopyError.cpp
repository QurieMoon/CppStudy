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
        Person(char * inputName, int age){
            int len = strlen(inputName)+1;
            name = new char[len];
            strcpy(name, inputName);
            this -> age = age;
        }
        Person(const Person &ref) : age(ref.age) {
            name = new char[strlen(ref.name)+1];
            strcpy(name, ref.name);
        }
        void showPersonInfo() const{
            cout << name << endl;
            cout << age << endl;
        }
        void updatePersonName(char ** inputName){
            name = *inputName;
        }
        ~Person(){
            delete []name;
        }
};

int main(){

    Person man1("Lee dong woo", 29);
    Person man2 = man1;
    man1.showPersonInfo();
    man2.showPersonInfo();

    char * newName = "Yeom Mi Kyung";
    man1.updatePersonName(&newName);
    man1.showPersonInfo();
    man2.showPersonInfo();

    return 0;
}