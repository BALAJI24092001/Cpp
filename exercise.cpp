#include <cmath>
#include <iostream>
#include <ostream>
#include <cmath>
using namespace std;
int main (int argc, char *argv[]) {
// -----------------------------------------------------------
    // problem 1
    // If both x and y variables are integers, the mathematical expression in z will return an integer value, but there is loss of information, so we need to declare either x or y to be a float or double to make the z variable expression to return a float value i.e., a decimal value
    float x = 10;
    int y = 5;
    float z = (x + 10)/ (3*y);
    cout << z << endl;
    // output: 1.333
// -----------------------------------------------------------
    double val = ceil(1.67);
    cout << val << endl;
    return 0;
}
