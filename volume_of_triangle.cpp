// Copyright (c) 2022 Lucas LeBlanc All rights reserved

// Created by: Lucas LeBlanc
// Created on: Nov 2022
// This program finds the volume of a triangle

#include <math.h>

#include <iostream>

float TriangleVolumeCalculation(int base, int height, int length) {
    // This function finds the volume of the triangle
    float volume;

    // Process
    volume = ((base * height) / 2) * length;

    return volume;
}

int main() {
    // This function gets the base and height from the user
    std::string base_from_user;
    std::string height_from_user;
    std::string length_from_user;
    int base;
    int height;
    int length;
    float volume;

    // Input
    std::cout << "Enter the base of the triangle (cm): ";
    std::cin >> base_from_user;
    std::cout << "" << std::endl;
    std::cout << "Enter the height of the triangle (cm): ";
    std::cin >> height_from_user;
    std::cout << "Enter the length of the triangle (cm): ";
    std::cin >> length_from_user;

    std::cout << "" << std::endl;

    try {
        base = std::stoi(base_from_user);
        height = std::stoi(height_from_user);
        length = std::stoi(length_from_user);
        // Call function
        volume = TriangleVolumeCalculation(base, height, length);
        std::cout << "The volume of a triangle with the base of "
                  << base << " cm, the height of " << height << " cm, and the length of "
                  << length << "cm is "
                  << volume << " cm³.";
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
