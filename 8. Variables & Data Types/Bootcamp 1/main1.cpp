//    NUMBER SYSTEMS    //

#include <iostream>
using namespace std;

int main(){

    int number1 = 15; // decimal
    int number2 = 017; // octal = because it starts with 0
    int number3 = 0x0f; // hexadecimal
    int number4 = 0b00001111; // Binary

    cout << "number 1 is: " << number1 << endl;
    cout << "number 2 is:  " << number2 << endl;
    cout << "number 3 is: " << number3 << endl;
    cout << "number 4 is: " << number4 << endl;

/*
number 1 is: 15
number 2 is:  15
number 3 is: 15
*/

}

/*
BINARY - DECIMAL - HEX
0000 =    0         0
0001 =    1         1
0010 =    2         2
0011 =    3         3
0100 =    4         4
0101 =    5         5
0110 =    6         6
0111 =    7         7
1000 =    8         8
1001 =    9         9
1010 =    10        A
1011 =    11        B 
1100 =    12        C
1101 =    13        D
1110 =    14        E
1111 =    15        F

*/

/* 
HEXADECIMAL SYSTEM: 
0110 1110 0011 0000 1111 0001 0011 1111
6     E    3    0    F    1    3     F

== 0X 6E30F13F
(PARTIAL THE NUMBER FROM THE LEAST TO INITIAL BY 4 DIGITS.)
*/


/* 
OCTAL SYSTEM:
PART BY 3 DIGITS ( 111, 110, 001, 011....)
*/

