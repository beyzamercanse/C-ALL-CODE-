// eliminate the duplication of numbers in an array

#include <iostream>
using namespace std;

int main(){

    int numbers[] = {1,2,4,6,2,1,4,77,43,21};
    int dataSize = sizeof(numbers)/sizeof(numbers[0]);

    int uniqueNumbers[dataSize];
    int uniqueCount = 0;

    for (int i = 0; i<dataSize; ++i){
        bool isDuplicate = false;


        for (int j=0; j<uniqueCount; ++j){
            if (uniqueNumbers[j]==numbers[i]){
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
            uniqueNumbers[uniqueCount] = numbers[i];
            uniqueCount++;
        }

    }

    cout << "The collection contains " << uniqueCount << " unique numbers, they are :";
    for (int i = 0; i < uniqueCount; ++i) {
        cout << " " << uniqueNumbers[i];
    }
    cout << endl;
    
    return 0;
}



/*

for detailed solution : 
https://medium.com/@beyzamercanse/fundamental-array-question-in-c-eliminating-the-duplications-586d9b5890fc

*/