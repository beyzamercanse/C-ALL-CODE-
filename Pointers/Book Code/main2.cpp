// This program stores the address of a variable in a pointer.
// the nullptr key word was introduced to represent the address 0. 
// When a pointer is set to the address 0, it is referred to as a null pointer because it points to “nothing.” 

#include <iostream>
using namespace std;

int main()
{
   int x = 25;				// int variable
   int *ptr = nullptr;      // Pointer variable, can point to an int

   ptr = &x;      // Store the address of x in ptr
   cout << "The value in x is " << x << endl; // The value in x is 25
   cout << "The address of x is " << ptr << endl; // The address of x is 0x7ff7b7f1a268
   return 0;
}