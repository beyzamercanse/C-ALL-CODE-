// need to terminate the string with "null" charachter, \0

/*
char my_name[8] = "frank";

--> f r a n k \0 \0 \0
my_name[5] = 'y' # ok, change the 5th element \0 with y 

*/

#include <iostream>
#include <cstring> // Include the C string manipulation functions

using namespace std;

int main()
{

    char str[80]; // Declares a character array named str with a size of 80 characters. This array will be used to store strings.
    strcpy(str, "Hello "); //copy
    strcat(str, "There"); //concatenate
    cout << strlen(str); //11
    strcmp(str, "Another"); // >0 'H'-'A'= decimal value difference, 72-65 // compare
    // strcmp compares two C-style strings (arrays of characters).
    // 0 if the strings are equal.
    // A negative value if the first string is lexicographically less than the second.
    // A positive value if the first string is lexicographically greater than the second.




    return 0;
}