 // basic pointer adressing
 #include<stdio.h>
 int main(){
     int a, *ptr;
     printf("enter value a:");
     scanf("%d",&a);
     ptr=&a;
     printf("the value of a is %d\n",a);
     printf("the address of a is %p\n",a);
     printf("the value inside ptr is %p",ptr);
 }