#include <iostream>

int main (int argc, char *argv[]){
    int length = 5;
    for (int i = 1; i < length; i++) {
        for(int j = i; j > 0; j--){
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
