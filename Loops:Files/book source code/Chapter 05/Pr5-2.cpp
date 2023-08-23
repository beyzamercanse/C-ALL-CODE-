// This program demonstrates the prefix and postfix
// modes of the increment and decrement operators.
#include <iostream>
using namespace std;

int main()
{
   int num = 4;
   
   cout << num << endl;   // Displays 4 // 4
   cout << num++ << endl; // Displays 4, then adds 1 to num // 4
   cout << num << endl;   // Displays 5 // 5
   cout << ++num << endl; // Adds 1 to num, then displays 6 // 6
   cout << endl;          // Displays a blank line
   
   cout << num << endl;   // Displays 6 // 6
   cout << num-- << endl; // Displays 6, then subtracts 1 from num // 6
   cout << num << endl;   // Displays 5 // 5
   cout << --num << endl; // Subtracts 1 from num, then displays 4 // 4

   // exe2
   int x = 1;
   int y; 
   y = x++; // Postfix increment -> • It assigns the value of x to the variable y.  • The variable x is incremented.
   cout << "y is" << y << " and x is: "<< x << endl; //y is1 and x is: 2
   // It assigns the value of x to the variable y.
   // The variable x is incremented.
   // The value that will be stored in y depends on when the increment takes place. 
   // Because the ++ operator is used in postfix mode, it acts after the assignment takes place. 


   int z = 1;
   int w;
   w = ++z; // Prefix increment
   cout << "w is" << w << " and z is: "<< z << endl; //w is2 and z is: 2
   // In the third statement, the ++ operator is used in prefix mode, 
   // so it acts on the variable z before the assignment takes place.
   // So, this code will store 2 in w. After the code has executed, z will also contain 2.


   // exe3
   int a = 2;
   int b = 5;
   int c = a * b++;
   cout << a << " " << b << " " << c; // 2 6 10

   int e = 2;
   int f = 5;
   int g = e * ++f;
   cout << e << " " << f << " " << g; // 2 6 12

   cout << endl;

   // exercises
   // 1
   int abc = 2;
   int efg = abc++;
   cout <<  abc << "\t" << efg << endl; // 3 2

   //2
   int bcd = 2;
   int fge = ++bcd;
   cout << bcd << "\t" << fge << endl; // 3 3

   //3
   int xa = 2;
   int xb =4;
   cout << x++ << "\t" <<  --xb << endl; // 2 3

   //4
   int ya=2;
   int yb = 2 * ya++;
   cout << ya << "\t" << yb << endl; // 3 4

   //5
   int xx = 99;
   if (x++ < 100)
      cout << "its true!\n";
   else
      cout << "it is false!\n"; // its true

   
   //6
   int h=0;
   if (++h)
      cout <<  "it is true!\n"; // its true
   else  
      cout << "it is false!\n";






   
   return 0;
}

