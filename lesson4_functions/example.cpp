
#include <iostream>
#include "Funcs.h"

using std::string;
using std::endl;
using std::cout;
using std::cin;

/*

Functions

Key notes:
- **NB** functions in c++ are passed by value not by reference by default (diff to python or js!)
- can have free funcs or member funcs (of a class)
- to pass by reference you add an & suffix to the type declaration.
- generally when passing by reference, use "[Object] const&" in order to not corrupt the original object
    unless explicitly changing the object.

- if you get errors at compile time (identifer) then likely to be header file issue
- if a linker error, then probably a implementation issue as not "kept promise" to implement a func defined in header file
*/

int main()
{
    int x;
    cout << "Enter fibo number: " << endl;
    cin >> x;
    for (int i = 1; i<=x;i++){
        cout << "Fibo #" << i <<": " << fibonacci(i) << endl;
    }

}