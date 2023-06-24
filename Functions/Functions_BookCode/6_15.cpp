// This program uses a function that returns true or false.

#include <iostream>
using namespace std;

// function prototype
bool isEven(int);

int main(){
    int val;

    // Get a number from the user.
    cout << "Enter an integer and I will tell you ";
    cout << "if it is even or odd: ";
    cin >> val;

    // Indicate whether it is even or odd.
    if (isEven(val)) // When the if statement executes, isEven is called with val as its argument. If val is even, isEven returns true; otherwise, it returns false.
        cout << val << " is even.\n";
    else
        cout << val << " is odd.\n";

    return 0;
}

bool isEven(int number)
{
    bool status;

    if (number % 2 == 0)
        status=true;
    else
        status = false;

    return status;
}
