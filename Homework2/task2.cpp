#include <iostream>

int task2() {
    int n, k, i;

    std::cout << "Input N: ";
    std::cin >> n;

    for (i = 1; i <= n; i++) {
        for (k = 0; k < i; k++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}