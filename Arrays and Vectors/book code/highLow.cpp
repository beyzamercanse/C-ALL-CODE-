// Finding the Highest and Lowest Values in a Numeric Array

#include <iostream>
using namespace std;

int main(){

    const int size = 5;
    int scores[size] = {10,12,45,66,44}; 
    int highest;
    int lowest;

    highest = scores[0];
    for (int i = 1; i < size; i++) {
        if (scores[i] > highest) 
            highest = scores[i];
    }

    // First, we copy the value in the first array element to the variable highest. 
    // Then, the loop compares all of the remaining array elements, 
    // beginning at subscript 1, to the value in highest.
    // Each time it finds a value in the array that is greater than highest, it copies that value to highest. 


    lowest = scores[0];
    for (int i = 1; i < size; i++) {
        if (scores[i] < lowest) 
            lowest = scores[i];
    }

    //

    cout << "highest number is : " << highest << endl;
    cout << "lowest number is : " << lowest << endl;

    return 0;
}

/*

highest number is : 66
lowest number is : 10

*/