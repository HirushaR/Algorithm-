#include <stdio.h>
#include <stdlib.h>
#define size 5

struct queue{
	int data[size];
	int front , rear;
} q;

void enqueue(){
    int item;
	if(q.rear == size -1 )
    {
        printf("Queue is full");
    }
	else
    {
        printf("enter number:");
        scanf("%d",&item);
        q.rear++;
        q.data[q.rear]= item;
    }
}

int dequeue(){
	if(q.rear==-1 || q.front > q.rear)
    {
        printf("queue is empty\n");
        return 0;
    }else
    {
        int item;
        item=q.data[q.front];
        printf ("poped element is = %d\n", q.data[q.front]);
        q.front++;
        return(item);
    }
}

int peek(){
	if(q.rear==-1 || q.front > q.rear){
		 return -999;
	}
	else
        printf(" last element is %d \n",q.data[q.rear]) ;

}
void disply()
{
    int i;
    if(q.rear==-1 || q.front > q.rear)
    {
        printf("queue is empty\n");
    }else
    {
        printf("\n the status of the stack is \n");
         for(i = q.front ;i<= q.rear; i++)
        {
            printf("%d\n",q.data[i]);
        }
    }


}



int main()
{
    int choice ;
    int option = 1;
    q.front = 0;
    q.rear = -1;

    printf("queue operations \n");
    while(option)
    {
        printf(" 1 ------  insert to queue \n");
        printf(" 2 ------  delete item from queue \n");
        printf(" 3 ------  display queue \n");
        printf(" 4 ------  last element \n");
        printf(" 5 ------  exit \n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            disply();
            break;
        case 4:
             peek();
            return;
         case 5:
            return;
        }
        printf("do you wanna continue (0 or 1)");
        scanf("%d",&option);
    }
    return 0;
}
