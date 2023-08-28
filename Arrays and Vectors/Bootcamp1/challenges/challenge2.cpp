// code the array in incremented order

#include <iostream>
using namespace std;

#include <iostream>

bool isSortedIncremental(int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int data1[] = {1, 2, 4, 5, 8, 12, 13, 16, 71, 92};
    int dataSize1 = sizeof(data1) / sizeof(data1[0]);

    if (isSortedIncremental(data1, dataSize1)) {
        std::cout << "The array is sorted in incremental order." << std::endl;
    } else {
        std::cout << "The array is not sorted in incremental order." << std::endl;
    }

    int data2[] = {1, 112, 4, 5, 8, 12, 13, 16, 71, 92};
    int dataSize2 = sizeof(data2) / sizeof(data2[0]);

    if (isSortedIncremental(data2, dataSize2)) {
        std::cout << "The array is sorted in incremental order." << std::endl;
    } else {
        std::cout << "The array is not sorted in incremental order." << std::endl;
    }

    return 0;
}
