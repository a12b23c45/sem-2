 // adding node at last
#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    
};
int main() {
      struct node *new_node,*start,*temp;
      int n;
      scanf("%d",&n);
       new_node=(struct node*)malloc(n*(sizeof(struct node)));
      scanf("%d",&new_node->data);
      
      start=new_node;
      temp=new_node;
      
      for(int i=2;i<=n;i++){
           new_node=(struct node*)malloc(n*(sizeof(struct node)));
          scanf("%d",&new_node->data);
          temp->next=new_node;
          temp=temp->next;}
          
           new_node=(struct node*)malloc(n*(sizeof(struct node)));
          scanf("%d",&new_node->data);
          
          temp=start;
          while(temp->next!=NULL){
              temp=temp->next;
          }
          temp->next=new_node;
          new_node->next=NULL;
          
          temp=start;
          while(temp!=NULL){
              printf("%d ",temp->data);
              temp=temp->next;
          }
}
          