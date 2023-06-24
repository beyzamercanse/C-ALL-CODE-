#include <iostream>
using namespace std;

void displayMessage(){
    cout << "hi, this is your message displayed here. "<< endl;
}


int main(){
    cout << "hello from main.\n";

    for (int count=0; count<5; count++)
        displayMessage(); // call displayMessage
    
    cout << "back in function main again."<<endl;

    return 0;
}