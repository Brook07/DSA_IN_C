//for ascending order
#include<stdio.h>
int i,j,temp,minIndex;
void SelectionSort(int arr[],int n){
    for (i=0;i<n-1;i++){
        minIndex = i;
        for(j=i+1;j<n;j++){
        if(arr[j]<arr[minIndex])
        {
            minIndex = j;
        }
    }
     if (minIndex != i){
            // Swap the elements
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}
void printArray(int arr[],int n){
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}

int main(){
    int arr[]={6,2,8,4,5};
    int n=5;
    SelectionSort(arr,n);
    printf("Sorted Array :\n");
    printArray(arr,n);
    return 0;
}