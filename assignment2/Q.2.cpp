#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    int a=n-1;
    for (int i = 0; i < a; i++)
        for (int j = 0; j < a - i; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
}
