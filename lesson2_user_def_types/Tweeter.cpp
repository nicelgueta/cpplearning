#include "Tweeter.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

Tweeter::Tweeter(
    std::string first,
    std::string last,
    std::string handle
) : Person(first, last),twitterHandle(handle){
    cout << "constructing tweeter" << endl;
}

Tweeter::~Tweeter(){
    cout << "destructing tweeter" << endl;
}
std::string Tweeter::getHandle(){
    return twitterHandle;
}