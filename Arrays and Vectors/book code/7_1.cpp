#include <iostream>
using namespace std;

int main(){

    const int num_emp = 6;
    int hours[num_emp]; //array

    cout << "enter the hours worked by: " << num_emp << " employees: \n";
    cin>> hours[0];
    cin>> hours[1];
    cin>> hours[2];
    cin>> hours[3];
    cin>> hours[4];
    cin>> hours[5];

    // Display the values in the array.
    cout << "The hours you entered are:";
    cout << " " << hours[0];
    cout << " " << hours[1];
    cout << " " << hours[2];
    cout << " " << hours[3];
    cout << " " << hours[4];
    cout << " " << hours[5];
    cout << endl;

    for (int count=0; count<num_emp; count++)
    {
        hours[count]=99;
        cout << hours[count] << endl;
    }


    return 0;
}

/*

enter the hours worked by: 6 employees: 
22 33 44 55 66 33 
The hours you entered are: 22 33 44 55 66 33
99
99
99
99
99
99


*/