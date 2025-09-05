#include <stdio.h>
#include <stdlib.h>
void merge(int A[], int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = A[low+i];
    for (int j = 0; j < n2; j++)
        R[j] = A[mid+1+j];

    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2)
        A[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
    while (i < n1)
        A[k++] = L[i++];
    while (j < n2)
        A[k++] = R[j++];
}

void mergeSort(int A[], int low, int high) {
    if (low < high) {
        int mid = (low+high)/2;
        mergeSort(A, low, mid);
        mergeSort(A, mid+1, high);
        merge(A, low, mid, high);
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int A[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    mergeSort(A, 0, n-1);

    printf("Sorted Array (Merge Sort): ");
    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);
    return 0;
}
