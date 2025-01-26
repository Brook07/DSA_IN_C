#include<stdio.h>

void insertion_sorting(int arr[],int n){
    int minIndex,temp,i,j;
    for(i=0;i<n-1;i++){
        minIndex = i;
    for(j=i+1;j<n;j++){
        if(arr[minIndex]>arr[j]){
            minIndex = j;
            }
        }
        if (minIndex != i){
            temp=arr[minIndex];
            arr[minIndex]=arr[j];
            arr[j]=temp;
        }
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
    int arr[] = {5,4,3,2,1};
    int n=5;
    printf("Unsorted Array : \n");
    print_array(arr,n);
    insertion_sorting(arr,n);
    printf("Sorted Array :\n");
    print_array(arr,n);
}