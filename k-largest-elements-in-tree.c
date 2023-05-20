//k largest elemnts in a tree out of the given data
//input-89 90 78 88
//output-90 88 78 k:3 largest elemts out of the tree

#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

void findKLargest(int arr[], int n, int k) {

    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i >= n - k; i--) {
        swap(&arr[0], &arr[i]);

        heapify(arr, i, 0);
        printf("%d ", arr[i]);
    }
}

int main() {
    int n, k;
    printf("n: ");
    scanf("%d", &n);
    int arr[n];
    printf("elements of the array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("k: ");
    scanf("%d", &k);

    printf("The %d largest elements: ", k);
    findKLargest(arr, n, k);

return 0;
}