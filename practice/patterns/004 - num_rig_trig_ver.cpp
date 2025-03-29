#include <iostream>

int main (int argc, char *argv[]) {
    int length = 4;
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < i+1; j++) {
            std::cout << j + 1 << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
