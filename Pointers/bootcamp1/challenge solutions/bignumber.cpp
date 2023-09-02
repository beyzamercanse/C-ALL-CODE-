/*

You are given an array of integers and your job is to figure out the address where the maximum element in the array lives. For example, given
int data[] {11,2,52,53,9,13,5,7,12,11};
as the input array , you code should figure out that 53 is the maximum and store its address in a variable. Given
int data[] {181,82,22,53,19,1,51,217,12,11};
as the input array, your code should figure out that 217 is the maximum and store its address in a specified variable.


*/

#include <iostream>
using namespace std;

int main(){

    int data[] = {11,2,52,53,9,13,5,7,12,11};
    int array_size = sizeof(data)/sizeof(data[0]);

    int max_number = data[0];

    // find max number
    for (size_t i=1; i<array_size; ++i){
        if (data[i]>max_number){
            max_number=data[i];
        }
    }

    // cout << max_number << endl;
    int *max_adress = &max_number;
    cout << "data[]'s max number is : " << max_number <<  " and, it's adress is : " << max_adress << endl;



    return 0;
}

/*

while (i < array_size) {
        if (data[i] > max_number) {
            max_number = data[i];
        }
        i++;
    }

*/