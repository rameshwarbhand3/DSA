#include <iostream>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *first = NULL, *second = NULL, *third = NULL;
void create(int A[], int n)
{
    int i;
    struct node *t, *last;
    first = (struct node *)malloc(sizeof(struct node));
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void display(struct node *p)
{
    while (p != 0)
    {
        printf("%d", p->data);
        p = p->next;
    }
}
void rdisplay(struct node *p)
{
    if (p != 0)
    {
          rdisplay(p->next);
        printf("%d -> ", p->data);
      
    }
}
int count(struct node *p)
{
    int c = 0;
    while (p != 0)
    {
        c++;
        p = p->next;
    }
    return c;
}
int sum(struct node *p)
{
    int sum = 0;
    while (p != 0)
    {
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
}
int mul(struct node *p)
{
    int mul = 1;
    while (p != 0)
    {
        mul = mul * p->data;
        p = p->next;
    }
    return mul;
}
int max(struct node *p)
{
    int max = INT32_MIN;
    while (p != 0)
    {
        if (p->data > max)
        {
            max = p->data;
            p = p->next;
        }
    }
    return max;
}
struct node *Lsearch(struct node *p, int key)
{
    while (p != 0)
    {
        if (key == p->data)
            return p;
        p = p->next;
    }
    return 0;
}
void insert(struct node *p, int index, int x)
{
    struct node *t;
    if (index < 0 || index > count(p))
        return;
    t = (struct node *)malloc(sizeof(struct node));
    t->data = x;
    if (index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;
            t->next = p->next;
            p->next = t;
        }
    }
}
int Delete(struct node *p, int index)
{
    struct node *q = NULL;
    int x = -1;
    int i;
    if (index < 1 || index > count(p))
        return -1;
    if (index == 1)
    {
        p = first;
        x = first->data;
        first = first->next;
        free(p);
        return x;
    }
    else
    {
        for (i = 0; i < index - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        free(p);
    }
    return x;
}
int issorted(struct node *p)
{
    int x = -65536;
    while (p != NULL)
    {
        if (p->data < x)
            return 0;
        x = p->data;
        p = p->next;
    }
    return 1;
}
void Removeduplicate(struct node *p)
{

    struct node *q = p->next;
    while (q != NULL)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            free(q);
            q = p->next;
        }
    }
}
void reverse(struct node *p)
{
    int *A, i;
    struct node *q;
    A = (int *)malloc(sizeof(int) * count(p));
    while (q != NULL)
    {
        A[i] = q->data;
        q = q->next;
        i++;
    }
    q = p;
    i--;
    while (q != NULL)
    {
        q->data = A[i];
        q = q->next;
        i--;
    }
}
void create2(int B[], int n)
{
    int i;
    struct node *t, *last;
    second = (struct node *)malloc(sizeof(struct node));
    second->data = B[0];
    second->next = NULL;
    last = second;
    for (i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = B[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void concat(struct node *p, struct node *q)
{
    third = p;
    while (p->next != 0)
    {
        p = p->next;
    }
    p->next = q;
}
void merge(struct node *p, struct node *q)
{
    struct node *last;
    if (p->data < q->data)
    {
        third = last = p;
        p = p->next;
        third->next = NULL;
    }
    else
    {
        third = last = q;
        q = q->next;
        third->next = NULL;
    }
    while (p && q)
    {
        if (p->data < q->data)
        {
            last->next = p;
            last = p;
            p = p->next;
            last->next = NULL;
        }
        else
        {
            last->next = q;
            last = q;
            q = q->next;
            last->next = NULL;
        }
    }
    if (p )
        last->next = p;
    if (q )
        last->next = q;
}
int isloop(struct node*f){
    struct node*p,*q;
p=q=f;
do{
    p=p->next;
    q=q->next;
    q=q?q->next:q;

    }while(p && q && p!=q);


if(p==q)
return 1;
else
return 0;
}
int main()
{

    int A[] = {3, 4, 5, 6, 8};
    create(A, 5);
    rdisplay(first);
    printf("\n\n");

    int B[] = {3, 20, 30, 15, 8};
    create2(B, 5);
    rdisplay(second);
    printf("\n\n");
    

    merge(first,second);
    rdisplay(third);

//struct node*t1,*t2;
//t1=first->next->next;
//t2=first->next->next->next->next;
//t2->next=t1;
//printf("%d\n",isloop(first));

    return (0);
}
