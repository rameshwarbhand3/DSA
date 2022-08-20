#include<iostream>
#include<stdlib.h>
#include<string.h>
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
int precedence(char x){
    if(x=='+'||x=='-')
    return 1;
    else if(x=='*'||x=='/');
    return 2;
    return 0;
}
int isoperand(char x){
    if( x=='+'||x=='-'||x=='*'||x=='/')
    return 0;
    else
    return 1;
}
char*InTopost(char*infix){  
    int i,j=0;
    char*postfix;
    int len=strlen(infix);
    postfix=(char*)malloc((len+2)*sizeof(char));
    while(infix[i]!='\0'){
        if(isoperand(infix[i]))
        postfix[j++]=infix[i++];
        else{
            if(precedence(infix[i]>precedence(top->data));
            push(infix[i++]);
            else{
                postfix[j++]=pop();
            }
        }
    }
    while(top!=NULL){
        postfix[j++]=pop();
        postfix[j]='\0';
    }
    return postfix;


}
int main(){
    char*infix="a+b*c-d\e";
    push('#');
    char*postfix=InTopost(infix);
    printf("%d",postfix);
    return(0);
    
}
