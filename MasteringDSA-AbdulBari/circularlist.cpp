#include <iostream>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * head;
void create(int A[], int n)
{
    int i;
    struct node *t, *last;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = A[0];
    head->next = head;
    last = head;
    for (i = 0; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}
void display(struct node *p)
{
    do
    {
        printf("%d", head->data);
        head = head->next;
    } while (p != head);
    printf("\n");
}
void insert(struct node *p, int index, int x)
{

    struct node *t;

    if (index == 0)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = x;
        if (head == NULL)
        {
            head = t;
            head->next = head;
        }
        else
        {
            while (p->next != head)
            {
                p = p->next;
                t->next = head;
                head = t;
            }
        }
    }
    if (index != 0)
    {

        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;
            t = (struct node *)malloc(sizeof(struct node));
            t = new node;
            t->data = x;
            t->next = p->next;
            p->next = t;
        }
    }
}
int Delete(struct node *p, int index)
{
    int i,x;
    struct node *q;
    if (index == 1)
    {
        while (p->next != head)
        {
            x = head->data;
            if (head == p)
            {
                free(head);
                head = NULL;
            }

            else
            {
                p->next = head->next;
                free(head);
                head = p->next;
            }
        }
    }
    else
    {
        for (i = 0; i < index - 2; i++)
        {
            p = p->next;
            q = p->next;
            p->next = q->next;
            x =q->data;
            free(q);
        }
    }
    return x;
}

    int main()
    {

        int A[] = {3, 4, 5, 6, 7};
        create(A, 5);

        insert(head,1,8);
        display(head);

        Delete(head,2);
        display(head);
        return (0);
    }