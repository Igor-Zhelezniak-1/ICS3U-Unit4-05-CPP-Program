// Copyright (c) 2021 Igor All rights reserved
//
// Created by: Igor
// Created on: Nov 2021
// This program is game

#include <iostream>
#include <random>

main() {
    // this function uses a break statement
    std::string integer1;
    std::string integer2;
    int numberOfNumbers;
    int number;
    int answer = 0;

    // input
    std::cout << "How many number are you going to add: ";
    std::cin >> integer1;
    try {
        numberOfNumbers = std::stoi(integer1);
        for (int loopCounter = 0;
            loopCounter < numberOfNumbers; loopCounter++) {
            if (loopCounter == numberOfNumbers) {
                continue;
            } else {
                std::cout << "Enter a number to add: ";
                std::cin >> integer2;
                try {
                    number = std::stoi(integer2);
                    if (number < 0) {
                        answer = answer;
                    } else {
                        answer = answer + number;
                    }
                } catch (std::invalid_argument) {
                    std::cout << "This was not a number" << std::endl;
                }
            }
        }
        std::cout << "Sum of just the positive number is = "
        << answer << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "This was not a number" << std::endl;
    }

    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}


