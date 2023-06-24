// This program uses a function that returns a value.

#include <iostream>
using namespace std;

// Function prototype
int sum(int, int);

// main function
int main()
{
    int value1 = 20, //first value
        value2 = 40, //sec value
        total; // to hold the total

    // Call the sum function, passing the contents of
    // value1 and value2 as arguments. Assign the return
    // value to the total variable.
    total = sum(value1, value2);

    // display the sum of values
    cout << "the sum of " << value1 << " and " << value2 << " is " << total << endl;

    return 0;
}

int sum(int num1, int num2){ // int sum = sum's return type is an integer, thats why we return num1+num2
    return num1 + num2;
}