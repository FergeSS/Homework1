#include <iostream>

int task5() {
    int n, k, i, j, s, count;

    std::cout << "Input N: ";
    std::cin >> n;

    std::cout << "Input quantity of rhomb: ";
    std::cin >> count;


    for (i = 1; i <= n; i++) {
        for (s = 0; s < count; s++) {
            if (s == 0) {
                for (k = 0; k < n - i; k++) {
                    std::cout << " ";
                }
            }
            else {
                for (k = 0; k < 2*(n - i); k++) {
                    std::cout << " ";
                }
            }
            for (j = 1; j < i * 2; j++) {
                std::cout << "*";
            }
        }
        std::cout << std::endl;
    }
    for (i = 1; i <= n - 1; i++) {
        for (s = 0; s < count; s++) {
            if (s == 0) {
                for (k = n; k > n - i; k--) {
                    std::cout << " ";
                }
            }
            else {
                for (k = n; k > n - 2 * i; k--) {
                    std::cout << " ";
                }
            }
            for (j = n * 2 - 1; j > i * 2; j--) {
                std::cout << "*";
            }
        }
        std::cout << std::endl;
    }

	return 0;
}