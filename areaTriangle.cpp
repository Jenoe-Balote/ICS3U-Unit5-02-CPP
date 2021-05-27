// Copyright (c) 2021 Jenoe Balote All rights reserved
//
// Created by Jenoe Balote
// Created on May 2021
// This program calculates the area of a triangle

#include <iostream>
#include <cmath>

void CalculateArea(int numBase, int numHeight) {
    int area;

    // process & output
    area = (numBase * numHeight) / 2;
    std::cout << "" << std::endl;
    std::cout << "The area is " << area << "cm²." << std::endl;
}

main() {
    // this function calls other functions
    std::string stringBase;
    std::string stringHeight;
    int numHeight;
    int numBase;

    // input
    std::cout << "Let's calculate the area of a triangle!" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Enter base (cm): ";
    std::cin >> stringBase;
    std::cout << "Enter height (cm): ";
    std::cin >> stringHeight;

    // call function
    try {
        numBase = std::stoi(stringBase);
        numHeight = std::stoi(stringHeight);
        CalculateArea(numBase, numHeight);
    }
    catch (std::invalid_argument) {
        std::cout << "" << std::endl;
        std::cout << "Invalid." << std::endl;
    }
    std::cout << "" << std::endl;
    std::cout << "Thanks for participating!"<< std::endl;
}
