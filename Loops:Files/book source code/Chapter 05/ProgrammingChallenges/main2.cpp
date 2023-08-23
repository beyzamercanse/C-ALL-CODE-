// multiplication tables
// Write a program that lets the user enter a number and then displays the multiplication table till 10 for that number.

#include <iostream>
using namespace std;

int main(){

    int num;
    cout << "enter a number: ";
    cin >> num;

    // Display the multiplication table
    cout << "Multiplication table for " << num << ":\n";

    for (int i=1; i<=10; ++i){
        cout << num << " * " << i << " = " << num * i << endl;
    }


    return 0;
}

/*

enter a number: 5
Multiplication table for 5:
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50

*/