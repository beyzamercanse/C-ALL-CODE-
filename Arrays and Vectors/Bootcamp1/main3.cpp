// declare and initialize at the same time

#include <iostream>
using namespace std;

int main(){

    cout << endl;
    cout << "declare and initialize at the same time: " << endl;

    double salaries[5] = {12.7, 23.2, 7.5, 22.0, 17.5};

    for(size_t i=0; i<5; ++i){
        cout << "salary[" << i << "]= " << salaries[i] << endl;
    }

    /*

declare and initialize at the same time: 
salary[0]= 12.7
salary[1]= 23.2
salary[2]= 7.5
salary[3]= 22
salary[4]= 17.5

*/

    /*
    */

    cout << endl;
    cout << endl;
    cout << endl;


    int values[5] = {12,123,564};

    for (size_t i=0; i<10; ++i){
        cout << "value[" << i+1 << "]= " << values[i] << endl;
    } // data outside of initialization will be junk

     /*
    value[1]= 12
    value[2]= 123
    value[3]= 564
    value[4]= 0
    value[5]= 0
    value[6]= 0
    value[7]= 0
    value[8]= 0
    value[9]= 1717986918
    value[10]= 1076455014
    */

    cout << endl;
    cout << endl;
    cout << endl;

    //omit the size of array
    int class_sizes[] = {10,11,221,12,34,56};

    // print out the values. this time out approach to print out will be different cuz we didnt set the size of array in decleration
    for (auto value : class_sizes){
        cout << value << endl;
    }
    /*
    10
    11
    221
    12
    34
    56
    */

    
    return 0;
}

