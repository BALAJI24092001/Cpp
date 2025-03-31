#include <iostream>
#include <string>
using namespace std;
/*
 NOTE: ------------------------------------------------------------------------------------------------
----------------------------------------------FUNCTIONS----------------------------------------------------
-----------------------------------------------------------------------------------------------------*/
// defining a function
void printHello(){
    cout << "Hello Wrold!";
}
// function with parameters
int add(int a, int b){
    return(a+b);
}
// function overloading
float add(float a, float b){
    return(a + b);
}

/*
 NOTE: ------------------------------------------------------------------------------------------------
----------------------------------OBJECT ORIENTED PROGRAMMING------------------------------------------
                                                                                                  
## Access Modifiers
    1. private: data and methods are accessable inside the class
    2. public: data and methods are accessable to everyone
    3. protected: data and methods are accessable inside class and it's derived class
                                                                                                      
## Encapsulation
    The wrapping up of data and methods together as a single unit is called encapsulation, and we Encapsulat it as a `class`.
                                                                                                      
## Abstraction
    Hiding the unnecessary or sensitive information and making only the some part of the data methods avilable is called Abstraction.
    We implement Abstraction using access modifiers.
                                                                                                      
## Constructor and Destructor
    Constructor: A methods defined with the same name as the class name inside the class with public access specifier is called a constructor.
    Properties:
    1. Same name as the class name
    2. Doesn't have a return type.
    3. Called only once while creating an object of the class.
    4. Memory allocation only happens after the constructor is called.
        
    Destructor: A method defined with the same name as the clasws name, with a prefix of `~`, is called a Destructor.
    Properties:
    1. Same name, with `~` as prefix.
    2. Doesn't have a return type.
    3. Called only once while Object is destoryed.
    4. Memory is cleared from the memory.
                                                                                                      
## Copy Constructor
    Special Constructor(default) used to copy properties of one object into another.
                                                                          
## Shallow and Deep copy
    When we create a new object of the same class, and need the same infomation of the object copied into another object, we pass the old object address in new object delclaration call. Then the object created using the default copy constructor would do the shallow coping. 
    Shallow Copy: Both the object values have the same variable address.
    Deep Copy: The variables inside the new object are dynamically allocated, with new variable address and same variable values.
                                                                          
    In case of Shallow copy, if you copy o1 object values into o2, and happen to change the values in o2, then the value of the same variable inside the obect o1 is also changed.
                                                                          
## Overloading
    A method with same name but different functionality is called overloading.
    There are two types of over loading, method oveloading and operator overloading.
    1. Method Overloading
        Method with same name but different number of arguments passed to it, so there are two or more definitions of the methods and they behave differently.
    2. Operator Overloadng
        Overloading an operator means, to make the regular operator like arithmetic operator, logical operator etc.. to work on used defined data types using classes.
## `this` pointer
    1. `this` is a special pointer in C++ that points to the current object.
    2. this->prop is same as *(this).prop
-----------------------------------------------------------------------------------------------------*/

class Laptop{
private:
    int IP, Model;
public:
    int RAM, ROM, processor;
    string name;
    Laptop(string n){
        this->name = n;
    }
    // Method overloading
    Laptop(string n, int R, int Ro){
        name = n;
        RAM = R;
        ROM = Ro;
    }
    // example of `this` pointer
    Laptop(string name, int RAM){
        this->name = name;
        (*this).RAM = RAM;
    }
};

int main (int argc, char *argv[]) {
    cout << "print hello function\n" << "````````````````````````\n";
    printHello();
    cout << "function with parameters\n" << "````````````````````````\n";
    cout << "sum of 1 and 2 is : "<< add(1, 2) << endl;
    cout << "function overloading\n" << "````````````````````````\n";
    cout << "sum of 1.1 and 2.4 is : "<< add(1.1f, 2.4f) << endl;
/*
 NOTE: ------------------------------------------------------------------------------------------------
----------------------------------------------ARRAY----------------------------------------------------
-----------------------------------------------------------------------------------------------------*/
    int marks[5];
    marks[0] = -7940;
    marks[1] = 4;
    marks[2] = 5;
    marks[3] = 6;
    marks[4] = -90;
    for (short int i = 0; i < 5; i++) {
        std::cout << marks[i] << ' ';
    }
    return 0;
    string explain = "Any code written after the return statement in a function is never compiled.";
    std::cout << explain;
}
