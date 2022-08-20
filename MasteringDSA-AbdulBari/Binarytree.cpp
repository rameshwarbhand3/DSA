#include<iostream>
#include"Queue.h"
using namespace std;
struct Node *root=NULL;
void Treecreate(){
    struct Node*p,*t;
    int x;
    struct Queue q;
    create(&q,100);
    printf("Enter the root value");
    scanf("%d",&x);
    root=(struct Node*)malloc(sizeof(struct Node));
    root->data=x;
    root->lchild=root->rchild=NULL;
    enqueue(&q,root);
    while(!isempty){
        p=dequeue(&q);
        printf("Enter left child");
        scanf("%d",&x);
        if(x!=-1){
            t=(struct Node*)malloc(sizeof(struct Node));
            t->data=x;
            p->lchild=t;
            t->lchild=t->rchild=NULL;
            enqueue(&q,t);
         printf("Enter right child");
        scanf("%d",&x);
        if(x!=-1){
            t=(struct Node*)malloc(sizeof(struct Node));
            t->data=x;
            p->rchild=t;
            t->lchild=t->rchild=NULL;
            enqueue(&q,t);

        }
    }

}
void Rpreorder(struct Node*p){
    if(p){
        printf("%d",p->data);
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
void Rpostorder(struct Node*p){
    if(p){
        posrorder(p->lchild);
        postorder(p->rchild);
        printf("%d",p->data);
    }
}
void Rinorder(struct Node*p){
    if(p){
        inorder(p->lchild);
        printf("%d",p->data);
        inorder(p->rchild);
    }
}
void preorder(struct Node(*t){
    struct stack st;
    while(t!=NULL || !isempty(st)){
        if(t!=NULL){
            push(&st,t);
            t=t->lchild;
        }
        else{
            t=pop(&st,t);
            t=t->rchild;
        }
    }
}
void inorder(struct Node*t){
    struct stack st;
    while(t!=NULL || !isempty(st)){
        if(t!=NULL){
            push(&st,t);
            t=t->lchild;
        }
        printf("%d",p->data);
        pop(&st,t);
        t=t->rchild;
    }
}
void postorder(struct Node*t){
    struct stack st;
    while(t!=NULL || !isempty(st)){
        if(t!=NULL){
            push(&st,t);
            t=t->lchild;
        }
        else{
            temp=pop(&st);
            if(temp>0){
                push(&st,-temp);
                t=((Node*)temp)->rchild;
            }
            else{
                printf("%d",((Node*)temp)->data);
                t=NULL;
            }
        }
    }
}
int main(){
Treecreate();
preorder(root);
return(0);

}