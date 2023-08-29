#include <iostream>
using namespace std;

int main(){

    int data1[] = {1,2,4,5,9,3,6,7,44,55}; 
    int data2[] = {11,2,44,45,49,43,46,47,55,88};

    int elementNum1 = sizeof(data1)/sizeof(data1[0]); // num of elements in data1
    int elementNum2 = sizeof(data2)/sizeof(data2[0]); // num of elements in data1
    int commonValues[elementNum1];
    int commonVal=0;

    for (size_t i=0; i<elementNum1; ++i){ // data2
        for (size_t j=0; j<elementNum2; ++j){ // data1
            if (data1[i] == data2[j]){
                commonValues[commonVal]+= data1[i];
                ++commonVal;
                break;
            }
        }
    }


    cout << "there are " << commonVal << " common values.";
    if (commonVal != 0){
        cout << " they are: ";
        for (size_t i = 0 ; i<commonVal; ++i){
            cout << commonValues[i] << " ";
        }

    }
    

// first we need to compare each element of data1 to each element of data 2. we compare data1[i] to data2[j], then data1[i+1] to data2[j].....data[i] to data2[elementval2] -> data1[elementval1],data2[elementval2]







    
    return 0;
}