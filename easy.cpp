/*
            ------------------BOILERPLATE CODE--------------------
It is standard structure for any cpp code to have
The main function is the primary execution point in c++ and only the code inside the main function will run.

``` C++
#include <iostream>

int main (int argc, char *argv[]) {
    return 0;
}
```

 */

#include <iostream>
#include <ostream>

/* NOTE: ----------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------
      Let the C++ code is written and saved in a file and named as code.cpp
               
      ## How to compile c++ programs
        * C++ needs compilation and running because it's a compiled language, meaning the human-readable source code must be translated into machine-readable instructions (machine code) by a compiler before it can be executed
               
      ## Linux / Windows
        * Linux servers comes with all the required compilers and no need to install seperately g++ compiler is used and it can be downloaded from the linux package manager.
        * Install the MinGW package and install all the required compilers and dependencies
               
        ``` BASH
        g++ -o ouput code.cpp
        code.out // in unix kernals
        code.exe // in windows 
        ```
               
        * This will generate an executable file in your system. In UNIX based system, it will create output.out file, in windows it will create output.exe file.
        * To generate and run the compiled file use the below code
               
        ``` BASH in UNIX based kernals
            g++ -o output code.cpp && code.out
        ```
               
        ``` BASH in Windows
            g++ -o output code.cpp && code.exe
        ```
-----------------------------------------------------------------------------------------------------*/
int main (int argc, char *argv[]) {


// ----------------------------------------------------------------------------------------------------
// variable naming conventionsint list_len; // snake case
int list_len; // snake case
int ListLen; // Pascal case
int listLen; // Camel case
int iListLen; // Hungarian case, where the variable data types is mentioned int he beginning of the variable name.
              
/* NOTE: --------------------------------------------------------------------------------------------
------------------------------------PRIMITIVE DATATYPES ---------------------------------------------
     | Type                    | Typical Bit Width | Typical Range                                      |
     |-------------------------|-------------------|----------------------------------------------------|
     | char                    | 1 byte            | -127 to 127 or 0 to 255                            |
     | unsigned char           | 1 byte            | 0 to 255                                           |
     | signed char             | 1 byte            | -127 to 127                                        | 
     | int                     | 4 bytes           | -2147483648 to 2147483647                          |
     | unsigned int            | 4 bytes           | 0 to 4294967295                                    |
     | signed int              | 4 bytes           | -2147483648 to 2147483647                          |
     | short int               | 2 bytes           | -32768 to 32767                                    |
     | unsigned short int      | 2 bytes           | 0 to 65,535                                        |
     | signed short int        | 2 bytes           | -32768 to 32767                                    |
     | long int                | 8 bytes           | -9223372036854775808 to 9223372036854775807        |
     | signed long int         | 8 bytes           | Same as long int                                   |
     | unsigned long int       | 8 bytes           | 0 to 18446744073709551615                          |
     | long long int           | 8 bytes           | - (2^63) to (2^63) - 1                             |
     | unsigned long long int  | 8 bytes           | 0 to 18,446,744,073,709,551,615                    |
     | float                   | 4 bytes           |                                                    |
     | double                  | 8 bytes           |                                                    |
     | long double             | 12 bytes          |                                                    |
     | wchar_t                 | 2 or 4 bytes      | 1 wide character                                   |
-------------------------------------------------------------------------------------------------------
-----------------------------------------------------------------------------------------------------*/

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

/* NOTE: ----------------------------------------------------------------------------------------------------
-----------------------------------------------OPERATORS-----------------------------------------------
    Arithmetic Operators:
    +, -, *, /, %
     
    Relational Operators:
    >, <, >=, <=, ==, !=
     
    Logical Operators:
    ||, &&, !
     
    Unary Operators:
    ++, ++
-------------------------------------------------------------------------------------------------------
-----------------------------------------------------------------------------------------------------*/

    // Increment and decrement operation using prefix and postfix notations
    // postfix increment
    x = 5;
    y = x++; // assigns x to y, then increments x
    // output: y = 5, x = 6
    //
    // prefix increment
    x = 5;
    y = ++x; // increments x by 1, then assigns x value to y

    return 0;
}
