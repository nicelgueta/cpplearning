
#include <string>
// #include "Person.h" this should be commented out because tweeter bring it in
// unless you use #pragma once, which is an effective include guard (prevent same
// module being imported twice in each of the header files)
#include "Tweeter.h"
#include "Status.h"
#include <iostream>

int main()
{
    // Resource Acquisition is Initialisation: Concept of destructor methods on a class that are 
    // called when an instance of the class goes out of "scope". (I guess like a context manager in python?)
    // this helps deallocate memory assigned to the program.
    // scope can be defined by using curly braces

    Person p1("john", "smith");

    {
        // helen may only exists within this scope
        Person p2("Helen", "May");
    }
    std::cout << "We've left scope for Helen so above line should say she's been deconstructed" << std::endl;
    std::string p1Name = p1.getName();
    std::cout << "Hello, " << p1Name << std::endl;

    std::cout << "Now for a tweeter that inherits person" << std::endl;

    {
        Tweeter t1("Jack", "Reynolds", "@jackie");
        std::string tweetName;
        tweetName = t1.getHandle();
        std::cout << "Got " << tweetName << " for " << t1.getName() << std::endl;
    }
    Status a = Status::Alive;
    Status d = Status::Dead;
    return 0;

}