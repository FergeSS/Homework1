#include <iostream>
#include "Tasks3.h"

int main(){   
    int flag;

    std::cout << "Choose Task (1 to 5): ";
    std::cin >> flag;

    while (flag != 1 && flag != 2 && flag != 3 && flag != 4 && flag != 5) {
        system("cls");
        std::cout << "Inccorect. Choose Task (1 to 5): ";
        std::cin >> flag;
    }
    if (flag == 1) {
        system("cls");
        task1();
    }
    if (flag == 2) {
        system("cls");
        task2();
    }
    if (flag == 3) {
        system("cls");
        task3();
    }

    if (flag == 4) {
        system("cls");
        task4();
    }

    if (flag == 5) {
        system("cls");
        task5();
    }

    return 0;
}
