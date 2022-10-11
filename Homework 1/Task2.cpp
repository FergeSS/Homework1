#include <iostream>
#include <cmath>;

int task2() {
	double a, b, c, D;

	std::cout << "Input a: ";
	std::cin >> a;
	std::cout << "Input b: ";
	std::cin >> b;
	std::cout << "Input c: ";
	std::cin >> c;

	if (a == 0) {
		if (b != 0)
			std::cout << "Solution: " << -c / b;
		else {
			if (c != 0)
				std::cout << "No solutions";
			else
				std::cout << "Any number is solution";
		}		
	}
	
	else {
		if (b == 0) {
			if (c > 0) {
				std::cout << "Solution1: " << sqrt(c / a) << "i" << std::endl;
				std::cout << "Solution2: " << -sqrt(c / a) << "i";
			}
			if (c < 0) {
				std::cout << "Solution1: " << sqrt(-c / a) << std::endl;
				std::cout << "Solution2: " << -sqrt(-c / a);
			}
			if (c == 0)
				std::cout << "Solution1,2:  0";
		}
		else {
			if (c == 0) {
				std::cout << "Solution1: 0" << std::endl;
				std::cout << "Solution2: " << -b/a;
			}
			else {
				D = b * b - 4 * a * c;
				if (D > 0){
					std::cout << "Solution1: " << (- b + sqrt(D)) / (2 * a) << std::endl;
					std::cout << "Solution1: " << (-b - sqrt(D)) / (2 * a) << std::endl;
				}
				else {
					std::cout << "Solution1: " << (- b + sqrt(-D)) / (2 * a) << "i" << std::endl;
					std::cout << "Solution1: " << (- b - sqrt(-D)) / (2 * a) << "i" << std::endl;
				}
			}
		}
	}
	return 0;
}