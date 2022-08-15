#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack{
    int size;
    int top;
    int arr;
};
int stacktop(struct stack*sp){
    return sp->arr[sp->top];
}
int isempty(struct stack*ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(struct stack*sp){
    if(ptr->top==ptr->size-1);{
        return 1;
        }
else{
    return 0;
}
}
void push(struct stack*ptr,char val){
    if(isfull(ptr)){
        printf("stack overflow! cannot push %d element\n",val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
char pop(struct stack*ptr,char val){
    if(isempty(ptr)){
        printf("stack underflow!cannot pop %d element\n");
        return -1;
    }
    else{
        char val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int precedence(char ch){
    if(ch=='*'||ch=='/'){
        return 3;
    }
    else if(ch=='+'||ch=='-'){
        return 2;
    }
    else{
        return 0;
    }
}
int isoperator(char ch){
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
    return 1;
    else {
        return 0;
    }
}
char *infixtopostfix(char*infix){
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=10;
    sp->top=-1;
    sp->arr=(char*)malloc(sp->size*sizeof(char));
    char*postfix=(char*)malloc((strlen(infix)+1)*sizeof(char));
    int i=0;//Track infix traversal
    int j=0;//Track postfix addition
    while(infix[i]!='\0'){
        postfix[j]=infix[i];
        j++;
        i++;
}
else{
    if(precedence(infix[i])>precedence(stacktop(sp)){
        push(sp,infix[i]);
        i++;
    }
    else{
        postfix[j]=pop(sp);
        j++;
    }
}
}
while(!isempty(sp)){
    postfix[j]=pop(sp);
    j++;
}
postfix[j]='\0';
return postfix;
}
int main(){
    char*infix="x-y/z-k*d";
    printf("postfix is %s",infixtopostfix(infix));
    return(0);
}




 

