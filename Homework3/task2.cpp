#include <iostream>

int task2() {
    int n;
    int n_2 = 1;
    long double summ = 1;

    std::cout << "Input n (n > 0): ";
    std::cin >> n;

    for (int i = 2; i <= n; ++i) {
        n_2 *= 2;
        summ += 1. / n_2;
    }

    std::cout << summ << std::endl;

    return 0;
}