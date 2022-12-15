#include "calculator.h"


int CalculateIt(int a, char command, int b) {
    if (command == '+') {
        return a + b;
    }

    if (command == '-') {
        return a - b;
    }

    if (command == '*') {
        return a * b;
    }

    if (command == '/') {
        return a / b;
    } else {
        std::cout << "Something went wrong";
        exit(-1);
    }

}