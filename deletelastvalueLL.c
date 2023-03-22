 //deletion last value
 #include <stdio.h>
#include<stdlib.h>
struct node{
        int data;
       struct node *next;
    };
    int main(){
        struct node *newnode,*start,*temp1,*temp2;
        int n;
        scanf("%d",&n);
        newnode=(struct node*)malloc (sizeof(struct node));
        //printf("enter value in first node:");
        scanf("%d",&newnode->data);
        start=newnode;
        temp1=newnode;
        temp2=temp1;
        
        for (int i=2;i<=n;i++){
            newnode=(struct node *)malloc(sizeof(struct node));
            printf("enter vale in node:");
            scanf("%d",&newnode->data);
            temp2=temp1;
            temp1->next=newnode;
            temp1->next=temp1;
             }
             
              while(temp1->next!=NULL){  
                 temp2=temp1;
                 temp1=temp1->next;
             }
             temp2->next=NULL;
             free(temp1);
             
             struct node *temp;
             temp=start;
             while(temp!=NULL){
                 printf("%d ",temp->data);
                 temp=temp->next;
             }
             }
