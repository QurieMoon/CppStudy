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
        int age;
        char name[50];
    public:
        Person(int age, char * inputName) : age(age){
            strcpy(name, inputName);
        }
        void printName() const{
            cout << name << endl;
        }
        void printAge() const{
            cout << age << endl;
        }
};

class UnivStudent : public Person{
    private:
        char major[50];
    public:
        UnivStudent(char * inputName, int age, char * inputMajor)
        : Person(age, inputName){
            strcpy(major, inputMajor);
        }
        void printInfo() const{
            printName();
            printAge();
            cout << major << endl;
        }
};

int main(){

    UnivStudent student1("Lee", 22, "Computer Eng.");
    student1.printInfo();

    UnivStudent *student2 = new UnivStudent("Kim", 23, "English Literature");
    student2->printInfo();
    return 0;

}