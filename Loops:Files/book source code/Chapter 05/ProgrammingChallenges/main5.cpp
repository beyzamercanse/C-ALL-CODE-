#include <iostream>

int main() {
    // Display Pattern A and Pattern B side by side
    for (int rows = 1; rows <= 10; ++rows) {
        // Pattern A
        for (int cols = 1; cols <= rows; ++cols) {
            std::cout << "+";
        }

        // Add spacing between Pattern A and Pattern B
        std::cout << "\t\t";

        // Pattern B
        for (int cols = 10; cols >= rows; --cols) {
            std::cout << "+";
        }
        std::cout << std::endl;
    }

    return 0;
}





