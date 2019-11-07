// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Jaeyoon Lee
// Created on: Nov 2019
// This program prints five integers per line

#include <iostream>

main() {
    // this function prints five integers per line
    int counter;

    // process & output
    for (counter = 1000; counter < 2001; counter++) {
        if (counter % 5 != 4) {
            std::cout << counter << " ";
        } else {
            std::cout << counter << std::endl;
        }
    }
}
