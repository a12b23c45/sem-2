 //circular LL
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
          temp=temp->next;
          }


          temp->next=start;   //last node to first node link
          

         temp=start;
          while(temp->next!=NULL){       //print data
              printf("%d ",temp->data);
              temp=temp->next;
          }
          printf("%d",temp->data);
}
          