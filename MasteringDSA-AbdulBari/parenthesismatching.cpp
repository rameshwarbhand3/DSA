#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
  char data;
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
char pop(){
    struct node*t;
    char x=-1;
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
int isbalanced(char *exp){
    int i;
    for(i=0;exp[i]!='\0';i++){
        if(exp[i]=='(','[','{');
        push(exp[i]);
         if(exp[i]==')',']','}');
        {
            if(top==NULL);
            return 0;
            pop();

        }
    }
    if(top==NULL)
    return 1;
    else
    return 0;
}
int main(){
    char exp[]="((a+b)*(c-d))";
    printf("%d\n",isbalanced(exp));
    return (0);
}