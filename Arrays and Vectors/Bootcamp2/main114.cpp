// SIZE OF AN ARRAY

#include <iostream>

using namespace std;

int main(){

    int scores[] = {10,12,15,11,18,17,22,23,24};

   for (size_t i = 0; i<10; ++i){
    cout << "scores:[" << i << "]: " << scores[i] << endl;
   }

  // cout << scores[2] << endl; // 15

    // SIZE OF AN ARRAY
  int count = sizeof(scores) /sizeof(scores[0]);
  cout << "size of the scores is " << sizeof(scores) <<endl; // 36
  cout << "size of the scores[0] is " << sizeof(scores[0]) <<endl; // 4
  cout << "size of the array is: " << count << endl; // 9

  for (size_t i = 0; i<count; ++i){
    cout << "scores:[" << i << "]: " << scores[i] << endl;
   }





    return 0;
}

/*
sizeof(scores):   This expression calculates the total size of the array scores in bytes.
sizeof(scores) returns the size of the entire array as if it were a single object, taking into account all the elements and any padding between them.
In your code, sizeof(scores) gives you the total size of the scores array.


sizeof(scores[0]): This expression calculates the size of an individual element of the array scores in bytes.
scores[0] refers to the first element of the array.
sizeof(scores[0]) returns the size of the first element, which is equivalent to the size of all the other elements since they are of the same type.
In your code, sizeof(scores[0]) gives you the size of a single element in the scores array.

By dividing sizeof(scores) by sizeof(scores[0]), you obtain the number of elements in the array scores. This calculation assumes that all the elements have the same size.
In summary, 
        sizeof(scores) gives the total size of the array in bytes,
        and sizeof(scores[0]) gives the size of an individual element. 
        Dividing these two values gives the number of elements in the array.
*/