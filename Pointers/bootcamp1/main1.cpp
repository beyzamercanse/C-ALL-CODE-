// declaring and using pointers

#include <iostream>
using namespace std;

int main(){

    // declaring pointers
    int * p_number; // can only store an adress of a variable of type int : will initilaze with nullptr
    double * p_fractional_number; // can only store an adress of a variable of type double

    // explicitely initialize to nullptr == // these pointers dont point annywhere
    int * p_number1=nullptr;
    int *p_fractional_number1=nullptr; 

    // all pointer vars have the same time
    cout << "size of number pointer : " << sizeof(p_number) << ", size of int : " << sizeof(int) << endl;
    cout << "size of fractional_number pointer : "<< sizeof(p_fractional_number) << ", size of double : " << sizeof(double) << endl;
    cout << "size of number1 pointer: " << sizeof(p_number1) << ", size of int : "<< sizeof(int) << endl;
    cout << "size of fractional_number1 pointer : " << sizeof(p_fractional_number1) << ", size of double: " << sizeof(double) << endl;

/*

size of number pointer : 8, size of int : 4
size of fractional_number pointer : 8, size of double : 8
size of number1 pointer: 8, size of int : 4
size of fractional_number1 pointer : 8, size of double: 8

*/
    // ASSIGNING DATA TO POINTER VARIABLES
    // initializing pointers and assigning them data

    //we know that pointers store adresses of variables
    int int_var = 43;
    int *p_int = &int_var; // & for the adress of it_var 

    cout << "int var: " << int_var << endl;
    cout << "p_int (adress in memory) : " << p_int << endl;

    // you can also change the adress stored in a pointer any time
    int int_var1 = 65;
    int_var = 126;

    p_int = &int_var1; // assign a different adress to the pointer
    cout << "p_int (with different adresses):  " << p_int << endl;

/*

int var: 43
p_int (adress in memory) : 0x7ff7bd464244
p_int (with different adresses):  0x7ff7bd464234

 ***********      &int_data == the adress of int_data      *********

*/

    
    return 0;
}