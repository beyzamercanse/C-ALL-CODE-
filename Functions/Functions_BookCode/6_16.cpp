// This program shows that variables defined in a function 
//  are hidden from other functions.

#include <iostream>
using namespace std;

//function prototype
void anotherFunction(); 


int main(){
    int num = 1; // Local variable
    cout << "In main, num is " << num << endl;
    anotherFunction();
    cout << "Back in main, num is " << num << endl;
    return 0; 
    }

    void anotherFunction()
    {
        int num = 20; // Local variable
        cout << "In another function, num is " << num << endl;
    }

/*
In main, num is 1
In another function, num is 20
Back in main, num is 1
*/