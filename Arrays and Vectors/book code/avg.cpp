#include <iostream>
using namespace std;

int main(){

    const int size = 5;
    int scores[size] = {10,12,45,66,44};

    double sum = 0; //initialize the sum value 
    double average;

    for (int i=0; i<size; ++i ){
        sum += scores[i];
    }
    average = sum/size;
    cout << average << endl; //2
    cout << sum << endl; //10

    /*
    double total = 0; // Initialize accumulator 
    double average; // Will hold the average 
    for (int val : scores)
        sum += val;
        average = total / size;
    */

    return 0;
}

/*

35.4
177

*/