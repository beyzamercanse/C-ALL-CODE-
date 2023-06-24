// This program shows that a global variable is visible
// to all the functions that appear in a program after
// the variable's declaration.

#include <iostream>
using namespace std;

void anotherFunction(); // Function prototype
int num = 2; // Global variable

int main()
{
    
    cout << "In main, num is " << num << endl;
    anotherFunction();
    cout << "Back in main, num is " << num << endl;
    return 0;

}


void anotherFunction()
{
    cout << "In anotherFunction, num is " << num << endl;
    num = 50; // if this was int num = 50 then it would be a local variable.
    cout << "But, it is now changed to " << num << endl;
}

/*
In main, num is 2
In anotherFunction, num is 2
But, it is now changed to 50
Back in main, num is 50
*/