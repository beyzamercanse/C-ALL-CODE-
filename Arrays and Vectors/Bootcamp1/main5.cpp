// size of an array

#include <iostream>
using namespace std;

int main(){

    int scores[] = {10,12,15,11,18,17,22,23,24};

    // you can get the size with sizeof()
    cout << "scores array size: " << sizeof(scores) << endl;
    cout << "scores array initial element size: " << sizeof(scores[0]) << endl;

    size_t elementNum = sizeof(scores)/ sizeof(scores[0]);
    cout << "number of elements in the given array: " << elementNum << endl;

    cout << "printing out the array items: " << endl;
    for (size_t i = 0; i < elementNum; ++i){
        cout << "scores: [" << i << "] : " << scores[i] << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;

    cout << "printing out the array items: ";
    for (size_t i = 0; i < elementNum; ++i){
        cout << "scores[" << i << "] : " << scores[i] << " ";
    }
    cout << endl;


    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    // looping through an array
    int scoresscores[] = {10,12,15,11,18,17,12,23,24};
    cout << "using plain old range based for loop " << endl;

    for (auto score:scoresscores){
        cout << " score :  " << score << endl;
    }

    

    
    return 0;
}

/*

scores array size: 36
scores array initial element size: 4
number of elements in the given array: 9
printing out the array items: 
scores: [0] : 10
scores: [1] : 12
scores: [2] : 15
scores: [3] : 11
scores: [4] : 18
scores: [5] : 17
scores: [6] : 22
scores: [7] : 23
scores: [8] : 24



printing out the array items: scores[0] : 10 scores[1] : 12 scores[2] : 15 scores[3] : 11 scores[4] : 18 scores[5] : 17 scores[6] : 22 scores[7] : 23 scores[8] : 24 

*/