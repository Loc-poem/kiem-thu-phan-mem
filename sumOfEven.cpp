#include <iostream>

int main() {
    int number;
    int sum = 0;

    std::cin >> number;
    while (number > 0) {
        int digit = number % 10; 
        if (digit % 2 == 0) {
            sum += digit; 
        }

        number /= 10; 
    }
    std::cout << "Tổng các chữ số chẵn là: " << sum << std::endl;

    return 0;
}