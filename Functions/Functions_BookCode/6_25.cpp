// This program uses a reference variable as a function parameter.

#include <iostream>
using namespace std;

// Function prototype. The parameter is a reference variable.
void doubleNum(int &);


int main(){
    int value = 4;
    cout << "In main, value is " << value << endl;
    cout << "Now calling doubleNum..." << endl;
    doubleNum(value);
    cout << "Now back in main. value is " << value << endl;

    return 0;
}

void doubleNum (int &refVar) //reference variable
{
    refVar *= 2;
}


/*

In main, value is 4
Now calling doubleNum...
Now back in main. value is 8

*/

