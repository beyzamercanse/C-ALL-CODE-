// 116. generating random numbers

#include <iostream>
using namespace std;

int main(){

    // generate a random number from 1 to 6
    // srand
    int random_num = rand(); // generates a number between 0 and RAND_MAX
    cout << "number:  " << random_num << endl;

    random_num = rand();
    cout << "number:  " << random_num << endl;

    cout << "RAND_MAX:  " << RAND_MAX << endl;

cout << " - - - - - - - - - - - - - - - - - - - -  -" << endl;

    // RANGE [0-10] : WHAT YOU % WITH CONTROLS THE UPPER BOUND
    int random_num_new = rand() % 11; // will be between [0-10]
    cout << "number : " << random_num_new << endl;

    for (size_t i=0; i<30; ++i)
    {
        random_num_new = rand() % 11; // will be between [0-10]
        cout << "number :    " << random_num_new << endl;
    }

cout << " - - - - - - - - - - - - - - - - - - - -  -" << endl;
    // range [1-15]
    int random_num_two = (rand()%15) + 1;

    for (size_t i=0; i<30; ++i) {
        random_num_two = (rand()%15) +1; // wiill be between [1-15]
        cout << "number["<<i<<"]:  " << random_num_two << endl;
    }

// rand sequence will be the same everytime. apple-apple-apple
// if you wanna change it: apple - mango - pineapple : add  time(0) 

cout << " - - - - - -- - - - - - - - - - - --- - - - - - - " << endl;

    // int random_num_ = rand();
    // cout << "random num: " << random_num << endl;
    int random_num_newest = (rand()%15) + 1;

    for (size_t i=0; i<30; ++i) {
        random_num_newest = (rand()%15) +1; // wiill be between [1-15]
        cout << "number["<<i<<"]:  " << random_num_newest << endl;
    }


    return 0;
}

/*

number:  16807
number:  282475249
RAND_MAX:  2147483647


*/



