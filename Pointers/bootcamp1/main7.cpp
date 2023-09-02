#include <iostream>
using namespace std;

int main(){

    int arr0[5]={ 1,2,3,4,5 };
    int arr1[5]={ 6,7,8,9,10 };
    int size_arr0 = sizeof(arr0)/sizeof(arr0[0]);
    int size_arr1 = sizeof(arr1)/sizeof(arr1[0]);
    int * p_arr1 = arr1;
    int * p_arr0 = arr0;

    // print arr0
    cout << "arr0: ";
    for (size_t i=0; i<size_arr0; ++i){
        cout << arr0[i] << " ";
    }
    cout << endl;
    // arr0: 1 2 3 4 5


    // print arr1
    cout << "arr1: ";
    for (size_t i=0; i<size_arr1; ++i){
        cout << arr1[i] << " ";
    }
    cout << endl;
    // arr1: 6 7 8 9 10 

    cout << endl;
    cout << endl;
    cout << endl;
 /*
    // SWAPPING DATA THE HARD WAY
    int temp[5];

    // move data from arrr1 into temp
    for (size_t i=0; i<size_arr1; ++i){
        temp[i] = arr1[i];
    }

    //move data from arr0 to arr1
    for (size_t i=0; i<size_arr0; ++i){
        arr1[i] = arr0[i];
    }

    //move data temp to arr0
    for (size_t i=0; i< (sizeof(temp)/sizeof(temp[0])); ++i){
        arr0[i] = temp[i];
    }

    for (int temperatures : temp){
        cout << temperatures << " "; // 6 7 8 9 10
    }
    cout << endl; 

    for (int arr1_val : arr1){
        cout << arr1_val << " "; // 1 2 3 4 5 
    }

    cout << endl;

    for (int arr0_val : arr0){
        cout << arr0_val << " "; // 6 7 8 9 10
    }
*/


// easy way
    /*
    int *p_arr0 = arr0; // turning array names into modifiable pointers
    int *p_arr1 = arr1;
    */
    int *temp;

    temp = p_arr1;
    p_arr1 = p_arr0;
    p_arr0 = temp;

    cout << " - - - --  - - - - - - - - - - - - - - " << endl;
    // print arr0
    cout << " arr0 : ";
    for  (size_t i=0; i< size_arr0; ++i){
        cout << p_arr0[i] << " ";
    }
    cout << endl;

    //print arr1
    cout << "arr1:  ";
    for  (size_t i=0; i< size_arr1; ++i){
        cout << p_arr1[i] << " ";
    }
    cout << endl;
    
    //  arr0 : 6 7 8 9 10 
    // arr1:  1 2 3 4 5 



  
    return 0;
}