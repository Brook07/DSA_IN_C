#include<stdio.h>

void insertion_sorting(int arr[], int n) {
    int i, j, key;
    
    for (i = 1; i < n; i++) {
        key = arr[i];  // The element to be inserted
        j = i - 1;

        // Shift elements of the sorted portion that are greater than the key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        // Place the key in its correct position
        arr[j + 1] = key;
    }
}
void print_array(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

//Main function
int main(){
    int arr[] = {65,4,13,21,12};
    int n=5;
    printf("Unsorted Array : \n");
    print_array(arr,n);
    insertion_sorting(arr,n);
    printf("Sorted Array :\n");
    print_array(arr,n);
}