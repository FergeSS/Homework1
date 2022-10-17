#include <iostream>
#include <iomanip>

int task4() {
    int i = -1;
    int z = 1;
    double n;
    double pi = 0;

    std::cout << "Input n: ";
    std::cin >> n;

    while (4. / z >= n) {
        i *= -1;
        pi += 4. * i / z;
        z += 2;
    }
    
    std::cout << std::defaultfloat << std::setprecision(10) << pi << std::endl;

    return 0;
}