// max heap creating 
//highest element to lowest elements// descending order of elements in a tree

#include<stdio.h>

void swap( int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
};

void heapify(int arr[],int n,int i){
    int largest =i;
    int left=2*i+1;
    int right=2*i+2;
    
    if (left < n && arr[left] < arr[largest])
        largest = left;

    if (right < n && arr[right] < arr[largest])
        largest = right;

    if (largest != i) 
    {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}


void heapSort(int arr[], int n) {

    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) 
    {
        swap(&arr[0],&arr[i]);
        heapify(arr,i,0);
    }
}

int main(){
    int n;
    printf("n=");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element int the array:");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    
    heapSort(arr,n);
    
    printf("enter the sorted arry:");
    for(int i=0;i<n;i++)
    printf(" %d",arr[i]);
    return 0;
    
    }
