// generate random numbers : rand()

#include <iostream>
using namespace std;

int main(){

    int random_num_1 = rand(); // generates a num between 0 and rand_max
    cout << random_num_1 << endl;

    cout << RAND_MAX << endl; // 2147483647

    // RANGE [0-10] : WHAT YOU % WITH CONTROLS THE UPPER BOUND
    int random_num = rand() % 11; // will be between [0-10]
    cout << "number: " << random_num << " ";
    cout << endl;

    for (size_t i=0; i<30; ++i){
        random_num = rand() % 11; // will be between [0-10]
        cout << "number:  " << random_num << " ";
    }


    
    return 0;
}

/*
number: 1 
number:  0 number:  6 number:  8 number:  3 number:  2 number:  0 number:  9 number:  4 number:  6 number:  6 number:  10 number:  5 number:  8 number:  7 number:  1 number:  5 number:  9 number:  4 number:  6 number:  7 number:  1 number:  1 number:  4 number:  9 number:  1 number:  5 number:  5 number:  0 number:  8 number:  5

*/

/*
range [0-15] = (rand() %15) +1
*/