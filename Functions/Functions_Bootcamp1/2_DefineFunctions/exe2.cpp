/*
Your job is to write a function that takes in an unsigned long long int value 
and prints out it odd digits from the least significant to the most significant. 
For example if we have 98723713 as input, your function should use std::cout to print 317379 . 
Your code should just print the digits in the specified order; 
no spaces in between, no new lines, no nothing!
*/

// EXE: SHOWING THE ODDS 

#include <iostream>
using namespace std;

int show_odds(unsigned long long int num){
    unsigned int digit = 0;
    unsigned long long int inside_num = num;

    while (inside_num>0){
        digit = inside_num % 10;

        if(digit % 2 != 0){
            cout << digit;
        } 

        inside_num = inside_num / 10; 
    }
}

int main(){
    show_odds(34585677721);
    return 0;
}

// sayiyi 10 a bol => tekrardan 10a bol => kalan sayi 0 dan kucuk olmayana dek bol ve tek sayi ise print