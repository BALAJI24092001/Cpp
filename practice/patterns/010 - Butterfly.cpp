#include <iostream>

int main (int argc, char *argv[]) {
    int length;
    std::cout << "Enter a number : ";
    std::cin >> length;
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length*2; j++) {
            if(j <= i || j >= length*2 - 1 - i){
                std::cout << "* ";
            } else {
                std::cout << "  ";
            }
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length*2; j++) {
            if(j < length - i || j > length+i -1 ){
                std::cout << "* ";
            } else {
                std::cout << "  ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}

/*
Output:
Enter a number : 5
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
--------------------
*/
