#include <iostream>
#include <vector>
using namespace std;

int main (int argc, char *argv[]) {
    
    /*
     * stl - Standard Template Library
    */

    /* NOTE:
     * Vector
     * 1. Same as array, but the size is dynamic
     * 2. Vector functions:
     *  a. size() - returns the size of the vector
     *  b. push_back() - adds a value to the end of the vector
     *  c. pop_back() - removes the last value from the vector
     *  d. front() - returns the first value in the vector
     *  e. back() - returns the last value in the vector
     *  f. at() - another way of indexing a vector
     */

    vector<int> vec0;
    vector<int> vec1 = {1, 2, 3, 4};
    vector<int> vec2(3, 5); // vector of size 3 with each value being vec0 // vec2(size, value)

    std::cout << "Accessing vector using index : " << endl;
    cout << vec2[0] << endl;
    cout << vec2[1] << endl;
    cout << vec2[2] << endl;

    std::cout << "Accessing Vector using for each loop : " << endl;
    for(int i : vec2) {
        std::cout << i << endl;
    }
    vector<char> vec3 = {'a', 'b', 'c', 'd', 'e', 'f'};

    std::cout << "Char Vector : " << endl;
    for(char i: vec3) {
        std::cout << i << endl;
    }

    std::cout << "Size of Vec3 = " << vec3.size() << endl;
    vec3.push_back('g');
    std::cout << "Vec3 push_back function return : " << endl;
    for(char i : vec3) {
        std::cout << i << endl;
    }
    return 0;
}