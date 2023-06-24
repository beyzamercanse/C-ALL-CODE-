// This program demonstrates that changes to a function parameter
// have no effect on the original argument.


#include <iostream>
using namespace std;


// function prototype
void changeMe(int);

int main(){
    int number = 12;

    // display the value in number.
    cout <<  "the number is " << number << endl;

    // Call changeMe, passing the value in number as an argument
    changeMe(number);

    // Display the value in number again.
    cout << "Now back in main again, the value of ";
    cout << "number is " << number << endl;
    return 0;

}

//**************************************************************
// Definition of function changeMe. *
// This function changes the value of the parameter myValue. *
//**************************************************************

void changeMe(int myValue)
{
    // change the value of my value to 0;
    myValue = 0;
    // Display the value in myValue.
    cout << "Now the value is " << myValue << endl;
}

/*
the number is 12
Now the value is 0
Now back in main again, the value of number is 12
*/

/* The changeMe function does not have access to the original argument. 
When only a copy of an argument is passed to a function, it is said to be passed by value.
 This is because the function receives a copy of the argument’s value and does not have access to the original argument. */
 