//Add node at second last postion
// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

struct node{
    struct node *pre;
    int data;
    struct node *next;
};


int main(){
    
     struct node *new_node,*temp,*start;
    int n;
    scanf("%d",&n);
    
    new_node=(struct node*)malloc(n*sizeof(struct node));
    scanf("%d",&new_node->data);
    start=new_node;
    temp=start;
    new_node->pre=NULL;
    
    for(int i=2;i<=n;i++){
        new_node=(struct node*)malloc(n*sizeof(struct node));
        scanf("%d",&new_node->data);
        temp->next=new_node;
        new_node->pre=temp;
        temp=temp->next;
        }
         
     temp=start;
     while(temp->next!=NULL)
     {
         temp=temp->next;
     }
     
     new_node=(struct node*)malloc(n*sizeof(struct node));
      scanf("%d",&new_node->data);
      
     new_node->pre=temp->pre;
     temp->pre->next=new_node;
     new_node->next=temp;
     temp->pre=new_node;
     
    
    temp=start;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
    
}
/*4
5 6 7 8
4
5 6 7 4 8 */