#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function prototypes
void swap(int* a, int* b);
int partition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);
void bubbleSort(int arr[], int n);
void printArray(int arr[], int size);

int main() {
    // Set the seed for random number generation
    srand(time(NULL));

    // Define the size of the array
    int size = 10000;

    // Generate a random array
    int arr_quick[size], arr_bubble[size];
    for (int i = 0; i < size; i++) {
        arr_quick[i] = arr_bubble[i] = rand() % 1000;
    }

    // Record the starting time for Quick sort
    clock_t start_quick = clock();
    quickSort(arr_quick, 0, size - 1);
    clock_t end_quick = clock();
    double cpu_time_quick = ((double) (end_quick - start_quick)) / CLOCKS_PER_SEC;

    // Record the starting time for Bubble sort
    clock_t start_bubble = clock();
    bubbleSort(arr_bubble, size);
    clock_t end_bubble = clock();
    double cpu_time_bubble = ((double) (end_bubble - start_bubble)) / CLOCKS_PER_SEC;

    // Display execution times
    printf("Quick sort took %f seconds\n", cpu_time_quick);
    printf("Bubble sort took %f seconds\n", cpu_time_bubble);

    return 0;
}

// Swap two elements
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function for Quick sort
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Quick sort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Bubble sort function
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

// Utility function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

