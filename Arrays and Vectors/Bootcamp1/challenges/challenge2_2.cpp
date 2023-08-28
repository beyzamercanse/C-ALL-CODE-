// incremented sequence in C++

#include <iostream>
using namespace std;

void customSortPreservingOrder(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int data[] = {1, 12, 43, 22,55,58,93,33,31,38,89};
    int dataSize = sizeof(data) / sizeof(data[0]);

    std::cout << "Original array: ";
    for (int i = 0; i < dataSize; ++i) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;

    customSortPreservingOrder(data, dataSize);

    std::cout << "Array with preserved order within values: ";
    for (int i = 0; i < dataSize; ++i) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

