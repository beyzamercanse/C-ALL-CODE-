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
    int class_sizes[] = {10,12,15,11,18,17}; //its going to be size of the { }
    //print this with a range based for loop
    for (auto value : class_sizes){
        cout << "value: " << value << endl;
    }



    cout << " --------------------------------" << endl;




    // sum up scores array, store results in sum
    int sum = 0 ;
    for(int element : scores){
        sum += element;
    }
    cout << "score sum: " << sum << endl;




    cout << " --------------------------------" << endl;
    // sum up the scores array, store results in sum
    int scores_new[] = {2,5,8,2,5,6,9};
    int sumNmbers = 0;
    for (int element : scores_new){
        sumNmbers += element;
    }
    cout << "score sum: " << sumNmbers << endl;



    return 0;

}

/*


Reading out score values ( manually ): 
Scores[0] : -1289972640
Scores[1] : 32759
Scores[9] : 32759
 --------------------------------
scores [0] : -1289972640
scores [1] : 32759
scores [2] : -1289973024
scores [3] : 32759
scores [4] : -1289973168
scores [5] : 32759
scores [6] : 113721738
scores [7] : 32760
scores [8] : -1289973024
scores [9] : 32759
 --------------------------------

scores [0] : -1289972640
scores [1] : 32759
scores [2] : -1289973024
scores [3] : 32759
scores [4] : -1289973168
scores [5] : 32759
scores [6] : 113721738
scores [7] : 32760
scores [8] : -1289973024
scores [9] : 32759
 --------------------------------

manually writing data in an array: 
scores[0] : 20
scores[1] : 21
scores[2] : 22
scores[3] : 32759
scores[4] : -1289973168
scores[5] : 32759
scores[6] : 113721738
scores[7] : 32760
scores[8] : -1289973024
scores[9] : 32759
 --------------------------------
salary[0] :12.7
salary[1] :7.5
salary[2] :13.2
salary[3] :8.1
salary[4] :9.3
 --------------------------------
families[0]: 12
families[1]: 7
families[2]: 5
families[3]: 0
families[4]: 0
 --------------------------------
value: 10
value: 12
value: 15
value: 11
value: 18
value: 17
------------------------------
score sum: 1870038742
------------------------------
score sum: 37


*/