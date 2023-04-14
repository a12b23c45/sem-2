// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
 
 struct node{
     int data;
     struct node *link;
     
 }*top=NULL;
 
 void push(int data){
     struct node *new_node;
     new_node=malloc(sizeof(new_node));
     if (new_node == NULL){
         printf("overflow");
         exit(1);
     }
     new_node->data=data;
     new_node->link=NULL;
     
     new_node->link=top;
     top=new_node;
 }
 
 void print(){
     struct node *temp;
     temp=top;
     printf("the stack elements are ");
     while(temp){
         printf("%d",temp->data);
         temp=temp->link;
     }
     printf("\n");
 }
 
 
 int main(){
     int choice,data;
     while(1){
         printf("1.push\n");
         printf("2.print\n");
         printf("3.quit\n");
         printf("enter your choice");
         scanf("%d",&choice);
         
         switch (choice){
             case 1:
             printf("enter the elemtns to be pushed");
             scanf("%d",&data);
             push(data);
             break;
             
             case 2:
             print();
             break;
             
             case 3:
             exit(1);
         }
         
     }
      return 0;
 }