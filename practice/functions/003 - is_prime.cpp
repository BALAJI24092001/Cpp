#include <iostream>

bool is_prime(int n){
    for (int i = 2; i <= (int)(n/2); i++) {
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main (int argc, char *argv[]) {
    std::cout << "Enter a number : ";
    int n;
    std::cin >> n;
    bool des = is_prime(n);
    des == true? std::cout << n << " is a prime number.": std::cout << n << " is not a prime number.";
    return 0;
}
