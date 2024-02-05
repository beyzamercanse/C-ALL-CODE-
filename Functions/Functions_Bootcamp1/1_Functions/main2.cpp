#include <iostream>
using namespace std;

// function that takes multiple parameters ad=nd returns the result of the computation
int max(int a, int b){
    if (a>b)
        return a;
    else
        return b;
}

int main(){
    // calling max() function
    int result = max(440,441); //arguments
    cout << "max:  " << result << endl;

    return 0;

}