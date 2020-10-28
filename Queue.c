#include<stdio.h>
#include<stdlib.h>
struct Queue
{	
    int x,size,front,rear,*Q;
};
void enqueue(struct Queue *,int );
int dequeue(struct Queue *);
void enqueue(struct Queue *q,int x)
{
    if(q->rear==q->size-1)
	    printf("queue is full");
    else
	{  
        q->rear++;
	    q->Q[q->rear]=x;
	}
}
int dequeue(struct Queue *q)
{   
    int x=-1;
    if(q->front==q->rear)
	    printf("queue is empty");
     else
	    {q->front++;
	    x=q->Q[q->front];
	}
	return x;
}

int main()
{
    struct Queue q ;
    q.front=q.rear=-1;
    printf("enter size");
    scanf("%d",&q.size);
    q.Q=(int*)malloc(q.size*sizeof(int));
    
    enqueue(&q,20);
    enqueue(&q,10);
    enqueue(&q,40);
    printf("queue after enqueue operation\n");
    for(int i=0;i<=q.rear;i++)
	    printf("%d\n",q.Q[i]);
    
    dequeue(&q);
    dequeue(&q);
    printf("queue after dequeue operation\n");
    for(int i=q.front+1;i<=q.rear;i++)
	    printf("%d\n",q.Q[i]);
    
    return 0;
}