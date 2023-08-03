// This program uses a range-based for loop to
// modify the contents of an array.

#include <iostream>
using namespace std;

int main(){

    const int size = 5;
    int numbers[size];

    // Get values for the array.
    for (int &val : numbers)
    {
    cout << "Enter an integer value: ";
    cin >> val; 
    }

    // Display the values in the array.
    cout << "Here are the values you entered:\n";
    for (int val : numbers)
        cout << val << endl;

    return 0;
}

//434