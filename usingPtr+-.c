 //add mul div using pointers in c
 #include<stdio.h>
 int main(){
     int a,b, *ptr1,*ptr2,add,mul;
     float div;
     ptr1=&a;ptr2=&b;
     scanf("%d %d",ptr1,ptr2);
     add=*ptr1+*ptr2;
     mul=(*ptr1)*(*ptr2);
     div=*ptr1/ *ptr2;
     printf("%d %d\n",add,mul);
     printf("%f",div);}
     