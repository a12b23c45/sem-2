// merge sort
// Merge Sort

#include <stdio.h>

void merge(int a[], int l, int m, int r)
{
    int n1=m-l+1;
    int n2=r-m;
    
    int L[n1], R[n2];
    
    for (int i=0; i<n1; i++) L[i]=a[i+l];
    for (int j=0; j<n2; j++) R[j]=a[j+m+1];
    
    int i=0, j=0;
    int k=l;
    
    while(i<n1 && j<n2)
    {
        if (L[i]<=R[j])
        {
            a[k++]=L[i++];
        }
        
        else 
        {
            a[k++]=R[j++];
        }
    }
    
    while (i<n1)
    {
        a[k++]=L[i++];
    }
        
    while (j<n2)
    {
        a[k++]=R[j++];
    }
}

void merge_sort(int a[], int l, int r)
{
    int mid;
    if (l<r)
    {
        mid= (l+r)/2;
        merge_sort(a,l,mid);
        merge_sort(a,mid+1,r);
        
        merge(a,l,mid,r);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0; i<n; i++) scanf("%d",&a[i]);
    
    merge_sort(a,0,n-1);
    
    for (int i=0; i<n; i++) printf("%d ",a[i]);
}
