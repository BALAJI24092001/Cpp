#include <iostream>
#include <ostream>

/*-----------------------------------------------------------
  How to compile c++ programs

## Linux
Linux servers comes with all the required compilers and no need to install any compilers
g++ compiler is used and it can be downloaded from the linux dist. package manager.

```

```

----------------------------------------------------------- */
int main (int argc, char *argv[]) {


// -----------------------------------------------------------
    // variable naming conventions
    // 
    int list_len; // snake case
    int ListLen; // Pascal case
    int listLen; // Camel case
    int iListLen; // Hungarian case, where the variable data types is mentioned int he beginning of the variable name.
// -----------------------------------------------------------
    int x = 5, y = 6;
    int z;
    z = x + y;
    // Print something on the console using `cout`
    std::cout << z << std::endl;

// -----------------------------------------------------------
    // data types and arithmetric operations and issues wih them
    x = 5;
    y = 14;
    // x and y are integers, any operation performed on these two variables will return an integer value
    z = x + y; // returns an integer

// -----------------------------------------------------------
// -----------------------------------------------------------
    // Increment and decrement operation using prefix and postfix notations
    //
    // postfix increment
    x = 5;
    y = x++; // assigns x to y, then increments x
    // output: y = 5, x = 6
    //
    // prefix increment
    x = 5;
    y = ++x; // increments x by 1, then assigns x value to y
// -----------------------------------------------------------
    return 0;
}
