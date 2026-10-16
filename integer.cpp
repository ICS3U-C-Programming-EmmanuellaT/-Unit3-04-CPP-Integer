// Copyright (c) 2026 Emmanuella Taiwo All rights reserved
// Created by: Emmanuella Taiwo
// Date: 16th Oct,2026
// This program asks the user
// for an integer and checks whether the number is
// positive, negative or equal to zero.

#include <iostream>

int main() {
    // declare variables
    int number;

    // get the number from the user
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // check if the number is positive, negative or equal to zero
    if (number > 0) {
        std::cout << "your value is positive." << std::endl;
    } else if (number < 0) {
        std::cout << "your value is negative." << std::endl;
    } else {
        std::cout << "your value is equal to zero." << std::endl;
    }
    return 0;
}
