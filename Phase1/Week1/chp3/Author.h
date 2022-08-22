#ifndef AUTHOR_H
#define AUTHOR_H

#include <string>

class Author{
    private:
        std::string name;
        std::string email;
        char gender;
    public:
        Author(string name, string email, char gender);
        std::string getName() const;
        // void setName(string name);
        std::string getEmail() const;
        void setEmail(const std::string & email);
        char getGender() const;
        // void setGender(char gender);
        void print() const;
}; // SEMI-COLON!!!!!!!!!

#endif