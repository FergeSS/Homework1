#include <iostream>
#include <cmath>

int task3() {
    int n;
    double x;
    double summ = 0;

    std::cout << "Input n (n > 0): ";
    std::cin >> n;

    std::cout << "Input x (0 <= x <= 3.1415926...): ";
    std::cin >> x;

    for (int i = 1; i <= n; ++i) {
        x = sin(x);
        summ += x;
    }

    std::cout << summ << std::endl;

    return 0;
}