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
    for (int i = 2; i < n; i++) {
        if(is_prime(i)){
            std::cout << i << " ";
        }
        
    }

    return 0;
}
