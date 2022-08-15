#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int f;
    int r;
    int*arr;
};
int isfull(){
   if( q->r==q->size-1){;
    return 1;
}
else{
    return 0;
}
}
int isempty(struct queue *q){
    if(q->f==q->r){
        return 1;
    }
    else{
        return 0;
    }
}
void enqueue(struct queue *q,int val){
    if(isfull(q)){
        printf("Q is full");
    }
    else{
        q->r++;
        q->arr[q->r]=val;
    }
}
void dequeue(struct queue *q,int val){
    int a=-1;
    if(isempty(q)){
        printf("Q is full");
    }
    else{
        q->f++;
       a= q->arr[q->f]=val;
    }
    return a;
}

int main(){
    struct queue q;
    q.size=100;
    q.f=-1; q.r=-1;
    q.arr=(int*)malloc(q.size(sizeof(int));
    enqueue(&q,12);
    enqueue(&q,15);
    printf("Dequeuing element %d",dequeue(&q));
    return(0);
}