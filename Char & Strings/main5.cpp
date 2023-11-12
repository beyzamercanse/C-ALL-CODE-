// C++ STRINGS
// you cant concatenate 2 string literals

#include <string>
#include <iostream>

using namespace std;

int main(){
    string s1="beyza";

    for (char c: s1){
        cout << c << endl;
    }

    cout << "\n";

    for (int c: s1){
        cout << c << endl; 
    }
    // 98 B
    // 101 E
    // 121 Y
    // 122 Z
    // 97 A

    // When you iterate over the characters of the string s1 using for (char c : s1),
    // the loop will go from the beginning of the string until it reaches the null terminator ('\0'). 
    // The null terminator is automatically added to the end of C++ strings and is used to signify the end of the string in memory.

    // In the second loop, when you iterate over the string using for (int c : s1),
    //  you're actually iterating over the ASCII values of the characters.
    //  The ASCII value of '0' is 48, and you're seeing the ASCII values of the characters in your output.

    // If you want to iterate over the characters and include the null terminator,
    //  you could use an index-based loop and access the characters using the index:
    /*

    string s1 = "beyza";
    for (size_t i = 0; i <= s1.size(); ++i) {
        cout << s1[i] << endl; }

    In this example, the loop goes from 0 to s1.size(), inclusively, to include the null terminator in the iteration.
    
    */


    
    return 0;
}