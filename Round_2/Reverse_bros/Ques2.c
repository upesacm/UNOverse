#include<stdio.h>
void merge(int arr[],int low,int hi)
void mergesort(int arr[],int low,int high){
    int mid=low+(high-low)/2;

    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,high,mid);
}
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d" ,&n);
    int arr[n];
    printf("Enter %d elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",arr[i])
    }
    int low=0,high=n-1;
    mergesort(arr,low,high);

    return 0;
}