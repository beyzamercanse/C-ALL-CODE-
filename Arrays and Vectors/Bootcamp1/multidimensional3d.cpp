// 3d array

#include <iostream>
using namespace std;

int main(){

    cout << "printing out 3d house_block array: " << endl;

    int packages[4][3][2] = { 
        {{1,2}, {3,4}, {11,12}},
        {{4,5},{13,15},{21,22}},
        {{7,8},{88, 85},{23,24}},
        {{10,11},{12, 56}}
        }; 

    int first_dimension = sizeof(packages)/sizeof(packages[0]);
    int second_dimension = sizeof(packages[0])/sizeof(packages[0][0]);
    int third_dimension = sizeof(packages[0][0])/sizeof(packages[0][0][0]);

    for (size_t i =0; i<first_dimension; ++i){
        for (size_t j=0; j<second_dimension; ++j){
            cout << "[";
            for (size_t k=0; k<third_dimension; ++k){
                cout << packages[i][j][k] << " "; 
            } cout << "] "; // seperate elements for good visualization
        } cout << endl; // seperate elements for good visualization
    }


    
    return 0;
}

/*

printing out 3d house_block array: 
[1 2 ] [3 4 ] [11 12 ] 
[4 5 ] [13 15 ] [21 22 ] 
[7 8 ] [88 85 ] [23 24 ] 
[10 11 ] [12 56 ] [0 0 ] 


*/