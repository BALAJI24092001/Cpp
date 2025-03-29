#include <iostream>
#include "istream"

int main (int argc, char *argv[]) {
    int length;
    std::cout << "Enter a number: ";
    std::cin >> length;
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length- i-1; j++) {
            std::cout << "  ";
        }
        for (int j = 0; j < i; j++) {
            std::cout << j + 1 << " ";
        }
        for (int j = i+1; j > 0; j--) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}

/*  
Output:
                  1
                1 2 1
              1 2 3 2 1
            1 2 3 4 3 2 1
          1 2 3 4 5 4 3 2 1
        1 2 3 4 5 6 5 4 3 2 1
      1 2 3 4 5 6 7 6 5 4 3 2 1
    1 2 3 4 5 6 7 8 7 6 5 4 3 2 1
  1 2 3 4 5 6 7 8 9 8 7 6 5 4 3 2 1
1 2 3 4 5 6 7 8 9 10 9 8 7 6 5 4 3 2 1
*/
