#include <iostream>
using namespace std;

int main(){

    double multiplier=4;
    for (auto i : {1,2,3,4,5,6,7,8,9}){
        cout << "result: " << (i * multiplier) << endl;
    }
    
    
    return 0;
}

/*

result: 4
result: 8
result: 12
result: 16
result: 20
result: 24
result: 28
result: 32
result: 36

*/

// if you use multiplier outside the loop: you cant use it in outter- cout statement.