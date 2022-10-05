#include <iostream>
#include <cmath>

int task3() {
	double r, R, x, y, r_dot;

	std::cout << "Input r: ";
	std::cin >> r;
	std::cout << "Input R: ";
	std::cin >> R;
	while (R <= r) {
		system("cls");
		std::cout << "Input r: " << r << std::endl;
		std::cout << "Error! R <= r. Input R again: ";
		std::cin >> R;
	}
	system("cls");
	std::cout << "Input r: " << r << std::endl;
	std::cout << "Input R: " << R << std::endl;
	std::cout << "Input coordinate x: ";
	std::cin >> x;
	std::cout << "Input coordinate y: ";
	std::cin >> y;

	r_dot = sqrt(x * x + y * y);

	if (r_dot > r && r_dot < R)
		std::cout << "The dot hit in the ring r-R";
	else
		std::cout << "The dot did not hit in the ring r-R";

	return 0;
}