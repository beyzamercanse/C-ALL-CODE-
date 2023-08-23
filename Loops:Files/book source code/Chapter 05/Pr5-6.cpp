// This program displays a list of numbers and
// their squares.
#include <iostream>
using namespace std;

int main()
{
   const int MIN_NUMBER = 1,   // Starting number to square
             MAX_NUMBER = 10;  // Maximum number to square

   int num = MIN_NUMBER;       // Counter

   cout << "Number Number Squared\n";
   cout << "-------------------------\n";
   while (num <= MAX_NUMBER)
   {
      cout << num << "\t\t" << (num * num) << endl;
      num++; //Increment the counter.
   }
   return 0;
}
/*
It’s important that num be properly initialized. 
Remember, variables defined inside a function have no guaranteed starting value.
*/


/*
Number Number Squared
-------------------------
1               1
2               4
3               9
4               16
5               25
6               36
7               49
8               64
9               81
10              100


*/