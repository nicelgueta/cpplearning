
#include <iostream>

using std::string;
using std::endl;
using std::cout;
using std::cin;

/*

Operators

*/

// NB - not operator for exponent! Use a function for this:
double exponent(double base, double power) {
    int i = 1;
    int n = base;
    while (i < power){
        n = n * base;
        i++;
    };
    return n;
}

int main()
{
    int i = 0;

    cout << i++ << endl; // increments but doesn't return value - same as js
    cout << ++i << endl; // increments and returns value

    i+=2;
    cout << i << endl; // same as python + js

    // modulo also exists
    cout << i%2 << endl; // same as python + js

    // not
    cout << !false << i << endl;
    cout << "i=" << i << endl; // same as python + js
    cout << exponent(i, 3) << endl; // same as python + js

    // comparisons are same as python except AND and OR
    cout << (false && true) << endl;
    cout << (true && true) << endl;
    cout << (false || true) << endl;
    cout << (true || true) << endl;


    // bitwise operators
    // NB bitwise 'not' in cpp is ^, unlike python's ~

    // operator overloading - central aspect to the language

    

}