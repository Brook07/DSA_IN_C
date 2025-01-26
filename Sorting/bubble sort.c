#include<stdio.h>

// Function to perform Bubble Sorting
void bubble_sorting(int arr[], int n) {
    int i, j, temp;

    // Outer loop for each pass
    for (i = 0; i < n - 1; i++) {
        // Inner loop for comparing adjacent elements
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap if the current element is greater than the next
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print an array
void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

// Main function
int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int n = 5;

    printf("Unsorted Array : \n");
    print_array(arr, n);

    bubble_sorting(arr, n);

    printf("Sorted Array : \n");
    print_array(arr, n);

    return 0;
}
