 //swapping without 3rd variable in pointers
 
 #include<stdio.h>
 int main(){
      int a,b,c,*x,*y;
      x=&a;
      y=&b;
      printf("enter the value");
      scanf("%d %d",&a,&b);
       *x=*x+*y;
       *y=*x-*y;
       *x=*x-*y;
      printf("enter the value inside a is %d and b is %d",*x,*y);}
      
