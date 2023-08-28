#include <iostream>
using namespace std;

int main(){

    // sum up scores in the array
    int sum = 0;
    int array[4] = {1,2,3,4};

    for (int element : array ){
        sum += element;
    }

    cout << sum << endl; //10


    
    return 0;
}

