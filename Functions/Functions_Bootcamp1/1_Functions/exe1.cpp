/* Your job is to write a C++ function that sums up all the digits in an integer. 
For example if we pass an unsigned integer 79 into the function, 
it should sum up the digits and return the result as 16.  
Your function should be able to handle any number of digits.
 Again if we pass in 62727289 we should get 43 returned from the function.
The requirement is that the input parameter is of type unsigned int and the return type is also unsigned int.
 The function name has to be exactly digit_sum. */

#include <iostream>
using namespace std;

int digit_sum(unsigned int num){
    unsigned int digit = 0;
    unsigned int inside_num = num;
    unsigned int sum = 0;

    while (inside_num>0){
        digit = inside_num  % 10;
        sum += digit;
        inside_num = inside_num / 10;
    }

    return sum;

}

int main(){
    unsigned int num = 49574950;
    unsigned int result = digit_sum(num);
    cout << result << endl;

    return 0;
}

/*
if you wanna use void function:

#include <iostream>
using namespace std;

void digit_sum(unsigned int &number) {
    unsigned int digit = 0;
    unsigned int sum = 0;
    unsigned int originalNumber = number; // Store the original number to preserve it

    while (number > 0) {
        digit = number % 10;
        sum += digit;
        number = number / 10;
    }
    number = sum; // Update the original number with the sum
}

int main() {
    unsigned int number = 45454;
    digit_sum(number);
    cout << number << endl;
    return 0;
}

*/