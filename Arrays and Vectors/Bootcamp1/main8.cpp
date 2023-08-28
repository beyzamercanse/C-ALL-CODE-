// array bounds

#include <iostream>
using namespace std;

int main(){

    int numbers[] = {1,2,3,4,5,6,7,8,9,0};
    // read beyond your bounds
    cout << "numbers[12]: " << numbers[12] << endl; // out of range so will print irrelevant number-> numbers[12]: -1187506976

    numbers[12] = 1000;
    cout << " numbers[12]: " << numbers[12] << endl; //  numbers[12]: 1000






    
    return 0;
}