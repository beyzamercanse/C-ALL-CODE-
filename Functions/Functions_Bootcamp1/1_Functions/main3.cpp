#include <iostream>
using namespace std;

void say_hello(){
    cout << "hello there!" << endl;
    // return ; // you can omit this return statement for functions returning void because void functions dont return any value
}

// however if you want to return a value with void you can do so by using a reference parameter or a pointer parameter: here is a reference parameter example' you can achieve the same by using pointer parameter *message 
// void say_hello(string &message){
//      message = "hello there!";
// }
//
// int main(){
//      string greeting;
//      say_hello (greeting);
//      cout << greeting << endl;
//      return 0;
// }


/*
or you can do this

void say_hello() {
    string message = "hello there!";
    cout << message << endl;
}

int main() {
    say_hello();
    return 0;
}
*/

// calling say_hello() function
int main(){
    say_hello();
    return 0;

}
