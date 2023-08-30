#include <iostream>
using namespace std;

int main(){

    int toyBox = 5;  // This is our toy box with 5 toy cars inside it
    int *pointer;    // This is our magical note (pointer) that will point to the toy box
    pointer = &toyBox;  // The note now knows where the toy box is
    /* We use the & symbol to get the memory address of the toyBox variable, and we store that address in the pointer variable. */
    cout << "Toy Box contains: " << *pointer << " toy cars" << endl;

    // When you declare a pointer variable, you use * to indicate that the variable is a pointer.

    int value = 42;
    int *pointer_new = &value;  // Pointer points to the address of 'value'
    int dereferencedValue = *pointer_new;  // Dereferencing the pointer to get the value

    //  In C++, the & symbol is used to get the memory address of a variable. It's like asking "Where is this thing stored in memory?" 
    /*
    int number = 10;
    int *pointer = &number;  // &number gets the memory address of 'number'
    */

   /*
    In another context, the & symbol is used to declare reference variables. This allows you to create an alias for an existing variable:
    int original = 5;
    int &alias = original;  // 'alias' is now another name for 'original'

   */


    // declaring pointers to char
    const char *message = "hello world!!"; // Here, you're declaring a pointer named message that points to a string literal "hello world!!". The const keyword indicates that the string is read-only; you can't modify it through this pointer.
    cout << "message : " << message << endl; // message : hello world!! .. When you print the message using cout, it's like following the pointer to the memory location where the string is stored and printing the characters starting  the character at the pointer memory location until the end of the character collection.

    //*message = 'B'; // compiler error 
    cout << "*message : " << *message << endl; // message : h // When you use cout << *message, you're dereferencing the pointer not the variable itself, which means you're getting the value it points to, which is the first character of the string, 'h' in this case.

    // allow users to modify the string
    char message1[] = "hello world!";
    message1[0]='B';
    cout << "message1: " << message1 << endl; // Bello world!


/*

When you use cout << message, 
you're telling cout to treat message as a pointer to a string and print the entire string it points to, 
starting from the memory location indicated by the pointer until the null terminator is encountered.

When you use cout << *message, 
you're dereferencing the pointer and getting the first character of the string it points to.
 In this case, you're not treating message as a pointer to the entire string; 
 instead, you're looking at the value at the memory location the pointer points to,
 which is the first character of the string.


*/
    
    return 0;
}