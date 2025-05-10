#include <stdio.h>
#include "quickSort.h"

void swapQuick(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partiton(int arr[], int low, int high) {
    int pivot = arr[high];

    int i = low - 1;

    for(int j=low; j<=high-1; j++) {
        if(arr[j] < pivot) {
            i++;
            swapQuick(&arr[i], &arr[j]);
        }
    }

    swapQuick(&arr[i+1], &arr[high]);
    return i + 1;
}

void quickSortRecursive(int arr[], int low, int high) {
    if(low < high) {
        int pi = partiton(arr, low, high);
        quickSortRecursive(arr, low, pi - 1);
        quickSortRecursive(arr, pi + 1, high);
    }
}

void quickSort(int arr[], int n) {
    quickSortRecursive(arr, 0, n - 1);
}
