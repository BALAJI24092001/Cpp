#include <iostream>

int main (int argc, char *argv[]) {
    int temp = 1, length = 4;
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < i+1; j++) {
            std::cout << temp++ << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
