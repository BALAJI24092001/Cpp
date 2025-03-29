#include <iostream>

int main (int argc, char *argv[]) {
    int length = 4;
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            if(j < i){
                std::cout << "  ";
            } else{
                std::cout << i+1 << " ";
            }
        }
        std::cout << std::endl;
        
    }

    return 0;
}
