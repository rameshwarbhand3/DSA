#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node{
    struct Node*lchild;
    int data;
    struct node*rchild;
};
struct Queue
{
    int size;
    int front;
    int rear;
    Node **Q;
};
void create(struct Queue *q, int size)
{
    q->size = size;
    q->front = q->rear = 0;
    q->Q = (Node **)malloc(q->size * sizeof(Node*));
}
void enqueue(struct Queue *q, Node *x)
{
    if ((q->rear + 1) % q->size == q->front)
    {
        cout << "Queue is full";
    }
    else
    {
        q->rear = (q->rear + 1) % q->size;
        q->Q[q->rear] = x;
    }
}
int dequeue(struct Queue *q)
{
  int *x=NULL;
    if (q->front == q->rear)
    {
        cout << "Queue is empty";
    }
    else
    {
        q->front = (q->front + 1) % q->size;
        x = q->Q[q->front];
    }
    return *x;
}
int isempty(struct Queue q){
    return q.front==q.rear;

}