#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int*arr;
};
int isempty(struct stack*ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(struct stack*ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct stack*ptr,int val){
    if(isfull(ptr)){
        printf("stack overflow\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
int pop(struct stack*ptr){
    if(isempty(ptr)){
        printf("stack underflow! cannot pop from the stack")
        return -1;
    }
    else{
        int val=ptr->arr[ptr->top];
        ptr->top=ptr->top-1;
        return val;
    }
}
int main(){
    struct stack*sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=10;
    sp->top=-1;
    sp->arr=(int*)malloc(sizeof(int));
    printf("Stack is created\n");
     printf("%d\n", before pushing isfull(sp));
    printf("%d\n",before pushing isempty(sp));
    push(sp,56);
    printf("%d\n", after pushing isfull(sp));
    printf("%d\n",after pushing isempty(sp));

    return(0);
S