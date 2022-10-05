#include <iostream>

int task1() {
	double coor_A, left_A, right_A, left_B, right_B;

	std::cout << "Input left border A: ";
	std::cin >> left_A;
	std::cout << "Input right border A: ";
	std::cin >> right_A;

	while (left_A >= right_A) {
		system("cls");
		std::cout << "Input left border A: " << left_A << std::endl;
		std::cout << "Inccorect right border. Input again: ";
		std::cin >> right_A;
	}

	system("cls");
	std::cout << "Input left border A: " << left_A << std::endl;
	std::cout << "Input right border A: " << right_A << std::endl;

	std::cout << "Input coordinates A: ";
	std::cin >> coor_A;

	while (coor_A > right_A || coor_A < left_A) {
		system("cls");
		std::cout << "Input left border A: " << left_A << std::endl;
		std::cout << "Input right border A: " << right_A << std::endl;
		std::cout << "Inccorect coordinate. Input again: ";
		std::cin >> coor_A;
	}

	system("cls");
	std::cout << "Input left border A: " << left_A << std::endl;
	std::cout << "Input right border A: " << right_A << std::endl;
	std::cout << "Input coordinate A: " << coor_A << std::endl;

	std::cout << "Input left border B: ";
	std::cin >> left_B;
	std::cout << "Input right border B: ";
	std::cin >> right_B;

	while (left_B >= right_B) {
		system("cls");
		std::cout << "Input left border A: " << left_A << std::endl;
		std::cout << "Input right border A: " << right_A << std::endl;
		std::cout << "Input coordinate A: " << coor_A << std::endl;
		std::cout << "Input left border B: " << left_B << std::endl;
		std::cout << "Inccorect right border. Input again: ";
		std::cin >> right_B;
	}

	system("cls");
	std::cout << "Input left border A: " << left_A << std::endl;
	std::cout << "Input right border A: " << right_A << std::endl;
	std::cout << "Input coordinate A: " << coor_A << std::endl;
	std::cout << "Input left border B: " << left_B << std::endl;
	std::cout << "Input right border B: " << right_B << std::endl;

	std::cout << "Coordinates B: " << (coor_A - left_A) / (right_A - left_A) * (right_B - left_B) + left_B;

	return 0;
}
