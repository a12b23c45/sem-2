//insertion sort 
//comaprint adjacent numbers and swapping till end of array

#include <math.h>
#include <stdio.h>
 
 
void insertionSort(int a[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;
 
         
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}
 
 void printArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
 
 
int main()
{
    int k;
    scanf("%d",&k);
    int a[k];
    for(int i=0;i<k;i++){
        scanf("%d",&a[i]);
    }
    int n = sizeof(a) / sizeof(a[0]);
 
    insertionSort(a, n);
    printArray(a, n);
 
    return 0;
}