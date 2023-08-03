// this program writes the contents of an array to a file.

#include <iostream>
#include <fstream>
using namespace std;

int main(){

    const int array_size=10; //array size
    int numbers[array_size]; // array with 10 elemetns
    int count; // Loop counter variable set to 0
    ofstream outputFile; // Output file stream object


    // Store values in the array.
    for (count = 0; count < array_size; count++)
        numbers[count] = count;


    // Open a file for output.
    outputFile.open("SavedNumbers.txt");


    // Write the array contents to the file.
    for (count = 0; count < array_size; count++)
        outputFile << numbers[count] << endl;


    // Close the file.
    outputFile.close();


    // That's it!
    cout << "The numbers were saved to the file.\n ";


    return 0;
}

