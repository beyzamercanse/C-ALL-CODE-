#include <iostream>
using namespace std;

int main(){

    // break-for loop
    // break stops the loop all together and we fall outside the closing } of the loop
    cout << "break-for loop: " << endl;
    for (size_t i =0; i<20; ++i){
        if (i==6)
            break;
        cout << "i:  " << i << endl;
    }
    cout << "LOOP IS DONE. " << endl; // falls here after break

/*

break-for loop: 
i:  0
i:  1
i:  2
i:  3
i:  4
i:  5
LOOP IS DONE. 


*/
    cout << endl;
    cout << endl;
    cout << endl;

    // continue-for loop
    // continue: skips a single iteration
    cout << endl;
    cout << "continue - for loop: "<< endl;
    for (size_t i =0; i<10; ++i){
        if (i==6)
            continue; // skip curreent itration and go to the next one. this will cause for 6 not to be printed.
        cout << "i: " << i << endl;

    }


/*


continue - for loop: 
i: 0
i: 1
i: 2
i: 3
i: 4
i: 5
i: 7
i: 8
i: 9



*/
cout << endl;
cout << endl;
cout << endl;
cout << endl;
cout << endl;

// BREAK & CONTINUE ON WHILE LOOPS
size_t i = 0;

   while (i < 20){

       if(i==5){
            ++i;
            continue;
       }

     if(i==11){
        break;}


        cout << "i : " << i << endl;
        ++i;

   }
   cout << "Loop done!" << endl;
   


    
/*

i : 0
i : 1
i : 2
i : 3
i : 4
i : 6
i : 7
i : 8
i : 9
i : 10

*/
cout << endl;
cout << endl;
cout << endl;
cout << endl;


// do-while loop (break continue)
size_t number = 0;
do {
    if (number == 5){
        ++number;
        continue;
        }
    if (number == 9){
        break;
        }

        cout << "i :   " << number << endl;
        ++number;
    } while (number < 20);

    /*
    
    i :   0
    i :   1
    i :   2
    i :   3
    i :   4
    i :   6
    i :   7
    i :   8
    
    */
    
    return 0;


}