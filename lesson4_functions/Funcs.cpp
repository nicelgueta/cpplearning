#include "Funcs.h"

int doubleItByValue(int x){
    return x * 2;
}
int doubleItByReference(int& x){
    return x * 2;
}

int fibonacci(unsigned int n) {
    if(n<1){return -1;}
    int x = 0, y = 1, z = x + y, i = 0;
    while (i < n){
        switch(n){
            case 1: 
                return 0; 
            case 2: case 3: 
                return 1;
        }
        x = y;
        y = z;
        z = x + y;
        i++;
    }
    return z;
}