// 113. declaring and using arrays

#include <iostream>
using namespace std;

int main(){

    // declare an array
    int scores [10]; // an array storing 10 integers, all junk because we did not declare the values inside

    // reading values
    cout << endl;
    cout << "Reading out score values ( manually ): " << endl;
    cout << "Scores[0] : " << scores[0] << endl;
    cout << "Scores[1] : " << scores[1] << endl;
    cout << "Scores[9] : " << scores[9] << endl;


    cout << " --------------------------------" << endl;



    // instead use a loop
    for ( size_t i = 0; i<10; ++i)
    {
        cout << "scores [" << i << "] : " << scores[i] << endl;
    }



    cout << " --------------------------------" << endl;




    //another loop which is same
    cout << endl;
    for (size_t i; i<10; ++i)
    {
         cout << "scores [" << i << "] : " << scores[i] << endl;
    }



    cout << " --------------------------------" << endl;




    // writing data in an array
    scores [0] = 20;
    scores[1] = 21;
    scores [2] = 22;

    cout << endl;
    cout << "manually writing data in an array: " << endl;
    for (size_t i = 0; i < 10; ++i)
    {
        // scores[i] = i*3;      // 0 3 6 9 12 15....27
        cout << "scores[" <<i<<"] : " << scores[i] << endl;
    }




    cout << " --------------------------------" << endl;



    // declare and initialize at the same time
    double salaries[10] = {12.7, 7.5, 13.2, 8.1, 9.3};
    for (size_t i=0; i<5; ++i){
        cout << "salary[" << i << "] :" << salaries[i] << endl;
    }


    cout << " --------------------------------" << endl;



    // declare ; but not all the elements
    int families[5] = {12,7,5};
    for (size_t i=0; i<5; ++i){
        cout << "families[" << i << "]: " << families[i] << endl;

    }

    cout << " --------------------------------" << endl;

    

    // omit the size of the array at declaration
    int class_sizes[] = {10,12,15,11,18,17};
    //print this with a range based for loop
    for (auto value : class_sizes){
        cout << "value: " << value << endl;
    }



    return 0;

}

/*





*/