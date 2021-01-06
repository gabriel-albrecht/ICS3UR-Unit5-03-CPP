// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by Gabriel A
// Created on Jan 2021
// This program converts levels into percentages

#include <iostream>
#include <string>

int gradeLevel(std::string gradeMark) {
    // calculate area
    float percentage;

    // process
    if (gradeMark == "4+") {
        percentage = 97.5;
    } else if (gradeMark == "4") {
        percentage = 90.5;
    } else if (gradeMark == "4-") {
        percentage = 83;
    } else if (gradeMark == "3+") {
        percentage = 78;
    } else if (gradeMark == "3") {
        percentage = 74.5;
    } else if (gradeMark == "3-") {
        percentage = 71;
    } else if (gradeMark == "2+") {
        percentage = 68;
    } else if (gradeMark == "2") {
        percentage = 64.5;
    } else if (gradeMark == "2-") {
        percentage = 61;
    } else if (gradeMark == "1+") {
        percentage = 58;
    } else if (gradeMark == "1") {
        percentage = 54.5;
    } else if (gradeMark == "1-") {
        percentage = 51;
    } else if (gradeMark == "R") {
        percentage = 24.5;
    } else if (gradeMark == "r") {
        percentage = 24.5;
    } else {
        percentage = -1;
    }

    // output
    return percentage;
}

main() {
    // this function gets length and width
    int gradeMark;
    std::string gradeMarkString;

    // input
    std::cout << "Enter a mark: ";
    std::cin >> gradeMarkString;
    std::cout << std::endl;

    // call functions
    gradeMark = gradeLevel(gradeMarkString);

    // output
    if (gradeMark > 0) {
        std::cout << gradeMarkString << " is on average " <<
        gradeMark << "%" << std::endl;
    } else {
        std::cout << "That is an invalid mark." << std::endl;
    }
}
