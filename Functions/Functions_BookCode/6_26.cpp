// This program uses reference variables as function parameters.
#include <iostream>
using namespace std;


// Function prototypes. Both functions use reference variables
// as parameters.
void doubleNum(int &);
void getNum(int &);


int main(){
    int value;

    // Get a number and store it in value.
    getNum(value);

    // Double the number stored in value.
    doubleNum(value);

    // Display the resulting number.
    cout << "That value doubled is " << value << endl;
    return 0;
}

void getNum(int &userNum)
{
    cout << "Enter a number: ";
    cin >> userNum;
}

void doubleNum (int &refVar)
{
    refVar *= 2;
}


/*

Enter a number: 44
That value doubled is 88

*/