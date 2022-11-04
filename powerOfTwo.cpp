// Copyright (c) 2022 Immaculata HS All rights reserved.
//
// Created by: Joseph Kwon
// Created on: November 3 2022
// This program gets the user's input and outputs a
// list of numbers up to the user's number to a power of 2

#include <iostream>
#include <cmath>

int main() {
    // initialization of counter, product, and user input
    int positiveInteger;
    int powerOfTwo;
    int loopCounter = 0;
        std::string userNumberStr;

    // Get the user's input
    std::cout << "Enter a whole number: ";
    std::cin >> userNumberStr;
    std::cout << std::endl;

    // Tries casting the user's number to an integer
    try {
        positiveInteger = std::stoi(userNumberStr);

        // Program restarts if user's year could not be casted to an integer
    } catch (std::invalid_argument) {
        std::cout << "You must enter an integer.\n\n";
        return main();
    }

    // check if user's number is a negative number
    if (positiveInteger < 0) {
        std::cout << "You must enter a positive integer" << std::endl;
    } else {
        // Code executed continually until user_number is equal to counter
        for (loopCounter = 0; loopCounter <= positiveInteger; loopCounter++) {
            powerOfTwo = pow(loopCounter, 2);
            std::cout << loopCounter << "^2 = " << powerOfTwo << std::endl;
        }
    }
}
