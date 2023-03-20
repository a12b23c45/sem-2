 //double pointer
 #include<stdio.h>
 int main(){
      int a,b,c,**x,*ptr;
      ptr=&a;
      x=&ptr;
      printf("enter the value");
      scanf("%d %d",&a,ptr);
        
      printf("enter the value inside a is %d and b is %d",**x,*ptr);}
      