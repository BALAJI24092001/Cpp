#include <iostream>

int sum_of_digits(int num){
    int sum = 0;
    while(num > 0){
        int temp = num % 10;
        num /= 10;
        sum += temp;
    }
    return(sum);
}

int main (int argc, char *argv[]) {
    int num;
    std::cout << "Enter a big number : ";
    std::cin >> num;
    int sum = sum_of_digits(num);
    std::cout << "Sum of digits of the given number is : " << sum;
    return 0;
}
