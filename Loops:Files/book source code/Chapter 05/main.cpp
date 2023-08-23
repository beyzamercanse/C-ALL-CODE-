#include <iostream>

using namespace std;


int  main(){
    //exe1
    int count_on = 10; 
    do
    {
        cout << "Hello World\n"; 
        count_on++;
    } while (count_on < 1);
    // hello world



    //exe2
    int v = 10;
    do
        cout << v << endl; 
    while (v < 5);
    //10


    //exe3
    int count = 0, number = 0, limit = 4; 
    do
    {
        number += 2;
        count++;
    } while (count < limit);
    cout << number << " " << count << endl;
    // 8 4
    
    return 0; 
}
