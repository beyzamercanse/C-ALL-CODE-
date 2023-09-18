// This program totals and averages the sales figures for any
// number of days. The figures are stored in a dynamically
// allocated array.

//  if you don’t know how many variables to define? 
// Quite sim- ply, you allow the program to create its own variables “on the fly.” 
// This is called dynamic memory allocation, and is only possible through the use of pointers.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double *sales = nullptr,	// To dynamically allocate an array
    total = 0.0,				// Accumulator
    average;					// To hold average sales
    int numDays,				// To hold the number of days of sales
        count;					// Counter variable

    // Get the number of days of sales.
    cout << "How many days of sales figures do you wish to process? ";
    cin >> numDays;

    // To dynamically allocate memory means that a program, while running, asks the computer to set aside a chunk of unused memory large enough to hold a variable of a specific data type. Let’s say a program needs to create an integer variable. It will make a request to the computer that it allocate enough bytes to store an int. When the computer fills this request, it finds and sets aside a chunk of unused memory large enough for the variable. It then gives the program the starting address of the chunk of memory. The program can access the newly allocated memory only through its address, so a pointer is required to use those bytes.

    // Dynamically allocate an array large enough to hold
    // that many days of sales amounts.
    sales = new double[numDays];

    // Get the sales figures for each day.
    cout << "Enter the sales figures below.\n";
    for (count = 0; count < numDays; count++)
    {
		cout << "Day " << (count + 1) << ": ";
		cin >> sales[count];
    }

    // Calculate the total sales
    for (count = 0; count < numDays; count++)
    {
		total += sales[count];
    }

    // Calculate the average sales per day
    average = total / numDays;

    // Display the results
    cout << fixed << showpoint << setprecision(2);
    cout << "\n\nTotal Sales: $" << total << endl;
    cout << "Average Sales: $" << average << endl;

    // Free dynamically allocated memory
    delete [] sales;
    sales = nullptr; // Make sales a nullptr.

    return 0;
} 