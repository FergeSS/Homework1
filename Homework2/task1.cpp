#include <iostream>

int task1() {
    int n, i, summ = 0;

    std::cout << "Input N: ";
    std::cin >> n;

    for (i = 1; i <= n; i++)
        summ += i;

    std::cout << double(summ) / n << std::endl;

    return 0;
}