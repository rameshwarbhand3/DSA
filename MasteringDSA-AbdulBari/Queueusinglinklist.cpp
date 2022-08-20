#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
} *front = NULL, *rear = NULL;
void enqueue(int x)
{
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));
    if (t == NULL)
    {
        cout << "Queue is full";
    }
    else
    {
        t->data = x;
        t->next = NULL;
        if (front == NULL)
            front = rear = t;
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}
int dequeue(int x)
{
    int x=-1;
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));
    if (front == NULL)
    {
        cout << "Queue is empty";
    }
    else
    {
        t = front;
        front = front->next;
        x = front->data;
        free(t);
    }
    return x;
}
void display()
{
    struct node *t;
    while (t != NULL)
    {
        cout << " " << t->data << endl;
        t = t->next;
    }
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    return(0);
}