
// POINTERS AND ARRAYS 

#include <iostream>
using namespace std;


int main(){

	int scores[10] = {11,12,13,14,15,16,17,18,19,20};
    
    int * p_score = scores;
    
    //Print the address
    cout << "scores : " << scores << endl; // Array
    cout << "p_score : " << p_score << endl;// Pointer
    cout << "&scores[0]  : " << &scores[0] << endl; // ADRESS OF FIRST ELEMENT IN ARRAY
    
    //Print the content at that address
	cout << endl;
	cout << "Printing out data at array address : " << endl;
    cout << "*scores : " << *scores << endl; // 11 ELEMENT IN THAT ADRESS 
    cout << "scores[0] : " << scores[0] << endl; // 11
    cout << "*p_score : " << *p_score << endl; // 11 ELEMENT IN THAT ADRESS 
	cout << "p_score[0] : " << p_score[0] << endl; // 11


    //Differences
    int number = 21;
    p_score = &number;
    
    //scores = &number; // The array name is a pointer, but a special pointer that kind of identifies
                       // the entire array. You'll get the error  : incompatible types in assignment
                      // of 'int*' to 'int[10]'
    
    cout << "p_score : " << p_score << endl;// Pointer	

	//std::size() doesn't work for raw pointers
	cout << "size : " << sizeof(scores)/sizeof(scores[0]) << endl;
	//std::cout << "size : " << std::size(p_score) << std::endl; // Compiler error.
   
    return 0;
}

/*

scores : 0x7ff7bebf2240
p_score : 0x7ff7bebf2240
&scores[0]  : 0x7ff7bebf2240

Printing out data at array address : 
*scores : 11
scores[0] : 11
*p_score : 11
p_score[0] : 11
p_score : 0x

*/