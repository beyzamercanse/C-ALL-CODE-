// What is an array?
// elements of an array has to be the same type. can be accessed through their position or index.
// element_type array_name [number of elements] {init list}

#include <iostream>
using namespace std;

int main(){

    int test_scores [5] = {100,95,99,87, 88};
    cout << " second score at index 1: " << test_scores[1] << endl; // 95


    char vowels[] = {'a','e','i','o','u'};
    cout << "\n the first vowel is: " << vowels[0] << endl; //a
    cout << "\n the last vowel is: " << vowels[4] << endl; //u
    cout << "\n the 6th vowel is: " << vowels[5] << endl; //nothing


    double hi_temps[] = {90.1, 89.8, 77.5, 81.6};
    cout << "\n the first high temp is: " << hi_temps[0] << endl;
    hi_temps[0] = 100.7; // change 90.1 to 100.7
    cout << "\n the first high temp is: " << hi_temps[0] << endl;



    int new_scores[5]= {};// all elements are 0
    cout << new_scores[0] << endl;  //0
    cout << new_scores[1] << endl;  //0
    cout << new_scores[2] << endl;  //0
    cout << new_scores[3] << endl;  //0
    cout << new_scores[4] << endl;  //0

    cout << endl;

    int new_2_scores[3]= {100,90};
    cout << new_2_scores[0] << endl;  //100
    cout << new_2_scores[1] << endl;  //90
    cout << new_2_scores[2] << endl;  //0


    int test_3[] = {}; // all elements are 0 but with cin will change to your input value
    cout << "enter the new_3 test scores: ";
    cin>>test_3[0];
    cin>>test_3[1];
    cin>>test_3[3];
    cin>>test_3[2];

    cout << test_3[0] << endl;
    cout << test_3[1] << endl;
    cout << test_3[2] << endl;
    cout << test_3[3] << endl;
    cout << "Value of the array name is :" << test_3 << endl; // this will give the memory adress or storage location of the array


    // Declare an array of 10  integers named arr  and initialize the array so that all 10 integers are 0 .
    // Then assign 100  to the first element of the array and 1000  to the last element of the array.

    /*
    int arr[10] = {}; //0 all elements
    arr[0]=100;
    arr[9]=1000;
    */


    return 0;
}