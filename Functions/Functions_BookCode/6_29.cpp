// The exit() function causes a program to terminate, regardless of which function or control mechanism is executing.
// This program shows how the exit function causes a program to stop executing.

#include <iostream>
#include <cstdlib> //needed for the exit function
using namespace std;

void functionA(); // function prototype

int main()
{
    functionA();
    return 0;
}

void functionA()
{
    cout << "This program terminates with the exit function.\n";
    cout << "Bye!\n";
    exit(0); // or you can type EXIT_SUCCESS
    cout << "This message will never be displayed\n because the program has already terminated.";
}



















// A C++ program stops executing when the return statement in function main is encountered. 