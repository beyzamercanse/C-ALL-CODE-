
// MULTIPLE DECLARATIONS

#include <iostream>
using namespace std;

int main(){

    for (size_t i=0, x=5, y=22; y>15; ++i, x+=5, y -= 1){
        cout << "i: " << i << " y: " << y << " x: " << x <<  endl;
    }



    
    return 0;
}

/*

i: 0 y: 22 x: 5
i: 1 y: 21 x: 10
i: 2 y: 20 x: 15
i: 3 y: 19 x: 20
i: 4 y: 18 x: 25
i: 5 y: 17 x: 30
i: 6 y: 16 x: 35

*/