#include <iostream>

int task4() {
    int n, k, i, j;

    std::cout << "Input N: ";
    std::cin >> n;

    for (i = 1; i <= n; i++) {
        for (k = 0; k < n - i; k++) {
            std::cout << " ";
        }
        for (j = 1; j < i * 2; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    for (i = 1; i <= n - 1; i++) {
        for (k = n; k > n - i; k--) {
            std::cout << " ";
        }
        for (j = n * 2 - 1; j > i * 2; j--) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}