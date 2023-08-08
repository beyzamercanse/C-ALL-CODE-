// FRACTIONAL NUMBER

#include <iostream>
#include <iomanip> // for setprecision


int main(){

    // declare and initialize the variables
    float number1 = 1.12345678901234567890f; // precision : 7
    double number2 = 1.12345678901234567890; // precision : 15
    long double number3 = 1.12345678901234567890L; // precision : 

    // print out the sizes
    std::cout << "sizeof float: " << sizeof(float) << std::endl;
    std::cout << "sizeof double: " << sizeof(double) << std::endl;
    std::cout << "sizeof long double : " << sizeof(long double) << std::endl;

    std::cout << std::setprecision(20) << std::endl; // control the precision from cout == setprecision manipulates the floating point numbers by giving them a precise value after decimals up to n significant digits.
    std::cout << "number1 is : " << number1 << std::endl;
    std::cout << "number2 is : " << number2 << std::endl;
    std::cout << "number3 is : " << number3 << std::endl;


        return 0;
}
/*

sizeof float: 4
sizeof double: 8
sizeof long double : 16

number1 is : 1.1234568357467651367
number2 is : 1.1234567890123456912
number3 is : 1.1234567890123456789

*/

// ------------------------------------------------------


/*

n(floating point)/0 = infinity +-
0.0/0.0 = NaN


*/