// DECREMENTING LOOP

#include <iostream>
using namespace std;

int main(){

    const size_t COUNT = 5;

    cout << "incrementing for loop : " << endl;
    for (size_t i=0; i<COUNT; ++i){
        cout << " i : " << i << endl;
    }

    cout << endl;
    cout << " - - - - - - -" << endl;
    cout << endl;

    cout << "decrementing for loop: " << endl;

    for (size_t i=COUNT; i>0; --i){
        cout << "i: " << i << endl;
    }

    // incrementing while, WHILE LOOP
    cout << endl;
    cout << "incrementing while loop" << endl;

    size_t i=0;

    while (i < COUNT){ // the max num it can take
        cout << "i: " << i << endl;
        ++i;
    }

    // decrementing while, WHILE LOOP
    cout << endl;
    cout << "decrementing while loop" << endl;

    i = COUNT;
    while (i>0){ // the min num it can take
        cout << "i: " << i << endl;
        --i;
    }

    cout << endl;
    cout << " - - - - - - - -" << endl;
    cout << endl;

    cout << "danger here : UNDERFLOW ISSUE FOR SIZE_T !" << endl;

    /* for (size_t i = COUNT; i>=0; --i){
        cout << "i : " << i << endl;
    } // it will start from 4 billion and go down to 0; almost like infinite loop */

    cout << endl;
    cout << " - - - - -" << endl;
    cout << endl;

    // DO-WHILE LOOP
    // INCREMENTING DO-WHILE LOOP

    cout << " incrementing do-while loop" << endl;
    size_t number = 0;

    do {
        cout << "i: " << number << endl;
        ++number;
    } while ( number < COUNT );

    // DECREMENTING DO-WHILE LOOP
    cout << " DEcrementing do-while loop" << endl;
    number = COUNT;
    do {
        cout << "i: " << number << endl;
        --number;
    } while ( number > 0);


    // size_t cant store negative values, it will instead place a big big number which is like 4 billion or something.
    // and it will lead to underflow and almost infinite loop while decrementing.
    
    

    
    return 0;
}