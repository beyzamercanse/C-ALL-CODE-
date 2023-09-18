// This program uses a pointer to display the contents of an array.
// Because numPtr is a pointer to an integer, the increment operator adds the size of one integer to numPtr, 
// so it points to the next element in the array. same for decrementatiion
#include <iostream>
using namespace std;

int main()
{
   const int SIZE = 8;
   int set[SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};
   int *numPtr = nullptr;   // Pointer
   int count;				// Counter variable for loops

   // Make numPtr point to the set array.
   numPtr = set;

   // Use the pointer to display the array contents.
   cout << "The numbers in set are:\n";
   for (count = 0; count < SIZE; count++)
   {
      cout << *numPtr << " ";
      numPtr++;
   }

   // Display the array contents in reverse order.
   cout << "\nThe numbers in set backward are:\n";
   for (count = 0; count < SIZE; count++)
   {
      numPtr--;
      cout << *numPtr << " ";
   }
   return 0;
}
/*
The numbers in set are:
5 10 15 20 25 30 35 40 
The numbers in set backward are:
40 35 30 25 20 15 10 5
*/

