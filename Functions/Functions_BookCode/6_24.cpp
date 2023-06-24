//  This program demonstrates default function arguments.
#include <iostream>
using namespace std;

// function prototype with default parameters
void displayStars(int=10, int=1);

int main()
{
    displayStars(); // use default values for col and rows
    cout << endl;
    displayStars(5); // use default values for rows
    cout << endl;
    displayStars(7,3); // Use 7 for cols and 3 for rows
    return 0;
}

void displayStars(int cols, int rows)
{
    // nested loop. the outer loop controls the rows.
    // and the inner loop controls the columns.
    for (int down=0; down<rows; down++) // rows
    {
        for (int across=0; across<cols; across++) //cols
            cout << "*";
        cout << endl;
    }
}