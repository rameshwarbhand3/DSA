#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{
    struct node *prev;
    int data;
    struct node *next;
} *first = NULL;
void create(int A[], int n)
{
    int i;
    struct node *t, *last;
    first = (struct node *)malloc(sizeof(struct node));
    first->data = A[0];
    first->prev = first->next = NULL;
    last = first;
    for (i = 0; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = A[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}
void display(struct node *p)
{
    while (p != NULL)
    {
        printf("%d->", p->data);
        p = p->next;
    }
    printf("\n");
}
int len(struct node *p)
{
    int len = 0;
    while (p != NULL)
    {
        len++;
        p = p->next;
    }
    return len;
}
void insert(struct node *p, int index, int x)
{
    int i;
    struct node *t;
    if (index == 0)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = x;
        t->next = first;
        t->prev = NULL;
        first->prev = t;
        first = t;
    }
    else
    {
        for (i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        t = (struct node *)malloc(sizeof(struct node));
        t->data = x;
        t->prev = p;
        t->next = p->next;
        if (p->next != NULL)
        {
            p->next->prev = t;
            p->next = t;
        }
    }
}
int Delete(struct node *p, int index)
{
    struct node *q;
    int x;
    if (index == 1)
    {
        first = first->next;
        if (first != NULL)
            first->prev = NULL;
        x = p->data;
        free(p);
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        p->prev->next = p->next;
        if (p->next != NULL)
            p->next->prev = p->prev;
        x = p->data;
        free(p);
    }
    return x;
}
void reverse(struct node *p)
{
    struct node *temp;
    while (p != NULL)
    {
        temp = p->next;
        p->next = p->prev;
        p->prev = temp;
        p = p->prev;
        if(p!=NULL && p->next==NULL)
        first=p;
       
    }
}

int main()
{
    int A[] = {2, 4, 5, 6, 7};
    create(A, 5);
    reverse(first);

    display(first);
    //insert(first,3,10);
    //display(first);//

    return (0);
}