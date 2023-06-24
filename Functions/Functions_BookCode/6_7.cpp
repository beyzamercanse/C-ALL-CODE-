// This program demonstrates a function with a parameter.

#include <iostream>
using namespace std;

// function prototype
void displayValue(int);

int main(){

    cout << "I am passing several values to Display Value.\n";
    displayValue(5); // Call displayValue with argument 5
    displayValue(10); // Call displayValue with argument 10
    displayValue(2); // Call displayValue with argument 2
    displayValue(16); // Call displayValue with argument 16
    cout << "NOW I AM BACK IN MAIN.\n";
    return 0;
}

//*********************************************************
// Definition of function displayValue. *
// It uses an integer parameter whose value is displayed.*
//*********************************************************

void displayValue(int num)
{
    cout << "the value is " << num << endl;
}

/*

I am passing several values to Display Value.
the value is 5
the value is 10
the value is 2
the value is 16
NOW I AM BACK IN MAIN.

*/