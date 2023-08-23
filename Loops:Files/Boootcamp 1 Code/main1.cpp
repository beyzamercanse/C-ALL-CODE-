// size_t = not a type, just a type alias for some "unsigned int" representation = 8 bytes

/*

 when you declare size_t i{}; in C++, the variable i is initialized to 0. 
 The use of {} for initialization is called "list initialization" or "uniform initialization" 
 and it was introduced in C++11.

With size_t i{};, 
you are explicitly initializing i using this form of initialization. 
For fundamental types like size_t, this form of initialization ensures zero-initialization, which sets the variable to 0.

So, when you use num in the subsequent for loop, it will start with a value of 0.


*/

#include <iostream>
using namespace std;

int main(){


    for (size_t i=0; i<10; ++i){
        cout << "i: " << i << endl;
    }

    for (size_t i=0; i<5; ++i){
        cout << " print this message " << i << "time.\n";
    }


    return 0;
}


/*

i: 0
i: 1
i: 2
i: 3
i: 4
i: 5
i: 6
i: 7
i: 8
i: 9


 print this message 0time.
 print this message 1time.
 print this message 2time.
 print this message 3time.
 print this message 4time.

*/