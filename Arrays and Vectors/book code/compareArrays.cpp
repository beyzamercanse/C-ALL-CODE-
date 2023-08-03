#include <iostream>
using namespace std;

int main(){

    const int SIZE = 5;
    int firstArray[SIZE]= {5,10,15,20,25};
    int secArray[SIZE] = {5,10,15,20,25};
    bool arraysEqual = true; //flag variable
    int count = 0; // loop counter variable

    // determine whether the elemetns contain the same data
    while (arraysEqual && count<SIZE){
        if (firstArray[count] != secArray[count])
            arraysEqual=false;
        count++;
    }

    if (arraysEqual)
        cout << "the arrays are equal.\n";
    else
        cout << "the arrays are not equal.\n";

    return 0;
}