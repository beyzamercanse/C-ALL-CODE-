// Eliminating duplicates

/*
        QUESTION : 
Your are given an array of size collection_size, containing integers, potentially including duplicates. 
An example is: int data[] {1,2,4,5,1,8,2,3,6,1,4,2};
Your job is to write code that eliminates duplicates and print a message exactly like
The collection contains 7 unique numbers, they are : 1 2 4 5 8 3 6
with a single space after the last element, in this case, a space after the 6. 
Please note that the message you print has to be exactly formatted like the above one, just adapted for any collection your code is given as input.  
For example,
for an input of int data[] {12,3,21,3,8,2,21,4,3} your code should print The collection contains 6 unique numbers, they are : 12 3 21 8 2 4
for an input of int data[] {7,5,7,2,4,1,7,4,2} your code should print The collection contains 5 unique numbers, they are : 7 5 2 4 1 .
You can assume that we will never throw arrays of more than 20 elements to your code.

*/

#include <iostream>
using namespace std;

void eliminateDublicates(int numbers[], int collection_size){ //  array of integers numbers[] and the size of the array collection_size as parameters
    const int MAX_SIZE = 20; // declares a constant MAX_SIZE to represent the maximum size of the uniqueNumbers array
    int uniqueNumbers[MAX_SIZE]; // AN ARRAY OF 20 ELEMENTS
    int numUnique = 0; //  " how many unique numbers WHICH DONT REPEAT  "



    for (int i = 0; i < collection_size; i++) 
    {
        bool isDuplicate = false; // A loop is used to iterate over each element in the numbers[] array. For each element, a boolean variable isDuplicate is initialized as false.
    


        for (int j = 0; j < numUnique; j++) {
            if (numbers[i] == uniqueNumbers[j]) {
                isDuplicate = true;
                break;
            }
        }

        // Within the loop, another loop is used to compare the current element in the numbers[] array with the elements already stored in the uniqueNumbers array. 
        // If a duplicate is found, isDuplicate is set to true, and the loop is exited using break.




        if (!isDuplicate) {
            uniqueNumbers[numUnique] = numbers[i];
            numUnique++;
        }



    }

    // After the inner loop, it is checked whether isDuplicate is still false, 
    // indicating that the current element is not a duplicate. 
    // If it is not a duplicate, the element is added to the uniqueNumbers array at the numUnique index, and numUnique is incremented.



    cout << "The collection contains " << numUnique << " unique numbers, they are :";
    for (int i = 0; i < numUnique; i++) {
        std::cout << " " << uniqueNumbers[i];
    }

    std::cout << " ." << std::endl;
}
    // The initial part of the output message is printed, which includes the number of unique elements obtained from the numUnique counter. 
    // Then, a loop is used to iterate over the elements in the uniqueNumbers array, and each element is printed preceded by a space. 
    // Finally, the ending part of the output message, which is a period followed by an endline character, is printed.





int main() {
    int numbers[] = {12,55,77,88,12,12,33,55,89,88,30,33};
    int collection_size = sizeof(numbers) / sizeof(numbers[0]);
    eliminateDublicates(numbers, collection_size);

    return 0;
}

// In the main function, an example array numbers[] is defined as {12,55,77,88,12,12,33,55,89,88,30,33}.
//  The size of the array is calculated using sizeof(numbers) / sizeof(numbers[0]). 
// Finally, the eliminateDuplicates function is called with the numbers array and its size as arguments to eliminate duplicates and print the output.