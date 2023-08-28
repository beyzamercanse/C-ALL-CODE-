#include <iostream>
using namespace std;

int main(){

    int scores[10]; // an array storing 10 integers

     // writing data in an array
    scores[0]=20;
    scores[1] = 21;
    scores[2] = 22;

    cout << endl;
    cout << " manually writing data in array: " << endl;
    for (size_t i=0; i<10; ++i){
        cout << "scores[" << i << "] = " << scores[i] << endl;
    }

    

    return 0;
}

/*

scores[0] = 20
scores[1] = 21
scores[2] = 22
scores[3] = 32759
scores[4] = -1252588976
scores[5] = 32759
scores[6] = 5669226
scores[7] = 32760
scores[8] = -1252588832
scores[9] = 32759

*/