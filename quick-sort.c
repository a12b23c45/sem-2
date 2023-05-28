 //quick sort
 
 
 #include<stdio.h>
 
 void swap(int *x,int*y){
     int t=*x;
     *x=*y;
     *y=t;
 }
 
 int part(int a[], int l,int h){
     int pivot=a[h];
     int i=(l-1);
     for(int j=l;j<=h-1;j++){
         if(a[j]<pivot){
             i++;
             swap(&a[i],&a[j]);
         }
        }
     swap(&a[i+1],&a[h]);
     return (i+1);
 }
 
 void quicksort(int a[],int l,int h){
     if(l<h){
         int k=part(a,l,h);
         quicksort(a,l,k-1);
         quicksort(a,k+1,h);
         
     }
 }
 
 
 int main(){
     int n;
     scanf("%d",&n);
     int a[n];
     for(int i=0;i<n;i++){
         
         scanf("%d",&a[i]);
     }
     int k=sizeof(a)/sizeof(a[0]);
     quicksort(a,0,k-1);
     printf("Sorted array: \n");
    for (int i = 0; i < k; i++)
        printf("%d ", a[i]);
 }