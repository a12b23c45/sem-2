// printing list without malloc funtion
#include <stdio.h>

struct node{
    int data;
    struct node *next;
    
};
int main() {
     struct node node1,node2,node3;
     node1.data=11;
     scanf("%d",&node2.data);
     scanf("%d",&node3.data);
     
     printf("%d ",node1.data);
     printf("%d ",node2.data);
     printf("%d",node3.data);

node1.next=&node2;
node2.next=&node3;
node3.next=NULL;
}