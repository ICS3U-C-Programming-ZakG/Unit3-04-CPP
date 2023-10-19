// Copyright (c) 2023 Zak Goneau All rights reserved.
//
// Created by: Zak Goneau
// Date Created: Oct. 18, 2023
// This program tells the user whether their inputted number
//  is positive, negative or zero.

#include <iostream>

// Declare variable
int user_number;

int main() {
    // Introduce program to user and get user number
    std::cout << "This program tells the user whether their inputted number";
    std::cout << " is positive, negative or zero.\n";
    std::cout << "Please enter a number: ";
    std::cin >> user_number;

    // Check if user number is positive, negative or zero.
    // Then tell user if it's positive, negative or zero.
    if (user_number > 0) {
        std::cout << "" << user_number << " is a positive number.\n";
    } else if (user_number < 0) {
        std::cout << "" << user_number << " is a negative number.\n";
    } else if (user_number == 0) {
        std::cout << "" << user_number << " is just zero!\n";
    } else
        std::cout << "No idea\n";
}
