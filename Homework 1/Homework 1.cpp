#include <iostream>
#include "Tasks.h"

int main(){
    int flag;

    std::cout << "Choose Task (1, 2 or 3): ";
    std::cin >> flag;
    
    while (flag != 1 && flag != 2 && flag != 3) {
        system("cls");
        std::cout << "Inccorect." << " Choose Task (1, 2 or 3): ";
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

}

