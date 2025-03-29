#include <iostream>

int main (int argc, char *argv[]) {
    int length = 4;
    for (int i = 0; i < length; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    return 0;
}
