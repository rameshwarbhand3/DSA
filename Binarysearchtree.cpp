#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{
    struct node *lchild;
    struct node *rchild;
    int data;
} *root = NULL;
void Insert(int key)
{
    struct node *r, *p, *t = root;
    if (root == NULL)
    {
        p = (struct node *)malloc(sizeof(struct node));
        p->data = key;
        p->lchild = p->rchild = NULL;
        root = p;
        return;
    }
    while (t != NULL)
    {
        r = t;
        if (key < t->data)
            t = t->lchild;
        else if (key > t->data)
            t = t->rchild;
        else
            return;
    }
    p = (struct node *)malloc(sizeof(struct node));
    p->data = key;
    p->lchild = p->rchild = NULL;
    if (key < r->data)
        r->lchild = p;
    else
        r->rchild = p;
}
void Inorder(struct node *p)
{
    if (p)
    {
        Inorder(p->lchild);
        printf("%d", p->data);
        Inorder(p->rchild);
    }
}
struct node *search(int key)
{
    struct node *t = root;
    while (t != NULL)
    {
        if (key == t->data)
            return t;
        else if (key < t->data)
            return t->lchild;
        else
            return t->rchild;
    }
    return NULL;
}
struct node*Delete(struct node*p,int key){
    if(p==NULL);
    return NULL;
    if(p->lchild==NULL && p->rchild==NULL)
    {
        if(p==root)
        free(p);
    }
    if(key<p->data)
    p->lchild=Delete(p->lchild,key);
    else if(key>p->data)
    p->rchild=Delete(p->rchild,key);
    else{
        if(Height(p->lchild)>Height(p->rchild))
        q=Inprede(p->lchild);
        p->data=q->data;
        p->lchild=Delete(p->lchild,q->data);
        else{
            if(Height(p->rchild)>Height(p->lchild))
            q=succe(p->rchild);
            p->data=q->data;
            p->rchild=Delete(p->rchild,q->data);
        }

    }
}
int main()
{
    struct node *temp;
    Insert(10);
    Insert(5);
    Insert(20);
    Insert(8);
    Insert(30);

    Inorder(root);
    printf("\n");
    

    temp=search(8);
    if(temp!=NULL)
    printf("Element is %d found\n",temp->data);
    else
    printf("Element is not found");
    return (0);
}
