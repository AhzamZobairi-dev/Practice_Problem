
#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

typedef struct{
    int data[MAX_SIZE];
    int front;
    int rear;
}queue;

void intitialize(queue *q){
    q->front = -1;
    q->rear = 0;

}

bool isEmpty(queue *q){
    return (q->front == q->rear - 1);
}

bool isFull(queue *q){
    return (q->rear == MAX_SIZE);
}

void enqueue(queue *q, int value){
    if(isFull(q)){
        printf("Can't Enqueue - Queue is Full");
        return;
    }

    q->data[q->rear] = value;
    q->rear++;
}

void dequeue(queue *q){
    if(isEmpty(q)){
        printf("Empty Queue - Can't Dequeue");
        return;
    }

    q->front++;
    return;
}

void printQueue(queue *q){
    if(isEmpty(q)){
        printf("Queue is Empty\n");
        return;
    }
    printf("Queue elements: ");
    for(int i = q->front + 1; i < q->rear; i++){
        printf("%d ", q->data[i]);  
    }
    printf("\n");
}

void peek(queue *q){
    if(isEmpty(q)){
        printf("Queue is Empty - Can't Peek\n");
        return;
    }
    printf("Front element: %d\n", q->data[q->front + 1]);
}


int main() {

    queue q;
    intitialize(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    printQueue(&q); 
    return 0;

}
