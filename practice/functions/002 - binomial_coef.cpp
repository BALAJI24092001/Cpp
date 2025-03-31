#include <iostream>

int fact(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return(fact);
}
int binom_coef(int n, int r){
    if(r > n){
        std::cout << "ill defined values";
        return(0);
    } else{
        int val = fact(n)/(fact(n-r)*fact(r));
        return(val);
    }
}

int main (int argc, char *argv[]) {
    int n, r;
    std::cout << "Enter value of n : ";
    std::cin >> n;
    std::cout << "Enter value of r : ";
    std::cin >> r;
    int bin_coef = binom_coef(n, r);
    std::cout << "Binomial Coefficient : " << bin_coef << std::endl;
    return 0;
}
