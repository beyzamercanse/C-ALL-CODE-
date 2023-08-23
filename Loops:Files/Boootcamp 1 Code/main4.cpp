// RANGE BASED FOR LOOP

#include <iostream>
using namespace std;

int main(){

    int bag_of_values[] = {1,2,3,4,5,6,7,8,9,10};

    for (int value: bag_of_values)
    {
        // value holds a copy of the current iteration in the whole bag.
        cout << " value: " << value << endl;

    } 

    cout << " - - - - - - - - - - - - - - " << endl;

    // let the compiler deduce the type : auto type deduction
    for (auto value_one : {1,2,3,4,5,6,7,8,9,10}){
        cout << " value: " << value_one << endl;
    }

    cout << " - - - - - - - - - - - - - - " << endl;

    for (size_t i=0; i<10; ++i ){
        cout << "value: " << bag_of_values[i] << endl;

    }

    // write a range based for loop that only filters in multiples of 3 from a collection and print them out
    vector<int> numbers {1,21,4,5,7,3,9,3,5,17,15};

    for (int number : numbers){
        if (number%3==0){
            cout << number << " "; // 21 3 9 3 15
        }
    }




    
    return 0;
}