
// SUM OF NUMBERS
// Write a program that asks the user for a positive integer value. 
// The program should use a loop to get the sum of all the integers from 1 up to the number entered. 
// For example, if the user enters 50, the loop will find the sum of 1, 2, 3, 4, . . ., 50.
// Input Validation: Do not accept a negative starting number.


#include <iostream>
using namespace std;

int main(){
    
    int num;

    // get input from the user
    cout << "enter a positive integer: ";
    cin >> num;

    // input validation
    while (num <= 0){
        cout << "please enter a positive integer: ";
        cin >> num;
    }

    int sum=0;

    // Calculate the sum using a loop
    for (int i=1; i<=num; ++i){
        sum += i;
    }

    cout << "sum is : "<< sum << endl;


    return 0;
}