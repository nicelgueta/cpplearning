
// fundamental types: numbers, boolean, char
// user defined: dates, strings, objects
// struct and class. 
// c++ design rule: make objects behave like ints. (full language participants)

// Fundamental types
// integers (size and signage specfied), floats/double, character (char, unsigned char)

// best thing: google c++ fundamental types. microsoft docs are pretty useful

int main()
{
    int i1 = 1;
    int i2;
    i2 = 2;
    int i3(3);
    int i4{4};

    long a7 = 1'000'000; // can use apostophes for human convenience - means nothing to the code
    char c1 = 'a'; // single quote is an actual char
    // char c2 = "b"; double quote is C-style string
    auto l1 = 34L; // can use literal suffixes to define tpyes with auto

    // safe casting - remove compiler warnings about changing the type. Basically saying, this is deliberate.
    // example below shows converting a double to an int
    // beware of silent overflow
    double d1 = 2.2;
    int i5;
    i5 = static_cast<int>(d1);
    return 0;
}