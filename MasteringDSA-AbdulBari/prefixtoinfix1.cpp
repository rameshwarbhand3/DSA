#include<iostream>
#include<stdlib.h>
#include<string.h>
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
            if(precedence(infix[i])>precedence(top->data));
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
int Eval(char*postfix){
    int i=0;
    int x1,x2,r;
    for(i=0;postfix[i]!=0;i++){
        if(isoperand(postfix[i])-'0'){
            push(postfix[i]);
        }
        else{
            x2=pop();x1=pop();
            switch(postfix[i]){
                case'+':r=x1+x2;break;
                 case'-':r=x1-2;break;
                  case'*':r=x1*x2;break;
                   case'/':r=x1/x2;break;
            }
            push(r);
        }
    }
    return top->data;
}
int main(){
    char*postfix="234*+82/-";
    printf("result is %d\n",Eval(postfix));
    return(0);
    }























