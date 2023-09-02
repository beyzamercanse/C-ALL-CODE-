// This program uses the & operator to determine a variables address and the sizeof operator to determine its size.
#include <iostream>
using namespace std;

int main()
{
   int x = 25;

   cout << "The address of x is " << &x << endl; // The address of x is 0x7ff7b6906268
   cout << "The size of x is " << sizeof(x) << " bytes\n"; // The size of x is 4 bytes
   cout << "The value in x is " << x << endl; // The value in x is 25
   return 0; 
}

// The address of the variable x is displayed in hexadecimal. This is the way addresses are normally shown in C++