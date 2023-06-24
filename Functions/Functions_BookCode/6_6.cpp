#include <iostream>
using namespace std;

// function prototype
void displayValue(int);
/*
It is not necessary to list the name of the parameter variable inside the parentheses. 
Only its data type is required. The function prototype shown above could optionally have been written as void displayValue(int num);
However, the compiler ignores the name of the parameter variable (num here) in the function prototype.
*/

int main(){
    cout << "I am passing 5 to display value.\n";
    displayValue(5); // Call displayValue with argument 5
    cout << "Now I am back in main.\n";
    return 0;
}

void displayValue(int num){
    cout <<  "the value is " << num << endl;
}