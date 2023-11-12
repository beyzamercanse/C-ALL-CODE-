//  STR-COMPARE IN DETAIL

#include <iostream>
#include <cstring>  // Include the C string manipulation functions

int main() {
    // Example strings
    const char* str1 = "Hello";
    const char* str2 = "World";

    // Compare the strings using strcmp
    int result = std::strcmp(str1, str2);

    // Check the result of the comparison
    if (result == 0) {
        std::cout << "The strings are equal." << std::endl;
    } else if (result < 0) {
        std::cout << "str1 is lexicographically less than str2." << std::endl;
    } else {
        std::cout << "str1 is lexicographically greater than str2." << std::endl;
    }

    return 0;
}


// str1 is lexicographically less than str2.