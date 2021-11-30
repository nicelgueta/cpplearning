
#include <iostream>

using std::string;
using std::endl;
using std::cout;
using std::cin;

/*

Loops/conditionals etc

*/

int main()
{
    cout << "Type number: " << endl;
    int x;
    cin >> x;
    if (x>7){
        cout << "BIG" << endl;
    } else {
        cout << "SMALL" << endl;
    }
    int i = 0;

    // if condition of while is not met then loop never starts
    // unless you use "do while", which is relatively rare and i can see why
    while (i<10){
        if (i<x){
            cout << "too small" << endl;
        } else {
            cout << "boooom" << endl;
            break;
        }
        i = i + 1;
    }

    // for - same as js. Same scope rules apply to local and global vars within loops
    // unlike python
    for (int i = 0; i < 10;i++){
        cout << "too small" << endl;
    }

    // switch - similar to js except can only be int or enum
    // some compilers warn about not using all values of enum
    // if case statements do not exist for all of them

    switch (int j = x+2) // from c++17, you can initialise something in the swtich in order to keep it's scope only to the switch (good for objects)
    // otherwise just use a var on its won
    {
    case 7:
        cout << "Wo Magic 7" << endl;
        break;
    case 8:
        cout << "Wo Magic 8" << endl;
        break;
    case 9:
    case 10:
        cout << "Wo Magic 9 or 10" << endl;
        break;
    case 42:
        cout << "THAT'S NUMBERWANG!" << endl;
        break;
    
    default:
        cout << "no prize" << endl;
        break;
    }

    // immediate if:
    // same as JS
    string result;
    result = x > 7 ? "lemon" : "cheese";
    cout << "let's eat " << result << endl;

}