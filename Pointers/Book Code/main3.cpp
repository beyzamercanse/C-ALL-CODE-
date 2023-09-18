// This program demonstrates the use of the indirection operator.

// When you apply the indirection operator (*) to a pointer variable, you are working not with the pointer variable itself, but with the item it points to. 
// Because this statement sends the expres- sion *ptr to the cout object, 
// it does not display the value in ptr, but the value that ptr points to. 
// Since ptr points to the x variable, this statement displays the contents of the x variable.
#include <iostream>
using namespace std;

int main()
{
   int x = 25;				// int variable
   int *ptr = nullptr;      // Pointer variable, can point to an int

   ptr = &x;      // Store the address of x in ptr
   
   // Use both x and ptr to display the value in x.
   cout << "Here is the value in x, printed twice:\n";
   cout << x << endl;     // Displays the contents of x = 25
   cout << *ptr << endl;  // Displays the contents of x = 25 (when you dereference a pointer, it will give you the value of x instead: **p = x gibi dusunebilirsin )
   
   // Assign 100 to the location pointed to by ptr. This
   // will actually assign 100 to x.
   *ptr = 100;
   
   // Use both x and ptr to display the value in x.
   cout << "Once again, here is the value in x:\n";
   cout << x << endl;     // Displays the contents of x = 100 because we assigned ptr to 100
   cout << *ptr << endl;  // Displays the contents of x = 100
   return 0;
}

/*

Here is the value in x, printed twice:
25
25
Once again, here is the value in x:
100
100


*/