#include <iostream>

int main (int argc, char *argv[]) {
    int length;
    std::cout << "Enter a number: ";
    std::cin >> length;
    for (int i = 0; i < length - 1; i++) {
        // std::cout << "  ";
        for (int j = 0; j < (length-1)*2; j++) {
            if((length-1) - i == j || (length-1) + i == j){
                std::cout << "* ";
            } else {
                std::cout << "  ";
            }
        }
        std::cout << std::endl;
    }
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length*2; j++) {
            if(i == j || length*2 - 2 - i == j){
                std::cout << "* ";
            }else {
                std::cout << "  ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}

/* 
Output:
Enter a number: 6
          *
        *   *
      *       *
    *           *
  *               *
*                   *
  *               *
    *           *
      *       *
        *   *
          *

*/
