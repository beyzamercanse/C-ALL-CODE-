// This program displays the numbers 1 through 10 and
// their squares.
#include <iostream>
using namespace std;

int main()
{
   const int MIN_NUMBER = 1,   // Starting value
             MAX_NUMBER = 10;  // Ending value
   int num;

   cout << "Number Number Squared\n";
   cout << "-------------------------\n";

   for (num = MIN_NUMBER; num <= MAX_NUMBER; num++)
      cout << num << "\t\t" << (num * num) << endl;

   for (num = 1; num <= 10; num++) 
      cout << num << " ";

   return 0;
}

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
