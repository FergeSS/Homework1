#include <iostream>
#include <cmath>
#include <iomanip>

int task5() {
    double x1;
    double x2;
    double dx;
    double eps;
	double y;
	double tmp;
	int k = 0;
	int fact;

    std::cout << "Input x1: ";
    std::cin >> x1;

	std::cout << "Input x2: ";
	std::cin >> x2;
	while (x2 < x1) {
		system("cls");
		std::cout << "Input x1: " << x1 << std::endl;
		std::cout << "Error! x2 < x1. Input x2 again: ";
		std::cin >> x2;
	}
	system("cls");
	std::cout << "Input x1: " << x1 << std::endl;
	std::cout << "Input x2: " << x2 << std::endl;
	std::cout << "Input step: ";
	std::cin >> dx;
	std::cout << "Input eps: ";
	std::cin >> eps;
	
	std::cout << "x| f(x)         | sin(x)" << std::endl;

	for (double x = x1; x <= x2; x += dx) {
		std::cout << x << "| ";
		tmp = x;
		fact = 1;
		
		int i = 1;
		double x_pow = x;

		while (x_pow / fact >= eps || -x_pow / fact >= eps) {
			i *= -1;
			x_pow *= x * x;
			fact *= (fact + 1) * (fact + 2);
			tmp += i * x_pow / fact;
		}
		std::cout << std::defaultfloat << std::setprecision(10) << tmp << " | " << sin(x) << std::endl;
	}


    return 0;
}