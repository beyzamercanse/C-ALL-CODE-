// This program has three functions: main, first, and second.

#include <iostream>
using namespace std;

/*
definition of function FIRST()
*/
void first(){
    cout << "I am now inside the function first.\n";
}

/*
definition of function FIRST()
*/
void second(){
    cout << "I am now inside the function second.\n";
}


int main(){
    cout  << "hello, welcome to function main.\n";
    first();
    second();
    cout << "bye!"<<endl;
    return 0;
}