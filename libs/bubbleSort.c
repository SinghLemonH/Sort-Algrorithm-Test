#include <stdio.h>
#include "bubbleSort.h"

void swapBubble(int xp, int yp) {
    int temp = xp;
    xp = yp;
    yp = temp;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swapBubble(arr[j], arr[j + 1]);
            }
        }
    }
}