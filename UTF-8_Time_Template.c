#include <stdbool.h>
#include <stdio.h>
#include <time.h>

#include "libs/mergeSort.h" 
#include "libs/quickSort.h"
#include "libs/bubbleSort.h"
#include "libs/insertionSort.h"
#include "libs/selectionSort.h"

#define MAX_SIZE 100000

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

void AnySortingAlgo(int arr[], int n)
{
    /*(Insert Your Code Here)*/
    insertionSort (arr,n);
}

int main()
{
    FILE *file = fopen("test/UTF-8_AscendingCase.txt", "r"); // any .txt file that you want to test
    if (file == NULL)
    {
        printf("Failed to open file.\n");
        return 1;
    }

    int n = MAX_SIZE;
    int arr[n];

    // file reading process
    for (int i = 0; i < MAX_SIZE; i++)
    {
        fscanf(file, "%d", &arr[i]);
    }

    fclose(file);
    
    // clock should start right here, without reading file and displaying process
    clock_t start, end;
    printf("Start sorting.....");
    start = clock();

    AnySortingAlgo(arr, n); // Change Sorting Algorithm right here

    end = clock();
    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    // clock should end right here, before displaying the entire process

    printArray(arr, n);
    printf("\nExecution time: %.6f seconds\n", time_taken);

    return 0;
}
