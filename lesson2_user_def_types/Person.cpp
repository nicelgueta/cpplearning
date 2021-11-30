
#include "Person.h"
#include <iostream>

// use struct instead of class for data objects (i.e none/not much business logic)

Person::Person( //use fully qual name
        std::string first, std::string last
    ) :
        firstname(first),
        lastname(last)
    {
        // this scope is often empty
        std::cout << "constructing " << getName() << std::endl;
    }
    /*
    above is called an initialiser syntax. the bit between the loose colon and
    the empty set of braces maps the input vars to the private vars defined
    below. The empty set of braces is the body, as technically this initialiser
    is itself a function, so requires a body. It's quite normal for the body to be empty.
    in this syntax as all work is done before.
    the reason why it's not all done in the body is because the objects (in this case, strings)
    have to be constructed in the initialiser to their default values, and then in the body 
    these would be overridden to the values supplied to the constructor. This is twice the 
    work technically, so there's an efficiency gain by doing it as above. Console output in body just for show
    */
    
Person::~Person(){
    // never any params to destructor
    std::cout << "destructing " << getName() << std::endl;
}
std::string Person::getName(){
    return firstname + " " + lastname;
}