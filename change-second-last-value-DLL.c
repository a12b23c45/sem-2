// changinf second last value in double linked lsit
#include <stdio.h>
#include<stdlib.h>

struct node{
    struct node *pre;
    int data;
    struct node *next;
};


int main(){
    
    int n;
    scanf("%d",&n);
    
    struct node *new_node,*start,*temp;
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
        while(temp->next!=NULL){
            temp=temp->next;
        }
        
        temp->pre->data=4;
    
    
    temp=start;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    
}

//output
/*4
5 6 7 8
5 6 4 8*/