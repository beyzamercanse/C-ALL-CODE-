// number of elements


#include <iostream>
using namespace std;

int main(){

    int scores[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    int count = sizeof(scores)/sizeof(scores[0]); //number of elements

    for (size_t i=0; i<count; ++i){
        cout << "scores [" << i << "] : " << scores[i] << endl;    
        }

// range based for loop
    for (auto i : scores){
        cout << "value :  " << i << endl;
    }


    
    return 0;
}