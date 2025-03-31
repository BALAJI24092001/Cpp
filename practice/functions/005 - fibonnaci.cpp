#include <iostream>

int main (int argc, char *argv[]) {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    int n1 = 1, n2 = 1, temp;
    for (int i = 0; i < n; i++) {
        std::cout << n1 << " ";
        temp = n1;
        n1 = n2;
        n2 = temp + n1;
    }
    return 0;
}
