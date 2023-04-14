// inserted elements always get added at 0 position in array and last element is printed first
#include <stdio.h>
#include<stdlib.h>
#define max 4

int stack_arr[max];
int first =-1;

void push(int data){
    int i;
    first+=1;
    for(int i=first;i>0;i--)
    stack_arr[i]=stack_arr[i-1];
    stack_arr[0]=data;
}

void display(){
    int i;
    if(first ==-1){
        printf("underflow");
        exit(1);
    }
    for(int i=0;i<=first;i++)
    printf(" %d",stack_arr[i]);
    printf("\n");
}
 
 int main()
 {
     push(40);
     push(60);
     push(50);
     display();
     return 0;
     
 }