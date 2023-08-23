/*

Conversion Table from Degrees to Radians
Write a program to generate a table of conversion from degrees to radians.
 The value of degrees should start with 0° and end with 90°. 
 Increment each row from the previous one by 10°. 
 (Note that π 5 180° 5 3.141593 radians.)

 

*/

#include <iostream>
#include <cmath>

int main() {
    const double PI = 3.141593;
    
    // Display the header
    std::cout << "Degrees\tRadians" << std::endl;
    
    // Generate the table
    for (int degrees = 0; degrees <= 90; degrees += 10) {
        double radians = (degrees * PI) / 180.0;
        std::cout << degrees << "°\t" << radians << std::endl;
    }
    
    return 0;
}

/*

Degrees Radians
0°      0
10°     0.174533
20°     0.349066
30°     0.523599
40°     0.698132
50°     0.872665
60°     1.0472
70°     1.22173
80°     1.39626


*/