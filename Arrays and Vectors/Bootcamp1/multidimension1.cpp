// multidimensional arrays part 1

#include <iostream>
using namespace std;

int main(){

    //declare a 2d int array
    int packages[4][3] = { {1,2,3},
                    {4,5,6},
                    {7,8,9},
                    {10,11,12}
                }; 

    // the 2d array contains garbage data by default, now lets print it out.
    cout << "print out uninitialized array using magic numbers for dimensions:  " << endl;
    for (size_t i=0; i<4; ++i){
        for (size_t j=0; j<3; ++j){
            cout << "ITEM (" << i << "," << j << ")  : " << packages[i][j] << endl;
        }
    }


    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;


    int num_row = sizeof(packages)/sizeof(packages[0]); //number of rows
    int num_col = sizeof(packages[0])/sizeof(packages[0][0]); //number of columns


    cout << "printing out uninitialized array by dynamically querying the dimensions: " << endl;
    cout << "printing out elements in the packages array: " << endl;

    for (size_t i =0; i<num_row; ++i){
        for (size_t j=0; j<num_col; ++j){
            cout << "ITEM (" << i << "," << j << ")  : " << packages[i][j] << endl; 
        }

    }



    return 0;
}


    /*
    
printing out uninitialized array by dynamically querying the dimensions: 
printing out elements in the packages array: 
ITEM (0,0)  : 1
ITEM (0,1)  : 2
ITEM (0,2)  : 3
ITEM (1,0)  : 4
ITEM (1,1)  : 5
ITEM (1,2)  : 6
ITEM (2,0)  : 7
ITEM (2,1)  : 8
ITEM (2,2)  : 9
ITEM (3,0)  : 10
ITEM (3,1)  : 11
ITEM (3,2)  : 12
    
    
    */