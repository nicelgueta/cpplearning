#pragma once
//  custom:
// .h - header file defines merely what the class should look like.
// .cpp, actual implementation of classes defined in .h files

// enforcement of private and public: encapsulation

#include <string>

// as a practice, never include "using" statements in a header file
// as this is imported into other files

class Person
{
    private:
        std::string firstname;
        std::string lastname;
    
    public:
        Person(std::string first, std::string last);
        // Person()=default; //alternative constructor that does nothing if params not required. Default means you don't
        // // have to specifically implement an empty constructor in Person.cpp

        // this is the destructor
        ~Person();
        // class member functions - should be initialised as const if not changing any member variables of the class instance
        std::string getName() const;
        std::string getFirstName() const {return firstname; } // short funcs can be implemented right away in header file for ease
        void changeFirstName(std::string name){firstname = name; } // cannot be const because it changes firstname
};