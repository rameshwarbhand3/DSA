#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
   struct node*f=NULL;
    struct node*r=NULL;
void linklisttraversal(struct node*ptr){
    pintf("Printing the element of this list")
while(ptr!=NULL){
    printf("Elemnet %d\n",ptr->data);
    ptr=ptr->next;
}
}
void enqueue(struct node*f,struct node*r,int val){
    struct node*n=(struct node*)malloc(sizeof(struct node));
    if(n==NULL){
        printf("Q is full");
    }
    else{
        n->data=val;
        n->next=NULL;
        if(f==NULL){
            f=r=NULL;
        }
        else{
            r->next=n;
        }
    }

}
int dequeue(struct node*f,int val){
int val=-1;
struct node*ptr=f;
if(f==NULL){
    print("Queue is empty");
}
else{
    f=f->next;
    val=ptr->data;
    free (ptr);
}
}
int main(){
 linklisttraversal(f);
 printf("Dequeuing element%d\n",dequeue());
enqueue(30);
enqueue(20)
returnn(0);
}