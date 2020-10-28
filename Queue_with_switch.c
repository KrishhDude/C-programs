#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int size;
    int front;
    int rear;
    int *Q;
};
void enqueue(struct queue *q, int x)
{
    if(q->rear == q->size-1)
        printf("Queue overflow\n");
    else
    {
        q -> rear++;
        q -> Q[q->rear] = x;
    }
    
}
int dequeue(struct queue *q)
{
    int x = -1;
    if(q->rear == q->front)
    {
        printf("Queue is empty\n");
        return x;
    }
    q->front++;
    x = q-> Q[q->front];//check here for ->
    return x;
}
void print(struct queue q)
{
    if(q.rear == q.front)
    {
        printf("Queue is empty\n");
    }
    else
    {
        for(int i = q.front+1; i<=q.rear; i++)
            printf("%d\t",q.Q[i]);
    }
    printf("\n");
}
int main()
{
    int x, ch;
    struct queue q;
    q.front == q.rear == -1;
    printf("Enter the size of the queue");
    scanf("%d", &q.size);
    q.Q = (int*)malloc(q.size*sizeof(int));
    printf("*****MENU*****\n");
    printf("1. ENQUEUE \n2. DEQUEUE \n3. PRINT \n4.EXIT \n");
    printf("Enter ur choice\n");
    scanf("%d",&ch);
    while(ch!=4)
    {
        switch(ch)
        {
            case 1:
            printf("Enter an integer: ");
            scanf("%d",&x);
            enqueue(&q, x);
            break;

            case 2:
            printf("Deleted element: %d", dequeue(&q));
            break;

            case 3:
            printf("Queue elements: ");
            print(q);
            break;

            default:
            printf("wrong choice entered\n");
            break;
        }
        printf("%dEnter your next choice: ");
        scanf("%d", &ch);
    }
    return 0;
}