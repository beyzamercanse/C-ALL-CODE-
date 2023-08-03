// This program demonstrates a two-dimensional array.

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    const int NUM_DIVS = 3; //// Number of divisions, ROWS
    const int NUM_QTRS = 4; // Number of quarters, COLS
    double sales[NUM_DIVS][NUM_QTRS]; // Array with 3 rows and 4 columns.
    double totalSales = 0; // To hold the total sales: initialize sum to 0
    int div, qtr; // Loop counters: rows and cols

    cout << "This program will calculate the total sales of\n";
    cout << "all the company's divisions.\n";
    cout << "Enter the following sales information:\n\n";

    // Nested loops to fill the array with quarterly
    // sales figures for each division.
    for (div=0; div<NUM_DIVS; div++){ // rows
        for (qtr=0; qtr<NUM_QTRS; qtr++){ //cols
            cout << "division: " << (div + 1);
            cout << ", quarter: " << (qtr +1) << " :$";
            cin >> sales[div][qtr];
        }
        cout << endl; // Print blank line.
    }
    // nested loops used to add all the elements
    for (div=0; div<NUM_DIVS; div++){    //rows
        for (qtr=0; qtr<NUM_QTRS; qtr++){    //cols
            totalSales += sales[div][qtr];
        }
    }
    cout << fixed << showpoint << setprecision(2);
    cout << "The total sales for the company are: $";
    cout << totalSales << endl;

    return 0;
}