// 115. Arrays of charachters

#include <iostream>
using namespace std;

int main(){

    // declare array
    char message1[] = {'H','E','L','L','O'};

    // size of this array
    int size_of_array = sizeof(message1)/sizeof(message1[0]);

    //print out the array through looping
    cout << "message: ";
    for (auto word : message1){
        cout << word;
    }


    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;


    cout << "message1: " << message1 << endl;
    cout << "size: " << size_of_array << endl;



    // string literal
    char message4[] = {"hello world, how you doing? "};
    int size_of_m4 = sizeof(message4)/sizeof(message4[0]);
    cout << "message4: " << message4 << endl;
    cout << " sizeof(message4): " << size_of_m4 << endl;


    return 0;
}

