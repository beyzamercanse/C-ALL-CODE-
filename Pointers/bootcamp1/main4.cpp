// const pointer and pointer to cost
// const int * wont change so we use int* cost to change the value.

#include <iostream>
using namespace std;

int main(){

    // raw variable that ca be modified
    cout << endl;
    cout << "raw variable that can be modified: " << endl;

    int number=5; // not constant, can change nnumber any way we want
    cout << "number: " << number << endl;
    cout << "&number (the memory adress of number):   " << &number << endl;
    // modify
    number=12;
    number+=7;

    // access-print out
    cout << "number: " << number << endl;
    cout << "&number (the memory adress of number):   "<< &number << endl;
    cout << endl;


    /*
    raw variable that can be modified: 
    number: 5
    &number: (the memory adress of number)0x7ff7b78a1268
    number: 19
    &number: 0x7ff7b78a1268
    */

    cout << endl;
    cout << endl;
    cout << endl;

    // non cost pointer to non const data
    //pointer: can modify the data and the pointer itself
    int *p_number1 = nullptr;
    int number1=23;
    p_number1 = &number1;

    // change the pointed to value through pointer
    *p_number1 = 432;

    //change the pointer itself to make it point somewhere else
    int number2=56;
    p_number1 = &number2;

    cout<<endl;
    cout << endl;
     cout << endl;
      cout << endl;
       cout << endl;


    // pointer to const
    //pointer pointing to constant data:you cant modify the data through pointer
    int number3 = 632;
    const int* p_number3 = &number3; //cant modify number3 through p_number3
    //*p_number3 = 444; // compiler error

    //although we cant change whats pointed to p_number3, we can change where its pointinng

    int number4=872;
    p_number3 = &number4;

    cout << endl;
    cout << endl;
    cout << endl;

    	//const keyword applies to the variable name.
    
	std::cout << "const keyword applies to a variable name : " << std::endl;
	
	int protected_var =10; // Can make it const to protect it if we want.Show this
	
	//p_protected_var is a pointer to const data, we can't
	//modify the data through this pointer : regardless of
	//whether the data itself is declared const or not.
	const int* p_protected_var =&protected_var;
	
	//*p_protected_var = 55;
	protected_var = 66;
	std::cout << "protected_var : " << protected_var << std::endl;
	std::cout << "p_protected_var : " << p_protected_var << std::endl;
	std::cout << "*p_protected_var : " << *p_protected_var << std::endl;
	std::cout << std::endl;

    /*
    const keyword applies to a variable name : 
    protected_var : 66
    p_protected_var : 0x7ff7bb42f240
    *p_protected_var : 66   
    
    */

	//You can't set up a modifiable pointer to const data though,
	//You'll get a compiler error :Invalid convertion from 'const type*' to 'type*'.
	const int some_data=55;
	//int * p_some_data {&some_data}; // Compiler error.
	//*p_some_data = 66;

    cout << endl;
    cout << endl;
    cout << endl;

    //Both pointer and pointed to value are constant
    const int number5 = 459;
    const int* const p_number5 =&number5 ;
    std::cout << "Pointer is constant, value pointed to is constant : " << std::endl;
    std::cout << "p_number5 :" << p_number5 << std::endl;
    std::cout << "*p_number5 : " << *p_number5 << std::endl;
    
    //Can't modify the pointed to value through the pointer
    std::cout << "Changing value pointed to by p_number5 through the pointer (Compile Error) " << std::endl;
    //*p_number5 = 222; // Error : Trying to assign to read only location
    
    //Can't change where the pointer is pointing to : The pointer is now itself constant
    std::cout << "Changing the pointer p_number5 address itself (Compile Error) "<< std::endl;
    int number6 =333;
    //p_number5 = &number6;  // Error : Trying to assign to read only location
	
    /*

    Pointer is constant, value pointed to is constant : 
    p_number5 :0x7ff7bb42f230
    *p_number5 : 459
    Changing value pointed to by p_number5 through the pointer (Compile Error) 
    Changing the pointer p_number5 address itself (Compile Error) 
    
    
    
    */
	std::cout << std::endl;


	//Pointer is constant (can't make it point anywere else)
	//but pointed to value can change
    std::cout << "Pointer is contant, pointed to value can change : " << std::endl;
    int number7 =982;
    
    int * const p_number7 = &number7;
    
    std::cout << "p_number7 :" << p_number7 << std::endl;
    std::cout << "*p_number7 : " << *p_number7 << std::endl;
    std::cout << "Changing value pointed to through p_number7 pointer : " << std::endl;
    
    *p_number7 = 456;
    std::cout << "The value pointed to by p_number7 now is : " << *p_number7 << std::endl;
    
    int number8 =2928;
    std::cout << "Changing the address where p_number7 is pointing (Compile Error)." << std::endl;
    //p_number7 = &number8;
    
/*

Pointer is contant, pointed to value can change : 
p_number7 :0x7ff7bb42f220
*p_number7 : 982
Changing value pointed to through p_number7 pointer : 
The value pointed to by p_number7 now is : 456
Changing the address where p_number7 is pointing (Compile Error).


*/

    






    return 0;
}

