#include <stdio.h>
#include <stdlib.h>
void merge(int Arr[], int low, int mid, int high) {
    int n1 = mid - low + 1;
  
    int n2 = high - mid;
  
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++){
        L[i] = Arr[low+i];
    }
    for (int j = 0; j < n2; j++){
        R[j] = Arr[mid+1+j];
    }

    int i = 0;
    int j = 0;
    int k = low;
    while (i < n1 && j < n2){
        if(L[i] <= R[j]){
            Arr[k++] = L[i++];
        }
        else{
            Arr[k++] = R[j++];
        }
    }
    while (i < n1)
        Arr[k++] = L[i++];
    while (j < n2)
        Arr[k++] = R[j++];
}

void mergeSort(int Arr[], int low, int high) {
    if (low < high) {
        int mid = (low+high)/2;
        mergeSort(Arr, low, mid);
        mergeSort(Arr, mid+1, high);
        merge(Arr, low, mid, high);
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int Arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &Arr[i]);
    }

    mergeSort(Arr, 0, n-1);

    printf("Sorted Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", Arr[i]);
    return 0;
}
