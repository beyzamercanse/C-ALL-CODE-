// This program shows that a static local variable is only
// initialized once.

#include <iostream>
using namespace std;

void showStatic(); // Function prototype

int main(){
    // Call the showStatic function five times.
    for (int count = 0; count < 5; count++)
        showStatic();
    return 0;
}

void showStatic() {
    static int statNum = 5;
    cout << "statNum is " << statNum << endl;
    statNum++; }

/*

statNum is 5
statNum is 6
statNum is 7
statNum is 8
statNum is 9

*/

// 382