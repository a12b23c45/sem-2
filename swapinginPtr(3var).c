 //swapping using pointers with third variable
 #include<stdio.h>
 int main(){
      int a,b,c,*x,*y;
      x=&a;
      y=&b;
      printf("enter the value");
      scanf("%d %d",&a,&b);
      c=*x;//c=a
      *x=*y;//a=b
      *y=c;//b=c
      printf("enter the value inside a is %d and b is %d",*x,*y);}
      