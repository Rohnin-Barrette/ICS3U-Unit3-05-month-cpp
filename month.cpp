// Copyright [2021] Rohnin Barrette"  [legal/copyright]

// Created by: Rohnin Barrette
// Created on: Sept 2021
// This program tells the user The month corresponding with the inputted number

#include <iostream>
#include <string>

int main() {
    // This program tells the user The month
    // corresponding with the inputted number
    std::string monthNumberAsString;
    int monthAsInt;

    // input
    std::cout << "Enter a number corresponding with a month(ex: 3 for march): ";
    std::cin >> monthNumberAsString;

    monthAsInt = atoi(monthNumberAsString.c_str());

    // switch in C++ can not support strings, only numbers and char
    // also note you need the break in C++ or it will move to next
    // line in switch statement and might be true again
    switch (monthAsInt) {
        case 1 :
            std::cout << "January" << std::endl;
            break;
        case 2 :
            std::cout << "February" << std::endl;
            break;
        case 3 :
            std::cout << "March" << std::endl;
            break;
        case 4 :
            std::cout << "April" << std::endl;
            break;
        case 5 :
            std::cout << "May" << std::endl;
            break;
        case 6 :
            std::cout << "June" << std::endl;
            break;
        case 7 :
            std::cout << "July" << std::endl;
            break;
        case 8 :
            std::cout << "August" << std::endl;
            break;
        case 9 :
            std::cout << "September" << std::endl;
            break;
        case 10 :
            std::cout << "October" << std::endl;
            break;
        case 11 :
            std::cout << "November" << std::endl;
            break;
        case 12 :
            std::cout << "December" << std::endl;
            break;
        default:
            std::cout << "Thats not a month !";
    }

    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}
