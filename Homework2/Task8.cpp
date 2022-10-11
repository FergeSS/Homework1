#include <iostream>

double my_pow( double digit,  int pow) {
	int i;
	double digit1 = digit;

	for (i = 1; i < pow; i++) {
		digit *= digit1;
	}

	return digit;	
}

int task8() {
	int w, h;

	for (h = 20; h >= 0; h--) {
		for (w = 40; w >= 0; w--) {
			double x, y;

			x = 3 * double(w)/ 40 - 1.5;
			y = 3 * double(h) / 20 - 1.5;

			if (my_pow((my_pow(x, 2) + my_pow(y , 2) - 1), 3) - my_pow(x, 2) * my_pow(y, 3) <= 0)
				std::cout << "*";
			else 
				std::cout << ".";
			
		}
		std::cout << std::endl;
	}
	
	return 0;
}