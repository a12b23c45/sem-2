//selection sort
usinf selection osrt function and print arrya function #include<stdio.h>
 
 void  swap(int *x,int *y){
     int temp=*x;
     *x=*y;
     *y=temp;
 }
 void selectionsort(int arr[],int n){
     int i,j,min;
     for(i=0;i<n-1;i++){
         //finding the minimum number in the unsorted array
         min=i;
         for(j=i+1;j<n;j++)
         if(arr[j]<arr[min])
        min=j;
        
        //swaping th emin element with the first element
        if(min!=i)
        swap(&arr[min],&arr[i]);
     }
 }
 //function to print an array
 void printarray(int arr[], int size){
     int i;
     for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 int main(){
     
int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr, n);
    printf("Sorted array: \n");
    printarray(arr, n);
    return 0;
}