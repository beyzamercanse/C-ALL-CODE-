// BOOLEAN + CHAR
// boolean takes 8 bytes in a memory

#include <iostream>
using namespace std;

int main(){

    bool red_light = true;
    bool green_light = false;

    cout << boolalpha;

    if (red_light == 1){
        cout << "stop!" << endl;
    } else 
    {
        cout << "go through!" << endl;
    }


    if (green_light){
        cout << "light is green" << endl;
    } else{
        cout << "light is red" << endl;
    }


    cout << sizeof(bool)<< endl; // 1

    cout << red_light << endl; // true
    cout << green_light << endl; // false


    //////////////////////////////////////


    char character1 = 'a';
    char character2 = 'r';
    char character3 = 'r';
    char character4 = 'o';
    char character5 = 'w';

    cout << character1 << endl;
    cout << character2 << endl;
    cout << character3 << endl;
    cout << character4 << endl;
    cout << character5 << endl;

    cout << endl;

    char value = 65;
    cout << "value" << value << endl; // A
    cout << "value(int) : " << static_cast<int>(value) << endl; // 65






    return 0;
}