#include <iostream>
#include "Tasks2.h"

int main(){
    int task;

    std::cout << "Input task: ";
    std::cin >> task;

    if (task == 1) {
        task1();
    }

    if (task == 2) {
        task2();
    }

    if (task == 3) {
        task3();
    }

    if (task == 4) {
        task4();
    }

    if (task == 5) {
        task5();
    }

    if (task == 6) {
        task6();
    }

    if (task == 7) {
        task7();
    }

    if (task == 8) {
        task8();
    }

    return 0;
    
}

