#include <iostream>

int calculateSum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int X(int n) {
    int total = 0;
    for (int i = 1; i <= n; i++) {
        total += calculateSum(i);
    }
    return total;
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    std::cout << "X(" << n << ") = " << X(n) << std::endl;

    return 0;
}