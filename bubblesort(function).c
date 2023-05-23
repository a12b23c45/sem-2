// bubble sort using function 
//if sorted true then false
// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>
void bubblesort(int a[],int n)
 {
     bool sorted=true;
     
     for( int i=0;i<n-1;i++)
     {
         if (a[i]>a[i+1])
         {
             int t=a[i];
         a[i]=a[i+1];
         a[i+1]=t;
         sorted =false;}
     }
         if(sorted==false){
         bubblesort(a,n);
             
    }
     
 }
int main() {
    int arr[]={5,4,8,2,9,7,3};
    int n=sizeof(arr) / sizeof(int);
    bubblesort(arr,n);
    printf("sorted array is:");
    for(int i=0;i<n;i++){
        printf(" %d",arr[i]);
    }
    printf("/n");
    return 0;
    }