#include <iostream>
using namespace std;

int main(){

    int scores[10]; //an array of 10 integers
    cout << endl;
    cout << "writing data in array with loop: " << endl;

    // write data
    for (size_t i=0; i < 10; ++i){
        scores[i] = i*3;
    }

    // read data out
    for (size_t i=0; i<10; ++i){
        cout << "scores[" << i << "]= " << scores[i] << endl;

    }
    
    return 0;
}

/*

writing data in array with loop: 
scores[0]= 0
scores[1]= 3
scores[2]= 6
scores[3]= 9
scores[4]= 12
scores[5]= 15
scores[6]= 18
scores[7]= 21
scores[8]= 24
scores[9]= 27


*/