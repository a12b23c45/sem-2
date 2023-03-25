//stack overflow case more than max 
// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
#define max 4

int stack_arr[max];
int top=-1;
 
 void push(int data)
 {
     if(top == max-1)
     {
         printf("overflow");
         return;
     }
     top=top+1;
     stack_arr[top]=data;
 }
int main()
{
    push(1);
    push(3);
    push(4);
    push(5);
    push(4);
    return;
    
}

//outpur=overflow