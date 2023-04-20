#include <stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10 

int queue[MAX_SIZE];
int F=-1,R=-1;

void enqueue(int x) {
    if(R==MAX_SIZE-1) {
        printf("overflow\n");
        exit;
    }else {
        if(R==-1) {
            F=0;
            R=0;
        }else{
            R++;
        }
        queue[R]=x;
        
    }
}

int dequeue(int x) {
    if(F==-1) {
        printf("underflow\n");
        exit;
    }else{
        x=queue[F];
        if(F==R) {
            F=-1;
            R=-1;
        }else{
            F++;
        }
        
    }
}

int display() {
    if(F==-1) {
        printf("underflow\n");
        exit;
    } else {
        printf("Queue elements are: ");
        for(int i=F;i<=R;i++) {
            printf("%d ",queue[i]);
        }
    }
}



int main()
{
    int choice;
    int x;
    while(1) {
        printf("\nEnter your choice:\n");
        printf("1)enqueue\n");
        printf("2)dequeue\n");
        printf("3)display\n");
        printf("4)exit\n");
        scanf("%d",&choice);
        
        switch(choice) {
            case 1: printf("Enter x:");
                    scanf("%d",&x);
                    enqueue(x);
                    
                    break;
            case 2: dequeue(x);
                    
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
                    break;
            default : printf("Invalid choice:");
 }
}
}
