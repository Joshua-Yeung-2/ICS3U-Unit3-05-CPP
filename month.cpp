// copyright (c) 2020 Joshua Yeung All rights reserved

// Created by: Joshua Yeung
// Created on October 2021
// This program is to identify the nunber of month

#include <iostream>
#include <string>

int main() {
    // this function is to identify the nunber of month
    int numberOfMonth;

    // input
    std::cout << "Enter the number of month(ex: 3 for March): ";
    std::cin >> numberOfMonth;
    std::cout << "" << std::endl;

    // process
    switch (numberOfMonth) {
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
        default :
            std::cout << "sorry this month didn't exist" << std::endl;
    }

    std::cout << "\nDone" << std::endl;
}
