// DO-WHILE loop with output

/*

The while loop tests the condition first, 
meanwhile the do-while loop runs the body and checks the condition later.  " it runs the code first then tests the condition" 



*/
#include <iostream>
using namespace std;

int main(){

    const unsigned int COUNT = 10;
    unsigned int i = 11; // initialization

    do 
    {
        cout << "[" << i << "]: i love c++" << endl;
        ++i; // increment
    } while (i < COUNT); // test


    cout << endl;
    cout << endl;
    cout << endl;
    
    int count_one = 8;
    
    do {
        std::cout << "This is iteration " << count_one << std::endl;
        count_one++;
    } while (count_one < 5);
    // do-while loop guarantees that the loop body will be executed at least once regardless of the while count<5 condition.!!!!!!

    cout << endl;
    cout << endl;
    cout << endl;

    
    while (count_one < 5) {
        std::cout << "This is iteration " << count_one << std::endl;
        count_one++; // wont cout cuz count=8>5  ==  the loop's body won't execute at all.
    }



    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    //  write a do - while loop that prints multiples of 19 in the range starting from 100 up to 1000
    unsigned int countt = 100;

    do{
        if ((countt%19)==0){
            cout << countt << " ";
            
        }
        ++ countt;

    }while (countt < 1001);
    
    /*
    114 133 152 171 190 209 228 247 266 285 304 
    323 342 361 380 399 418 437 456 475 494 513 532 551 
    570 589 608 627 646 665 684 703 722 741 760 779 798 817 836 
    855 874 893 912 931 950 969 988
    */
    return 0;
}