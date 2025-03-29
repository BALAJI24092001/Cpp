#include <iostream>

int main (int argc, char *argv[]) {
    int t = 1, length = 3;
    for (int i = 0; i < length; i++) {
       for (int j = 0; j < length; j++) {
           std::cout << t++ << " ";
       } 
       std::cout << std::endl;
    }
    return 0;
}
