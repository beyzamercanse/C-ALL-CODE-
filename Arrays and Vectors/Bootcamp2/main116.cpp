// 116 Array bounds
#include <iostream>
using namespace std;

int main(){
    int numbers[] = {1,2,3,4,5,6,7,8,9,0};

    // read beyond bounds: will read garbage or crash your program
    cout << "numbers[12]:  " << numbers[12] << endl; // numbers[12]:  -1127918368

    numbers[12] = 1000;
    cout << "numbers[12]:  " << numbers[12] << endl; // numbers[12]:  1000

cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    int data[] = {1,2,4,5};
    for (unsigned int i=0; i<=4; ++i){
        cout << "value: " << data[i] <<endl; // last value will be a garbage data, it can be anything. 1-6... but its not good
    }

    /*
    
    value: 1
    value: 2
    value: 4
    value: 5
    value: 1
    
    */

    return 0;

}

// WORK WITHIN THE BOUNDARIES !

