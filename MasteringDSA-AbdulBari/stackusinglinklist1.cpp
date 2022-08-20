#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    struct node*next;
}*top=NULL;
void push(int x){
    struct node*t;
    t=(struct node*)malloc(sizeof(struct node));
    if(t==NULL){
        printf("stack is full");
    }
    else{
        t->next=top;
        t->data=x;
        top=t;

    }
}
int pop(){
    struct node*t;
    int x=-1;
    t=(struct node*)malloc(sizeof(struct node));
    if(top==NULL){
        printf("stack is empty");
    }
    else{
        t=top;
        top=top->next;
        x=t->data;
    }
    return x;

}
void display(){
    struct node*p;
    while(p!=NULL){
        printf("%d\n",p->data);
        p=p->next;
    }
}
int main(){
    push(10);
    push(20);
    push(30);
    display();
    return(0);
}
