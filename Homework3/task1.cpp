#include <iostream>

int task1() {
    int n;
    double summ = 0;
    std::cout << "Input n (n > 0): ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        summ += 1. / i;
    }

    std::cout << summ << std::endl;

    return 0;
}