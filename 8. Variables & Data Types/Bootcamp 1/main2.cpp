// INTEGERS & INTEGER MODIFIERS

#include <iostream>
using namespace std;

int main(){

    /*
    
    // wont compile, the expression in the braces uses undeclared variables
    int bad_initialization = doesnt_exist1 + doesnt_exist2 ;

    // 2.9 is of type double, wiith a wider range than int. error or warning
    int narrowing_conversiion = 2.9;

    // size of a type in memory = sizeof(int) , sizeof(truck_count)...

    */

   int elephant_count;  // variable may contain random garbage value .  WARNING
    int lion_count = 0 ; // initialize to 0
    int dog_count = 10;  // iniitialize to 10
    int cat_count = 15;  // iniitialize to 15

    int narrow_conv = 2.9; //double to int
    int narrowing_conversion = (2.9); // double to int 
    int narrowing_conversion_braces = {2.9};

    // can use expression as initializer
    int domesticated_animals = dog_count + cat_count;

    cout << elephant_count << endl; // 25021728
    cout << dog_count << endl; // 10
    cout << domesticated_animals << endl; // 25
    cout << cat_count << endl;  // 15
    cout << narrow_conv << endl; // 2
    cout << narrowing_conversion << endl; // 2
    cout << narrowing_conversion_braces << endl; //2

    // check the size with sizeof
    cout << "sizeof int : " << sizeof(int) << endl; // int takes 4 bytes in memory
    cout << " sizeof narrow_conv is: " << sizeof(narrow_conv) << endl; // integers take 4 bytes in memory
    cout << sizeof(2.4545) << endl; // doubles take 8 bytes in memory
    cout << sizeof("hello world where are you ") << endl;  // this string takes 27 in memory
    cout << sizeof(0xfde334) << endl; // hex take 4 bytes in memory
    /*
    sizeof int : 4
     sizeof narrow_conv is : 4
    */

   // INTEGER MODIFIERS
   // unsigned range  =       0 ~ 2^n -1  ,,,, 4 bytes in memory and range will be from 0 to 4 billion...
   // signed range =    - 2^(n-1) ~ 2^(n-1) - 1    ,,, 4 bytes in memory and range will be from - 2 billion something to + 2 billion something 

    short short_var = -32768; // 2 bytes
    short int short_int = 455; // 2
    signed short signed_short = 122; // 2
    signed short int signed_short_int = -456; // 2
    unsigned short int unsigned_short_int = 456; // 2


    int int_var = 55; // 4 bytes
    signed signed_var = 66; // 4
    signed int signed_int = 77; // 4
    unsigned int unsigned_int = 77; // 4


    long long_var = 88; // 4 or 8 bytes
    long int long_int = 33;  // 4-8
    signed long signed_long = 44;  // 4-8
    signed long int signed_long_int = 44;  // 4-8
    unsigned long int unsigned_long_int = 44;  // 4-8


    long long long_long = 888; // 8 bytes
    long long int long_long_int = 999; // 8
    signed long long signed_long_long = 444;  // 8
    signed long long int signed_long_long_int = 1234;  // 8
    unsigned long long int unsigned_long_long_int =  1234;  // 8


    // examples
    cout << short_var << endl;
    cout << sizeof(short_var) << endl; // 2
    cout << short_int << endl;
    cout << sizeof(short_int) << endl; // 2
    cout << signed_short << endl;
    cout << sizeof(signed_short) << endl; // 2
    cout << signed_short_int  << endl;
    cout << sizeof(signed_short_int) << endl; // 2
    cout << unsigned_int << endl;
    cout << sizeof(unsigned_int)<< endl; // *****  4
    cout << sizeof(unsigned_long_long_int) << endl;  // 8

    unsigned int value3 = 4;
    unsigned int value4 = -5; // compiler error cuz its signed int = it will console out another big number cuz its signed but signified as unsigned number...
    cout << value4 << endl; // 4294967291




    return 0;
}
