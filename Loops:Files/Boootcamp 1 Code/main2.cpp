// FOR LOOP

#include <iostream>
using namespace std;

int main(){

    for (unsigned int i=0; i<10; ++i){
        cout << " i love c++! ";

        if (i==1){
            cout << i << "st time.\n";
        }
        else if (i==2){
            cout << i << "nd time.\n";
        }
        
        else {
            cout << i << "th time.\n";
        }
    }
    cout << "  - - - - - - LOOP DONE! - - - - - - - - -" << endl;


    // size_t : a represenation of some unsigned int for positive numbers [sizes]
    // define outside the loop this time : 
    size_t num=0;
    for (num; num<5; ++num){
        cout << num << endl;
        }
    cout << num << endl; // 5 

    cout << " - - - - - - - - - - - - -- - - - - " << endl;

    const size_t COUNT = 7;

    for (int i=0; i<COUNT; ++i){
        cout << i << endl;
    }

    cout << " - - - - - - - - - - - - - -" << endl;

    // SUM UP ALL INTS
    int request;
    int sum=0;
    cout << " NOW WE WILL SUM UP ALL THE INTEGERS. Enter a number : "<< endl;
    cin >> request;

    for (unsigned int i =0; i<(request+1); i++){
        sum += i;
    }

    cout << "SUM IS : " << sum << endl;

    cout << " - - - - - - - - - - " << endl;

    for (unsigned char i =0; i<255; ++i){
        if ((i>0x40)&&(i<0x5B)){
            cout << i;
            if (i != 'Z'){
                cout << " ";
            }
        }
    }
    


    
    return 0;
}


/*

 i love c++! 0th time.
 i love c++! 1st time.
 i love c++! 2nd time.
 i love c++! 3th time.
 i love c++! 4th time.
 i love c++! 5th time.
 i love c++! 6th time.
 i love c++! 7th time.
 i love c++! 8th time.
 i love c++! 9th time.
  - - - - - - LOOP DONE! - - - - - - - - -
0
1
2
3
4
5
 - - - - - - - - - - - - -- - - - - 
0
1
2
3
4
5
6


*/