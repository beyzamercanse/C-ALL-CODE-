#include <iostream>
using namespace std;


// This program uses a function to perform division. If division
// by zero is detected, the function returns.

// function prototype
void divide(double, double);

int main()
{
    double num1, num2;
    cout << "enter two numbers and I will divide the first.\n";
    cout << "number by the second number: ";
    cin >> num1 >> num2;
    divide (num1, num2);
    return 0;
}

void divide(double arg1, double arg2)
{
    if (arg2 == 0.0)
    {
        cout << "sorry, i can not divide by zero.\n";
        return; // When the return statement in line executes, the divide function immediately ends. This means the cout statement below does not execute. The program resumes in the main function.
    }
    cout << "the quotient is " << (arg1/arg2) << endl;
}