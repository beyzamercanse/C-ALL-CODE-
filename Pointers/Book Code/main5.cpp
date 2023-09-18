// This program shows an array name being dereferenced with the *
// operator.

// an array name, without brackets and a subscript, actually represents the starting address of the array. 
// *******************  Because "numbers" here works like a pointer to the starting address of the array, ****************************
// the first element is retrieved when numbers is dereferenced. 
// So how could the entire contents of an array be retrieved using the indirection operator? 
// Remember, array elements are stored together in memory.....!

// and when you add value to the memory adress in arrays, all elements will be effected ( add  2 == 2 ** sizeof(array))

#include <iostream>
using namespace std;

int main()
{
   short numbers[] = {10, 20, 30, 40, 50};

   cout << "The first element of the array is ";
   cout << *numbers << endl; // * of pointer is == value so it will print 10
   return 0;
}

// The first element of the array is 10