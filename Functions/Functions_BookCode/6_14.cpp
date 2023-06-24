#include <iostream>
using namespace std;


bool isValid(int number) {
    bool status;
    if (number >= 1 && number <= 100)
        status = true; 
    else
        status = false; 
    
    return status;
}


int main(){

    int value = 110;
    if (isValid(value)) // if its true
        cout << "The value is within range.\n"; 
    else
        cout << "The value is out of range.\n";

    return 0;
}