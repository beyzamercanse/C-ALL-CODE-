

#include <iostream>
#include <iomanip>
using namespace std;


int main(){

    const int NUM_EMPLOYEES = 5; // Number of employees
    int hours[NUM_EMPLOYEES]; //array to hold hours
    double payrate; //hourly pay rate
    double grossPay; //to hold the geross pay

    //input the hours worked
    cout << "Enter the hours worked by ";
    cout << NUM_EMPLOYEES << " employees who all\n";
    cout << "enter the hourly pay rate \n";

    for (int i=0; i<NUM_EMPLOYEES; ++i){
        cout << "employee #" << (i+1) << endl;
        cin>>hours[i];
    }


    return 0;

}


