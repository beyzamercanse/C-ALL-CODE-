// array of charachters
// for num of elements in an array of chars, you just do sizeof(numbers). no need / number[0]

#include <iostream>
using namespace std;

int main(){

    // declare array
    char message [5] = {'H', 'E', 'L','L','O'};
    cout << "message is : ";
    for (auto c : message ){
        cout << c; // message is : HELLO
    }
    cout << endl;
    cout << "size: " << sizeof(message) << endl; // 5

    // change char in array
    message[1]='A';
    for (auto c : message ){
        cout << c; // message is : HALLO
    }

    // string literal
    char message_new[] = {"hiii how are you doing??"};
    cout << "message_new is : " << message_new << endl; // you cant do it seloly on integerss. strings and char only
    cout << "size of message_new is: " << sizeof(message_new) << endl;

   /*
   message_new is : hiii how are you doing??
    size of message_new is: 25
   */


    
    return 0;
}