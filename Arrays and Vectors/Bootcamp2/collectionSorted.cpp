
// EXERCISE 2 : SORTED OR NOT?
/*
Your job is to take in an array of integers and figure out if it is sorted in incremental order or not.
For example, if we have an input array int data[] {1,2,4,5,8,12,13,16,71,92};
your code should figure out that the array (collection) is sorted in incrementing order.
If we have an input array; int data[] {1,112,4,5,8,12,13,16,71,92};
    your code should figure out that it is not sorted in incrementing order.
    You will store your result in a bool variable called sorted. 
    If the collection is sorted, you'll store in a true, if the collection is not sorted you'll store in a false.
*/

#include <iostream>
using namespace std;


bool isSorted(int data[], int size_of_array) {
    bool sorted = true; // // start as if its all sorted first, declare before the loop
    for (size_t i=0; i<size_of_array; ++i) {
        if(data[i]>data[i+1]) {
            sorted = false;
            break;
        } 
    }
    return sorted;
}


int main(){

    int data[] = {12,44,55,22,66,88,23,42,11};
    int size_of_array = sizeof(data)/sizeof(data[0]);

    bool sorted = isSorted(data, size_of_array); //remove brackets when passing array

    if (sorted){
        cout << "the array is sorted." << endl;
    } else {
        cout << " the array is not sorted" << endl;
    }

    return 0;
}

/*


bool is_collection_sorted(int numbers[], unsigned int collection_size){

  bool sorted{true}; // Assume the collection is sorted from the start

  for(unsigned int i{}; i < collection_size;++i){
    if(i == 0){
      continue;
    }

    //If we spot an element not greater than its predecessor, 
    // we immediately flag the collection as not sorted.
    if(!(numbers[i] > numbers[i-1])){
      sorted = false;
      break;
    }

  }

  return sorted;
}
// this code starts i from 0 and since -1 cant be an array element index, 
// it says "continue, dont check index 0 and index -1 because it will end up with error."


*/




/*
SOLUTION:
Declare an isSorted function that takes two parameters: the array to be checked and its size. The function will return a boolean value indicating whether the array is sorted in incremental order.
Initialize a loop that iterates from 0 to size - 1 (exclusive) to compare adjacent elements in the array.
Inside the loop, check if the current element (arr[i]) is greater than the next element (arr[i + 1]). If this condition is true, it means the array is not sorted in incremental order. In this case, immediately return false from the function.
After the loop, if no out-of-order elements were found, return true from the function to indicate that the array is sorted in incremental order.
In the main function, declare the array you want to check, along with its size.
Call the isSorted function, passing in the array and its size, and store the returned result in a boolean variable (sorted).
Use an if statement to check the value of sorted. If it is true, print a message indicating that the array is sorted in incremental order. Otherwise, print a message indicating that the array is not sorted in incremental order.

*/

