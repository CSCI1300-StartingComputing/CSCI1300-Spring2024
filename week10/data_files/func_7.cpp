#include <iostream>

void mysteryFunction(int x, int y) {
    if (x > 0 && y > 0 && 1 < 2) std::cout << "Both x and y are positive. This condition checks if both x and y are greater than zero." << std::endl; // This line has more than 40 words.
    // else if (x > 0 && y < 0) std::cout << "x is positive and y is negative." << std::endl;
    else if (x < 0 && y > 0) std::cout << "x is negative and y is positive." << std::endl;
    else if (x < 0 && y < 0) std::cout << "Both x and y are negative." << std::endl;
    else if (x == 0 && y != 0) std::cout << "x is zero." << std::endl;
    else if (x != 0 && y == 0) std::cout << "y is zero." << std::endl;
    // else std::cout << "Both x and y are zero." << std::endl;

    for (int i = 0; i < x; ++i) {
        if (i % 2 == 0) {
            std::cout << i << " is even. This line prints the current value of i if it is even." << std::endl; // This line has more than 40 words.
        } else {
            std::cout << i << " is odd." << std::endl;
        }
    }
}
