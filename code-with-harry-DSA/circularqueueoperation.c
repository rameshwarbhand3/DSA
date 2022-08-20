#include<stdio.h>
#include<stdlib.h>
struct circuluarqueue{
    int size;
    int r;
    int f;
    int*arr;
};
int isfull(struct circularqueue*q,int val){
    if((q->r+1)%q->size==q->f){
        return 1;
    }
    return 0;
}
int isempty(struct circularqueue*q,int val){
if(q->r==q->f){
    return 1;
}
return 0;
}
void enqueue(struct circularqueue*q,int val){
    if(isfull(q)){
        printf("The Q is full");
    }
    else{
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=val;
    }
}
int dequeue(struct circularqueue*q,int val){
    int a=-1;
    if(isempty(q)){
        printf("The Q is empty")
    }
    else{
        q->f=(q->f+1)%q->size;
        q->arr[q->f]=val;
    }
}
int main(){
    struct circularqueue q;
    q.size=10;
    q.f=q.r=0;
    q.arr=(int*)malloc(q.size*sizeof(int));
    enqueue(&q,12);
     enqueue(&q,12);
      enqueue(&q,12);
       enqueue(&q,12);
       printf("Dequeuing element %d\n",dequeue(&q));
       printf("Dequeuing element %d\n",dequeue(&q));
       printf("Dequeuing element %d\n",dequeue(&q));
       printf("Dequeuing element %d\n",dequeue(&q));

if(isempt(&q)){
    printf("Queue is empty\n");
}
if(isfull(&q)){
    printf("Queue is full\n");
}
return(0);
}



