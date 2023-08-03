#include <iostream>
using namespace std;

int main(){

    const int SIZE = 5;
    int numbers [SIZE] = {10, 20, 30, 40, 50};

    cout << numbers << endl;
    // this will execute arrya's memory adress only!!!
    // 0x7ff7b2e63220

    // you must use a loop to display the contents of each of the array’s elements, as follows:
    for (int i=0; i<SIZE; i++){
        cout << numbers[i] << endl;
    }

    cout << " - -  - - - -- - - - - - - - - - " << endl;
    // or you can do
    for (int val : numbers){
        cout << val << endl;
    }

    return 0;
}
// 438